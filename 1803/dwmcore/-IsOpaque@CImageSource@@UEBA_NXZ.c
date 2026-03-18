/*
 * XREFs of ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x1800B5170
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180074520 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800B3E20 (-GetPixelFormatInfo@CCachedVisualImage@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CBitmapResource@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800B5540 (-GetPixelFormatInfo@CBitmapResource@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CImageSource::IsOpaque(CImageSource *this)
{
  _DWORD *v1; // rcx
  __int64 (__fastcall *v2)(_DWORD *, _DWORD *); // rax
  _DWORD *PixelFormatInfo; // rax
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_DWORD *)((char *)this - 8);
  v2 = *(__int64 (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)v1 + 24LL);
  if ( (char *)v2 == (char *)CBitmapResource::GetPixelFormatInfo )
  {
    PixelFormatInfo = (_DWORD *)CBitmapResource::GetPixelFormatInfo(v1, v5);
  }
  else if ( (char *)v2 == (char *)CCachedVisualImage::GetPixelFormatInfo )
  {
    PixelFormatInfo = CCachedVisualImage::GetPixelFormatInfo(v1, v5);
  }
  else
  {
    PixelFormatInfo = (_DWORD *)v2(v1, v5);
  }
  return PixelFormatInfo[1] == 3;
}
