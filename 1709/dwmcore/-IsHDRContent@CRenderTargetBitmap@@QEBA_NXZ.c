/*
 * XREFs of ?IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ @ 0x18008B578
 * Callers:
 *     ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008E010 (-IsHDRContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsHDRContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x180150130 (-IsHDRContent@CRenderTargetImageSource@@UEBA_NXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F34 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x18008B4E0 (-GetPixelFormatInfo@CRenderTargetBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::IsHDRContent(CRenderTargetBitmap *this)
{
  char *v1; // rcx
  _DWORD *(__fastcall *v2)(__int64, _DWORD *); // rax
  _DWORD *PixelFormatInfo; // rax
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (char *)this + 144;
  v2 = *(_DWORD *(__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v1 + 24LL);
  if ( v2 == CRenderTargetBitmap::GetPixelFormatInfo )
    PixelFormatInfo = CRenderTargetBitmap::GetPixelFormatInfo((__int64)v1, v5);
  else
    PixelFormatInfo = v2((__int64)v1, v5);
  return IsDXGIColorSpaceHDR((enum DXGI_COLOR_SPACE_TYPE)PixelFormatInfo[2]);
}
