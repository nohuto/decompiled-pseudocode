/*
 * XREFs of ?IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z @ 0x1801F65B0
 * Callers:
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x1801F6448 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 *     ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801F64C0 (-Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapColorKey::IsSupportedColorKeyFormat(enum DXGI_FORMAT a1)
{
  unsigned int v1; // edx

  v1 = -2003292288;
  if ( a1 == DXGI_FORMAT_R32G32B32A32_FLOAT
    || a1 == DXGI_FORMAT_R16G16B16A16_FLOAT
    || a1 == DXGI_FORMAT_R8G8B8A8_UNORM
    || (unsigned int)(a1 - 87) <= 1 )
  {
    return 0;
  }
  return v1;
}
