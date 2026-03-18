/*
 * XREFs of MiJoinBitmapPages @ 0x14025B96C
 * Callers:
 *     MiReturnNonPagedPoolPde @ 0x1400DC5A0 (MiReturnNonPagedPoolPde.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiReturnPfnList @ 0x14017C188 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x140186104 (MiReturnSplitPageCharges.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MiJoinBitmapPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 *v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  BOOL v11; // esi
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-F8h] BYREF
  int v18; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v19; // [rsp+34h] [rbp-E4h]
  int v20; // [rsp+38h] [rbp-E0h]
  int v21; // [rsp+3Ch] [rbp-DCh]
  __int64 v22; // [rsp+40h] [rbp-D8h]
  __int64 v23; // [rsp+48h] [rbp-D0h]

  v6 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMakeValidPte((unsigned __int64)v6, qword_1403CC408, 536870913LL, a4);
  v7 = 0LL;
  if ( a3 )
  {
    do
    {
      v17 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
      *(_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = v7;
      v7 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      *v6 = ZeroPte;
      v11 = MiPteInShadowRange((unsigned __int64)v6);
      if ( v11 )
        MiWritePteShadow(v10, v9, v12);
      *v6 = v13;
      if ( v11 )
        MiWritePteShadow((__int64)v6, v13, v12);
      ++v6;
    }
    while ( v14 != 1 );
  }
  v21 = 0;
  v18 = 0;
  v19 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v20 = 20;
  MiInsertTbFlushEntry((__int64)&v18, a2, a3, 0);
  MiFlushTbList((__int64)&v18, v15, v16);
  MiReturnPfnList(v7);
  MiReturnSplitPageCharges((__int64)&MiSystemPartition, a3, 5);
}
