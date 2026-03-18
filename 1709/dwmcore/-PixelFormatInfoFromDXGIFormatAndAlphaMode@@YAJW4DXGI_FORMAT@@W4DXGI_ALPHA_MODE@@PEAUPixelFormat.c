/*
 * XREFs of ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x1800C0CCC
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18008FD08 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801A709C (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x1801AD268 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x1801D4320 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800823B4 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x1800823E4 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall PixelFormatInfoFromDXGIFormatAndAlphaMode(
        int a1,
        enum DXGI_ALPHA_MODE a2,
        struct PixelFormatInfo *a3)
{
  int v3; // edx
  int v4; // ecx
  __int64 v5; // r8
  signed int PixelFormatColorSpace; // eax
  unsigned int v7; // ebx

  *(_DWORD *)a3 = a1;
  if ( !(unsigned int)HasAlphaChannel(a1) )
    v3 = 3;
  *(_DWORD *)(v5 + 4) = v3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v4, (enum DXGI_COLOR_SPACE_TYPE *)(v5 + 8));
  v7 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, PixelFormatColorSpace, 0x3E5u);
  return v7;
}
