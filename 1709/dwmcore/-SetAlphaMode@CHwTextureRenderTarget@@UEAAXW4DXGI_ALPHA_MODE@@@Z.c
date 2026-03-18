/*
 * XREFs of ?SetAlphaMode@CHwTextureRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18008FB70
 * Callers:
 *     ?SetAlphaMode@CHwTextureRenderTarget@@WMA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800C6B10 (-SetAlphaMode@CHwTextureRenderTarget@@WMA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetAlphaMode@CHwTextureRenderTarget@@WMI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800C6B20 (-SetAlphaMode@CHwTextureRenderTarget@@WMI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwTextureRenderTarget::SetAlphaMode(CHwTextureRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v2; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 59) != a2 )
  {
    v3[0] = *((_DWORD *)this + 58);
    v3[2] = *((_DWORD *)this + 60);
    v2 = *(_QWORD *)this;
    v3[1] = a2;
    (*(void (__fastcall **)(CHwTextureRenderTarget *, _DWORD *))(v2 + 208))(this, v3);
  }
}
