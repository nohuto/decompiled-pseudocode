/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CA1F0
 * Callers:
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18001F4A4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?Initialize@CDrawingContext@@EEAAJXZ @ 0x18006E500 (-Initialize@CDrawingContext@@EEAAJXZ.c)
 *     ?AddRef@CHwBitmapCache@@WBI@EAAKXZ @ 0x1800DDE90 (-AddRef@CHwBitmapCache@@WBI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@WHI@EAAKXZ @ 0x1800DDEA0 (-AddRef@CD3DSurface@@WHI@EAAKXZ.c)
 *     ?AddRef@CHwBitmapColorSource@@WHA@EAAKXZ @ 0x1800DE530 (-AddRef@CHwBitmapColorSource@@WHA@EAAKXZ.c)
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x1801B0500 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
