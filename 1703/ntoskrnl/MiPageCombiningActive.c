/*
 * XREFs of MiPageCombiningActive @ 0x1401036F8
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140083DBC (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_14036C704 != 0;
  if ( *(_DWORD *)(a1 + 5216) && ((ULONG_PTR *)a1 != &MiSystemPartition || dword_14036C758) )
    return 1;
  return result;
}
