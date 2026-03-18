/*
 * XREFs of BgpFoGetAdvanceWidth @ 0x1402664A0
 * Callers:
 *     BgpTxtDisplayString @ 0x14075AB90 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall BgpFoGetAdvanceWidth(int a1, int a2, int a3, int a4, __int64 a5)
{
  return BgpRasGetGlyphAdvanceWidth(a1, a2, a3, a4, a5);
}
