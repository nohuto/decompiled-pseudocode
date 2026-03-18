/*
 * XREFs of MiClearContainingMapping @ 0x1400B7E88
 * Callers:
 *     MiDeleteTopLevelPage @ 0x14017BDD4 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  __int64 *v7; // r9
  __int64 PteShadow; // rax
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = *(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( result == ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v6 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000LL);
    v7 = (__int64 *)(v6 + 8LL * v4);
    PteShadow = *v7;
    v9 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v7, *v7);
    if ( (PteShadow & 1) != 0 )
    {
      v10 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      *v7 = v10;
      v5 = 0xFFFFF6FB7DBED000uLL;
      if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL )
      {
        v5 = v9;
        if ( (unsigned __int64)v7 <= v9 )
          MiWritePteShadow(v7, v10);
      }
    }
    LOBYTE(v5) = 17;
    return MiUnmapPageInHyperSpaceWorker(v6, v5, 0x80000000LL);
  }
  return result;
}
