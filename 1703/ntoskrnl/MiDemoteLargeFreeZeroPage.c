/*
 * XREFs of MiDemoteLargeFreeZeroPage @ 0x140125774
 * Callers:
 *     MiGetLargePageDemoteAsNeeded @ 0x140128DC4 (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x1400C58B0 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiGetFreeZeroLargePage @ 0x140128E70 (MiGetFreeZeroLargePage.c)
 */

__int64 __fastcall MiDemoteLargeFreeZeroPage(int a1, int a2, int a3, int a4)
{
  int v8; // ebx
  __int64 FreeZeroLargePage; // rax

  v8 = a3;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    FreeZeroLargePage = MiGetFreeZeroLargePage(a1, --v8, a4, a2, 4);
    if ( FreeZeroLargePage )
      break;
    if ( !v8 )
      return 0LL;
  }
  do
  {
    MiInsertLargePageInFreeOrZeroList(FreeZeroLargePage, v8++, 0);
    if ( v8 == a3 )
      break;
    FreeZeroLargePage = MiGetFreeZeroLargePage(a1, v8, a4, a2, 4);
  }
  while ( FreeZeroLargePage );
  return 1LL;
}
