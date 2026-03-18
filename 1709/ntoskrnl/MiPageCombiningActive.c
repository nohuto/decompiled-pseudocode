/*
 * XREFs of MiPageCombiningActive @ 0x1400ED77C
 * Callers:
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     MiSignalLargePageRebuild @ 0x1400F00E0 (MiSignalLargePageRebuild.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 5352) == 0;
  else
    v1 = dword_140388A84 == 0;
  return !v1;
}
