/*
 * XREFs of xxxFlushPalette @ 0x1C02044E0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 * Callees:
 *     GreRealizeDefaultPalette @ 0x1C00DF9CC (GreRealizeDefaultPalette.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0204454 (xxxBroadcastPaletteChanged.c)
 */

__int64 __fastcall xxxFlushPalette(unsigned __int64 *a1, int a2)
{
  GreRealizeDefaultPalette(*(HDC *)(gpDispInfo + 48LL), a2);
  return xxxBroadcastPaletteChanged(a1);
}
