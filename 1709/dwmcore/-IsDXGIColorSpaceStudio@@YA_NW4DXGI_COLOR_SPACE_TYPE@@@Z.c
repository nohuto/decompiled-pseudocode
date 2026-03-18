/*
 * XREFs of ?IsDXGIColorSpaceStudio@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014349C
 * Callers:
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180143720 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDXGIColorSpaceStudio(int a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 <= 10 )
  {
    if ( a1 != 10 && (a1 < 2 || a1 > 3 && a1 != 6 && a1 != 8) )
      return v1;
    return 1;
  }
  if ( a1 >= 13 && (a1 <= 16 || a1 == 18 || (unsigned int)(a1 - 20) <= 4) )
    return 1;
  return v1;
}
