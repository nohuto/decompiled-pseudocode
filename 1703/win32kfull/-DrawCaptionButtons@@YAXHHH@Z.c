/*
 * XREFs of ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00D6334
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C002A968 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 */

void __fastcall DrawCaptionButtons()
{
  BitBltSysBmp(*(HDC *)(gpDispInfo + 56LL));
  BitBltSysBmp(*(HDC *)(gpDispInfo + 56LL));
  BitBltSysBmp(*(HDC *)(gpDispInfo + 56LL));
  BitBltSysBmp(*(HDC *)(gpDispInfo + 56LL));
}
