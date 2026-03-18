/*
 * XREFs of ?SetColorSpace@CHwTextureRenderTarget@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801AD5D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwTextureRenderTarget::SetColorSpace(CHwTextureRenderTarget *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 10) != a2 )
  {
    v2[0] = *((_DWORD *)this + 8);
    v2[1] = *((_DWORD *)this + 9);
    v2[2] = a2;
    (*(void (__fastcall **)(char *, _DWORD *))(*((_QWORD *)this - 25) + 208LL))((char *)this - 200, v2);
  }
}
