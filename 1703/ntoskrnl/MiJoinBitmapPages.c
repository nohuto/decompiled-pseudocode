/*
 * XREFs of MiJoinBitmapPages @ 0x140216A20
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiReturnPfnList @ 0x14015B5D8 (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x1401677FC (MiReturnSplitPageCharges.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

ULONG_PTR *__fastcall MiJoinBitmapPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // r10
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r10
  BOOL v11; // ebp
  __int64 v12; // r11
  _KPROCESS *v13; // rdx
  __int64 v15; // [rsp+20h] [rbp-108h] BYREF
  int v16; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v17; // [rsp+34h] [rbp-F4h]
  __int64 v18; // [rsp+38h] [rbp-F0h]
  __int64 v19; // [rsp+40h] [rbp-E8h]
  __int64 v20; // [rsp+48h] [rbp-E0h]

  v5 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMakeValidPte((unsigned __int64)v5, qword_14036CEC8, 536870913);
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v15 = MI_READ_PTE_LOCK_FREE(v5);
      v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
      *(_QWORD *)(48 * v9 - 0x58000000000LL) = v7;
      v7 = 48 * v9 - 0x58000000000LL;
      *v5 = v10;
      v11 = MiPteInShadowRange((unsigned __int64)v5);
      if ( v11 )
        MiWritePteShadow();
      *v5 = v12;
      if ( v11 )
        MiWritePteShadow();
      ++v5;
      --v8;
    }
    while ( v8 );
  }
  v18 = 20LL;
  v16 = v6;
  v17 = v6;
  v19 = v6;
  v20 = v6;
  MiInsertTbFlushEntry((__int64)&v16, a2, a3, 0);
  MiFlushTbList((__int64)&v16, v13);
  MiReturnPfnList(v7);
  return MiReturnSplitPageCharges((__int64)&MiSystemPartition, a3, 5u);
}
