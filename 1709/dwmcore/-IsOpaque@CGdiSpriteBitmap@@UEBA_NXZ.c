/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18009D400
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18001F5A0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     <none>
 */

char __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  char result; // al

  result = 0;
  if ( *((char *)this + 60) >= 0 && *((_DWORD *)this + 9) == 3 )
    return 1;
  return result;
}
