/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800C1B10
 * Callers:
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800408C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18007DAF0 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18007FED4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?AddRef@CHwBitmapCache@@WBI@EAAKXZ @ 0x1800C67F0 (-AddRef@CHwBitmapCache@@WBI@EAAKXZ.c)
 *     ?AddRef@CD3DSurface@@WHI@EAAKXZ @ 0x1800C6D60 (-AddRef@CD3DSurface@@WHI@EAAKXZ.c)
 *     ?AddRef@CHwBitmapColorSource@@WHA@EAAKXZ @ 0x1800C6DA0 (-AddRef@CHwBitmapColorSource@@WHA@EAAKXZ.c)
 *     ?ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_CREATE@@@Z @ 0x18013A088 (-ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
