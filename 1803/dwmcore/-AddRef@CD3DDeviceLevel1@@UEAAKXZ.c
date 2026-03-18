/*
 * XREFs of ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x1800765D0
 * Callers:
 *     ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800462E0 (-GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800768D0 (-QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CD3DDeviceLevel1@@WBNI@EAAKXZ @ 0x1800DDE10 (-AddRef@CD3DDeviceLevel1@@WBNI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceLevel1::AddRef(CD3DDeviceLevel1 *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 120);
}
