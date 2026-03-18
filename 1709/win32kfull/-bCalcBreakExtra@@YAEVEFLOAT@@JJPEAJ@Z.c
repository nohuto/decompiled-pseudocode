/*
 * XREFs of ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C011C5F4
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C000948C (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0024D08 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C0035FB8 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C0296A50 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C010F628 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
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
