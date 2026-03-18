/*
 * XREFs of ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C0114AF0
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0004120 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C007C130 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C008AFD0 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C029A384 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 * Callees:
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00FD680 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

bool __fastcall bCalcBreakExtra(int a1, int a2, int a3, int *a4)
{
  bool result; // al
  int v7; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( a2 )
  {
    v7 = 0;
    bFToL((float)a2 * *(float *)&a1, &v7, 0);
    if ( !(unsigned int)SafeDivide<long,long,long>(v7, a3, a4) )
      return 1;
  }
  return result;
}
