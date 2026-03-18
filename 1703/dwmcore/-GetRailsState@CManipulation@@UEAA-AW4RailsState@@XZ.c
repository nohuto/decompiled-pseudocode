/*
 * XREFs of ?GetRailsState@CManipulation@@UEAA?AW4RailsState@@XZ @ 0x1800CC8A0
 * Callers:
 *     ?GetColorSpace@CHwTextureRenderTarget@@WLA@EAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800D61C0 (-GetColorSpace@CHwTextureRenderTarget@@WLA@EAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulation::GetRailsState(__int64 a1)
{
  return *(unsigned int *)(a1 + 224);
}
