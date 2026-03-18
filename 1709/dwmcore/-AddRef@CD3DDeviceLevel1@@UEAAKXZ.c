/*
 * XREFs of ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x18001FEA0
 * Callers:
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021C80 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18002B750 (-GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?AddRef@CD3DDeviceLevel1@@WBNI@EAAKXZ @ 0x1800C67D0 (-AddRef@CD3DDeviceLevel1@@WBNI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceLevel1::AddRef(CD3DDeviceLevel1 *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 120);
}
