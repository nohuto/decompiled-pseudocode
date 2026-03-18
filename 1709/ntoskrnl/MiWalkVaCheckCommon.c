/*
 * XREFs of MiWalkVaCheckCommon @ 0x140010EE4
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x140010BF0 (MiEmptyWorkingSetHelper.c)
 *     MiTrimPte @ 0x140010D30 (MiTrimPte.c)
 *     MiResetAccessBitPte @ 0x14021DF00 (MiResetAccessBitPte.c)
 *     MiSimpleAgePte @ 0x14021E290 (MiSimpleAgePte.c)
 *     MiUpdateOldPte @ 0x14021E890 (MiUpdateOldPte.c)
 * Callees:
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiWalkVaCheckCommon(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 *a5)
{
  __int64 v7; // r8
  __int64 PteShadow; // rax

  if ( !a4 && (*(_QWORD *)(a3 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  v7 = *(_QWORD *)(a3 + 8);
  if ( v7 >= 0 && (unsigned int)MiDemoteCombinedPte(a1, a2, v7 | 0x8000000000000000uLL) == 1 )
  {
    PteShadow = *a2;
    if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a2, *a2);
    *a5 = PteShadow;
  }
  return 1LL;
}
