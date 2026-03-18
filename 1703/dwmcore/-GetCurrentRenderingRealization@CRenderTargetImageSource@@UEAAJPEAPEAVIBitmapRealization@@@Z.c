/*
 * XREFs of ?GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180016750
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 *     ?GetSurfaceSize@CBrushRenderingGraph@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18001637C (-GetSurfaceSize@CBrushRenderingGraph@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

__int64 __fastcall CRenderTargetImageSource::GetCurrentRenderingRealization(
        CRenderTargetImageSource *this,
        struct IBitmapRealization **a2)
{
  *a2 = (struct IBitmapRealization *)(((unsigned __int64)this + 112) & -(__int64)(this != 0LL));
  CBitmapOfDeviceBitmaps::AddRef((CRenderTargetImageSource *)((char *)this + 8));
  return 0LL;
}
