/*
 * XREFs of ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CC240
 * Callers:
 *     ?GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z @ 0x18004B100 (-GetRealizer@CLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCLegacyMilBrushRealizer@@@Z.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800A99D0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800C51B4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?AddRef@CD3DSurface@@WIA@EAAKXZ @ 0x1800D5F80 (-AddRef@CD3DSurface@@WIA@EAAKXZ.c)
 *     ?AddRef@CHwBitmapCache@@WBI@EAAKXZ @ 0x1800D6530 (-AddRef@CHwBitmapCache@@WBI@EAAKXZ.c)
 *     ?AddRef@CHwBitmapColorSource@@WGI@EAAKXZ @ 0x1800D6550 (-AddRef@CHwBitmapColorSource@@WGI@EAAKXZ.c)
 *     ?ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_CREATE@@@Z @ 0x18012D310 (-ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationFrame::AddRef(CManipulationFrame *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
