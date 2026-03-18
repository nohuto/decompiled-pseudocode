/*
 * XREFs of MiZeroAndFlushPtes @ 0x140123AB4
 * Callers:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapIoSpace @ 0x1401238F0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1)
{
  unsigned __int64 v1; // r12
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // r11
  __int64 v5; // rcx
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rtt
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // rsi
  __int64 v17; // r15
  __int64 v18; // r9
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  unsigned int v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+40h] [rbp-C8h]
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+4Ch] [rbp-BCh]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+60h] [rbp-A8h]
  _QWORD v30[32]; // [rsp+108h] [rbp+0h] BYREF

  v1 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 1LL;
  v21 = MI_IS_PHYSICAL_ADDRESS(a1);
  v5 = v21;
  if ( v21 )
  {
    do
    {
      v3 <<= 9;
      v2 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v5;
    }
    while ( v5 );
  }
  v6 = 0;
  v27 = 20LL;
  v25 = 0;
  v26 = 0;
  v28 = 0LL;
  v29 = 0LL;
  while ( 1 )
  {
    v8 = v4;
    v7 = v4 % v3;
    v4 = v7;
    v24 = v7;
    v23 = v2 + 8 * (v8 / v3);
    if ( v2 < v23 )
    {
      do
      {
        v22 = MI_READ_PTE_LOCK_FREE(v2);
        v9 = MI_READ_PTE_LOCK_FREE(&v22);
        *(_QWORD *)v2 = 0LL;
        v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
        if ( (unsigned int)MiPteInShadowRange(v2) )
          MiWritePteShadow(v11);
        MiInsertTbFlushEntry((__int64)&v25, v1, 1LL, v12);
        if ( !MiIsPfnInline(v10) )
        {
          if ( v6 && (v13 = v30[2 * v6 - 1], v13 == v10) )
          {
            v30[2 * v6 - 1] = v3 + v13;
          }
          else
          {
            v14 = 2LL * v6++;
            v30[v14] = v10;
            v30[v14 + 1] = v10 + v3;
            if ( v6 == 16 )
            {
              MiFlushTbList((__int64)&v25, (_KPROCESS *)v7);
              v16 = v30;
              v17 = 16LL;
              do
              {
                MiDereferenceIoPages(1LL, *v16, v16[1] - *v16, v15);
                v16 += 2;
                --v17;
              }
              while ( v17 );
              v6 = 0;
            }
          }
        }
        v2 += 8LL;
        v1 += v3 << 12;
      }
      while ( v2 < v23 );
      v4 = v24;
    }
    if ( !v4 )
      break;
    v3 = 1LL;
    v2 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  MiFlushTbList((__int64)&v25, (_KPROCESS *)v7);
  v19 = v6;
  if ( v6 )
  {
    v20 = v30;
    do
    {
      MiDereferenceIoPages(1LL, *v20, v20[1] - *v20, v18);
      v20 += 2;
      --v19;
    }
    while ( v19 );
  }
}
