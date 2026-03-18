/*
 * XREFs of ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18004C380
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18001F5A0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x1800488DC (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18006CA90 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 *     ?GetPixelFormatInfo@CD2DBitmap@@W7EBA?AUPixelFormatInfo@@XZ @ 0x1800C63A0 (-GetPixelFormatInfo@CD2DBitmap@@W7EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  *a2 = a1[20];
  a2[1] = a1[29];
  a2[2] = a1[36];
  return a2;
}
