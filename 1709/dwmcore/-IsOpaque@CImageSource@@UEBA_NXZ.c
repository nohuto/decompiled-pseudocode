/*
 * XREFs of ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x18008D3E0
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18001F5A0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 * Callees:
 *     ?GetPixelFormatInfo@CBitmapResource@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008D510 (-GetPixelFormatInfo@CBitmapResource@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008DBD0 (-GetPixelFormatInfo@CCachedVisualImage@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CImageSource::IsOpaque(CImageSource *this)
{
  char *v1; // rcx
  __int64 (__fastcall *v2)(char *, _BYTE *); // rax
  __int64 PixelFormatInfo; // rax
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this - 8;
  v2 = *(__int64 (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v1 + 24LL);
  if ( (char *)v2 == (char *)CBitmapResource::GetPixelFormatInfo )
  {
    PixelFormatInfo = CBitmapResource::GetPixelFormatInfo(v1, v5);
  }
  else if ( (char *)v2 == (char *)CCachedVisualImage::GetPixelFormatInfo )
  {
    PixelFormatInfo = CCachedVisualImage::GetPixelFormatInfo(v1, v5);
  }
  else
  {
    PixelFormatInfo = v2(v1, v5);
  }
  return *(_DWORD *)(PixelFormatInfo + 4) == 3;
}
