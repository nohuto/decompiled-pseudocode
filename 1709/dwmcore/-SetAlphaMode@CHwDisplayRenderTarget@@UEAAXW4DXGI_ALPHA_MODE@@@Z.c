/*
 * XREFs of ?SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1801AE5D0
 * Callers:
 *     ?SetAlphaMode@CHwDisplayRenderTarget@@WMA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800C6D20 (-SetAlphaMode@CHwDisplayRenderTarget@@WMA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::SetAlphaMode(CHwDisplayRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx
  _BYTE v5[4]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+24h] [rbp-24h]
  int v7; // [rsp+28h] [rbp-20h]

  if ( *((_DWORD *)this + 78) != a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    {
      v4 = *((_QWORD *)this + 23) + 120LL;
      *((_DWORD *)this + 78) = a2;
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v5);
      v6 = *((_DWORD *)this + 78);
      v7 = *((_DWORD *)this + 79);
      (*(void (__fastcall **)(CHwDisplayRenderTarget *, _BYTE *))(*(_QWORD *)this + 208LL))(this, v5);
    }
  }
}
