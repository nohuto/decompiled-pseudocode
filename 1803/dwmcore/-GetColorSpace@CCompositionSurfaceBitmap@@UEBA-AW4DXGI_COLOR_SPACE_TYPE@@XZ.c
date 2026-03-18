/*
 * XREFs of ?GetColorSpace@CCompositionSurfaceBitmap@@UEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180186DF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetColorSpace(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
    return *(unsigned int *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v1 + 144) + 24LL))(v1 + 144, v3)
                           + 8);
  else
    return 0xFFFFFFFFLL;
}
