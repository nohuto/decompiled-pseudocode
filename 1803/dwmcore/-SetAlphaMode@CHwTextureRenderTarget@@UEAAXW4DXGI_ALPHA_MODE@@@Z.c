/*
 * XREFs of ?SetAlphaMode@CHwTextureRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180078380
 * Callers:
 *     ?SetAlphaMode@CHwTextureRenderTarget@@WNI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800DE190 (-SetAlphaMode@CHwTextureRenderTarget@@WNI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetAlphaMode@CHwTextureRenderTarget@@WOA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800DE1A0 (-SetAlphaMode@CHwTextureRenderTarget@@WOA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwTextureRenderTarget::SetAlphaMode(CHwTextureRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v2; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 65) != a2 )
  {
    v3[0] = *((_DWORD *)this + 64);
    v3[2] = *((_DWORD *)this + 66);
    v2 = *(_QWORD *)this;
    v3[1] = a2;
    (*(void (__fastcall **)(CHwTextureRenderTarget *, _DWORD *))(v2 + 248))(this, v3);
  }
}
