/*
 * XREFs of MiPageCombiningActive @ 0x1400DA778
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1400809A4 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 6440) == 0;
  else
    v1 = dword_1403CBD04 == 0;
  return !v1;
}
