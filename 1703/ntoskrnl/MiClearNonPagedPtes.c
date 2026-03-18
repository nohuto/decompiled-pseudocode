/*
 * XREFs of MiClearNonPagedPtes @ 0x1400A7AB0
 * Callers:
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockNonPagedPoolPte @ 0x1400A7D10 (MiLockNonPagedPoolPte.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140217AD8 (MiLogNonPagedPoolReleaseEvent.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiClearNonPagedPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // r12d
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  int v7; // r15d
  int v8; // eax
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r10
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r11d
  signed __int32 v20[8]; // [rsp+0h] [rbp-138h] BYREF
  char v21[8]; // [rsp+20h] [rbp-118h] BYREF
  __int64 updated; // [rsp+28h] [rbp-110h] BYREF
  int v23; // [rsp+30h] [rbp-108h] BYREF
  __int16 v24; // [rsp+34h] [rbp-104h]
  __int64 v25; // [rsp+38h] [rbp-100h]
  __int64 v26; // [rsp+40h] [rbp-F8h]
  __int64 i; // [rsp+48h] [rbp-F0h]

  v3 = MmProtectFreedNonPagedPool;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = 20LL;
  v23 = 0;
  v5 = 0LL;
  v24 = 0;
  v6 = 0LL;
  v26 = 0LL;
  v7 = 1;
  for ( i = 0LL; v6 < a2; v6 += v10 )
  {
    if ( v7 != 1 && (v4 & 0xFFF) != 0 )
      goto LABEL_10;
    v7 = 0;
    v8 = MI_IS_PHYSICAL_ADDRESS((__int64)(v4 << 25) >> 16);
    if ( !v8 )
      goto LABEL_10;
    do
    {
      v9 <<= 9;
      --v8;
    }
    while ( v8 );
    if ( v9 > 1 )
    {
      v10 = a2 - v6;
      v11 = v9 - ((v4 >> 3) & 0x1FF);
      if ( v11 + v6 <= a2 )
        v10 = v11;
      v4 += 8 * v10;
    }
    else
    {
LABEL_10:
      MiLockNonPagedPoolPte(v4, v21);
      updated = MI_READ_PTE_LOCK_FREE(v4);
      v13 = *(_BYTE *)(v12 + 34) & 0xFD;
      *(_QWORD *)v12 = v5;
      v5 = v12;
      *(_BYTE *)(v12 + 34) = v13 | 5;
      *(_QWORD *)v4 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v4) )
        MiWritePteShadow(v14);
      if ( v21[0] != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8((unsigned __int8)v21[0]);
      }
      updated = 0LL;
      v16 = 0LL;
      if ( !v3 )
      {
        v17 = MI_READ_PTE_LOCK_FREE(&updated);
        _InterlockedOr(v20, 0);
        updated = MiUpdatePageFileHighInPte(v17, (unsigned int)KiTbFlushTimeStamp);
        if ( (unsigned int)MiPteInShadowRange(&updated) )
          MiWritePteShadow(&updated);
        v16 = updated;
        *(_QWORD *)v4 = updated;
        if ( v18 )
          MiWritePteShadow(v4);
      }
      if ( !MiGetPteTimeStamp(v16) )
        MiInsertTbFlushEntry(&v23, (__int64)(v4 << 25) >> 16, 1LL, 0LL);
      v4 += 8LL;
      v10 = 1LL;
    }
  }
  MiFlushTbList(&v23);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && v5 )
    MiLogNonPagedPoolReleaseEvent(v5);
  return v5;
}
