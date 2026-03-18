/*
 * XREFs of MiJoinBitmapPages @ 0x1402201F0
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiReturnSplitPageCharges @ 0x14013907C (MiReturnSplitPageCharges.c)
 *     MiReturnPfnList @ 0x1401390C4 (MiReturnPfnList.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

void __fastcall MiJoinBitmapPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rbp
  unsigned __int64 v11; // rsi
  __int64 PteShadow; // rax
  __int64 *v13; // rax
  __int64 v14; // r11
  _KPROCESS *v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-108h] BYREF
  int v17; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v18; // [rsp+34h] [rbp-F4h]
  __int64 v19; // [rsp+38h] [rbp-F0h]
  __int64 v20; // [rsp+40h] [rbp-E8h]
  __int64 v21; // [rsp+48h] [rbp-E0h]

  v5 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMakeValidPte((unsigned __int64)v5, qword_140389188, 536870913);
  v9 = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    v11 = a3;
    do
    {
      PteShadow = *v5;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v16 = PteShadow;
      v13 = (__int64 *)MI_GET_PFN_FROM_PTE(&v16, v6, v7, v8);
      *v13 = v10;
      v10 = (__int64)v13;
      *v5 = v9;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      *v5 = v14;
      if ( (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v5 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      ++v5;
      --v11;
    }
    while ( v11 );
  }
  v19 = 20LL;
  v17 = v9;
  v18 = v9;
  v20 = v9;
  v21 = v9;
  MiInsertTbFlushEntry(&v17, a2, a3, 0);
  MiFlushTbList((__int64)&v17, v15);
  MiReturnPfnList(v10);
  MiReturnSplitPageCharges((__int64)&MiSystemPartition, a3, 5);
}
