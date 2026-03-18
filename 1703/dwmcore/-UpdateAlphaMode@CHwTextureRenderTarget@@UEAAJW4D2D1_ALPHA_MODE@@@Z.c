/*
 * XREFs of ?UpdateAlphaMode@CHwTextureRenderTarget@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x18019C0D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::UpdateAlphaMode(CHwTextureRenderTarget *this, enum D2D1_ALPHA_MODE a2)
{
  _DWORD v3[4]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 != *((_DWORD *)this + 9) )
  {
    v3[0] = *((_DWORD *)this + 8);
    v3[2] = *((_DWORD *)this + 10);
    v3[1] = a2;
    (*(void (__fastcall **)(char *, _DWORD *))(*((_QWORD *)this - 23) + 200LL))((char *)this - 184, v3);
  }
  return 0LL;
}
