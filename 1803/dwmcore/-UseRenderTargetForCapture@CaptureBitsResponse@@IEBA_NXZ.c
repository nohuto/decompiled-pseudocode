/*
 * XREFs of ?UseRenderTargetForCapture@CaptureBitsResponse@@IEBA_NXZ @ 0x18001E2A8
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18001E650 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CaptureBitsResponse::UseRenderTargetForCapture(CaptureBitsResponse *this)
{
  char v1; // bl
  __int64 v2; // rcx
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 27) )
  {
    v2 = *((_QWORD *)this + 5);
    if ( v2 )
      return *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v2 + 24LL))(v2, v4) + 8) == 0;
  }
  return v1;
}
