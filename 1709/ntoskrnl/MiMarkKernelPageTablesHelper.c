/*
 * XREFs of MiMarkKernelPageTablesHelper @ 0x14042F368
 * Callers:
 *     MiMarkKernelPageTablePages @ 0x14042F2CC (MiMarkKernelPageTablePages.c)
 *     MiMarkKernelPageTablesHelper @ 0x14042F368 (MiMarkKernelPageTablesHelper.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 *     MiMarkKernelPageTablesHelper @ 0x14042F368 (MiMarkKernelPageTablesHelper.c)
 */

void __fastcall MiMarkKernelPageTablesHelper(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rbx
  __int64 PteShadow; // rax
  void *v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 <= a2 )
  {
    v5 = a1;
    do
    {
      PteShadow = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v8 = PteShadow;
      if ( (PteShadow & 1) != 0 && (PteShadow & 0x80u) == 0LL )
      {
        v7 = (void *)MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v8);
        PoSetHiberRange(0LL, 0x14000u, v7, 1uLL, 0x706B6D4Du);
        if ( a3 > 2 )
          MiMarkKernelPageTablesHelper((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4088, a3 - 1);
      }
      v5 += 8LL;
    }
    while ( v5 <= a2 );
  }
}
