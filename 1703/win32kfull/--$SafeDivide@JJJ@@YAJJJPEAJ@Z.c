/*
 * XREFs of ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00FD680
 * Callers:
 *     ?bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0056250 (-bWin31BitmapHeightScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00564F0 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0056BD0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C007B198 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C0114AF0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C013949C (-bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeDivide<long,long,long>(int a1, int a2, int *a3)
{
  if ( !a2 || a1 == 0x80000000 && a2 == -1 )
    return 2147500037LL;
  *a3 = a1 / a2;
  return 0LL;
}
