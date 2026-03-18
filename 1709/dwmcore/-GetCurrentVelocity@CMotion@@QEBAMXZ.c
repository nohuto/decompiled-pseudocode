/*
 * XREFs of ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18018CFD4
 * Callers:
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x180188E3C (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetCurrentVelocity(CMotion *this)
{
  __int64 v1; // r8
  _BYTE v3[24]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
    return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)v1 + 32LL))(*((_QWORD *)this + 17), v3) + 8);
  else
    return *((float *)this + 7);
}
