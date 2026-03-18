/*
 * XREFs of xxxFlushPalette @ 0x1C02029D0
 * Callers:
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C0112954 (GreRealizeDefaultPalette.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 48LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
