/*
 * XREFs of ?SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18019C690
 * Callers:
 *     ?SetAlphaMode@CHwDisplayRenderTarget@@WLA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800D6510 (-SetAlphaMode@CHwDisplayRenderTarget@@WLA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::SetAlphaMode(CHwDisplayRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v2; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 74) != a2 )
  {
    v3[0] = *((_DWORD *)this + 60);
    v3[2] = *((_DWORD *)this + 75);
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 74) = a2;
    v3[1] = a2;
    (*(void (__fastcall **)(CHwDisplayRenderTarget *, _DWORD *))(v2 + 200))(this, v3);
  }
}
