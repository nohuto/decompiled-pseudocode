/*
 * XREFs of ?IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ @ 0x18001D190
 * Callers:
 *     ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001C3A0 (-IsHDRContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsHDRContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x180179920 (-IsHDRContent@CRenderTargetImageSource@@UEBA_NXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B694C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CRenderTargetBitmap::IsHDRContent(CRenderTargetBitmap *this)
{
  __int64 v1; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 18) + 24LL))((char *)this + 144, v3);
  return IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v1 + 8));
}
