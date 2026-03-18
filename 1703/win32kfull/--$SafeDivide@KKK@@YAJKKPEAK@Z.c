/*
 * XREFs of ??$SafeDivide@KKK@@YAJKKPEAK@Z @ 0x1C010452C
 * Callers:
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00564F0 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0056BD0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeDivide<unsigned long,unsigned long,unsigned long>(unsigned int a1, unsigned int a2, int *a3)
{
  if ( !a2 )
    return 2147500037LL;
  *a3 = a1 / a2;
  return 0LL;
}
