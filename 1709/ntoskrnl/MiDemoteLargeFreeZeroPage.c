/*
 * XREFs of MiDemoteLargeFreeZeroPage @ 0x14012E980
 * Callers:
 *     MiGetLargePageDemoteAsNeeded @ 0x1400C7BD4 (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x14004DAD0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiGetFreeZeroLargePage @ 0x1400C4F80 (MiGetFreeZeroLargePage.c)
 */

__int64 __fastcall MiDemoteLargeFreeZeroPage(int a1, int a2, unsigned int a3, __int16 a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // edi
  __int64 FreeZeroLargePage; // rax
  __int64 v12; // rax

  v8 = a3;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    v9 = v8--;
    FreeZeroLargePage = MiGetFreeZeroLargePage(a1, v8, a4, a2, 0, 4);
    if ( FreeZeroLargePage )
      break;
    if ( !v8 )
      return 0LL;
  }
  MiInsertLargePageInFreeOrZeroList(FreeZeroLargePage, v8, 0, 0, 0);
  while ( v9 != a3 )
  {
    v12 = MiGetFreeZeroLargePage(a1, v9, a4, a2, 0, 4);
    if ( !v12 )
      break;
    MiInsertLargePageInFreeOrZeroList(v12, v9++, 0, 0, 0);
  }
  return 1LL;
}
