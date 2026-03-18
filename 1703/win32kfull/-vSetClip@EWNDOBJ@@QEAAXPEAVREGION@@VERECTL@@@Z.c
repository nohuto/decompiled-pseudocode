/*
 * XREFs of ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0267BE0
 * Callers:
 *     GreClientRgnUpdated @ 0x1C006CC5C (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0267808 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C0267C2C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x1C0267E40 (EngCreateWnd.c)
 *     GreSetClientRgn @ 0x1C0268540 (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

_BOOL8 __fastcall EWNDOBJ::vSetClip(__int64 a1, struct REGION *a2, _OWORD *a3)
{
  _BOOL8 result; // rax

  XCLIPOBJ::vSetup((XCLIPOBJ *)a1, a2, (struct ERECTL *)&grclMax, 0);
  *(_OWORD *)(a1 + 32) = *a3;
  result = ERECTL::bEmpty((ERECTL *)(a1 + 4));
  if ( result )
    *(_BYTE *)(a1 + 20) = 1;
  return result;
}
