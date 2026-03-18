/*
 * XREFs of ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x18000DE94
 * Callers:
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x18000D4F0 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18000DDC8 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z @ 0x1801E6748 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX_N@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z @ 0x180216250 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@VDisplayId@@_N@Z.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180021D54 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180021D84 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall PixelFormatInfoFromDXGIFormatAndAlphaMode(
        enum DXGI_FORMAT a1,
        enum DXGI_ALPHA_MODE a2,
        struct PixelFormatInfo *a3)
{
  int v3; // edx
  __int64 v4; // r8
  int PixelFormatColorSpace; // eax
  unsigned int v6; // ebx

  *(_DWORD *)a3 = a1;
  if ( !(unsigned int)HasAlphaChannel(a1) )
    v3 = 3;
  *(_DWORD *)(v4 + 4) = v3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(
                            (enum DXGI_FORMAT)*(_DWORD *)v4,
                            (enum DXGI_COLOR_SPACE_TYPE *)(v4 + 8));
  v6 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, PixelFormatColorSpace, 0x3E5u);
  return v6;
}
