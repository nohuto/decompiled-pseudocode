/*
 * XREFs of ?IsOfType@CColorGradientStop@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800721C0
 * Callers:
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18007148C (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLOR.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorGradientStop::IsOfType(__int64 a1, int a2)
{
  return a2 == 17;
}
