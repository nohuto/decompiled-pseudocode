/*
 * XREFs of ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x180184EF0
 * Callers:
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180181AA8 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetCurrentVelocity(CMotion *this)
{
  __int64 v1; // r8
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 23);
  if ( v1 )
    return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v1 + 40LL))(*((_QWORD *)this + 23), v3) + 8);
  else
    return *((float *)this + 7);
}
