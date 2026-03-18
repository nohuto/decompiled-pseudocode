/*
 * XREFs of ?GetForceEngineCurrentValue@CMotion@@QEBAMXZ @ 0x18018D028
 * Callers:
 *     ?GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ @ 0x180188CB0 (-GetForceEngineCurrentValue@CScrollAnimation@@QEBAMXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetForceEngineCurrentValue(CMotion *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-28h] BYREF

  return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 17) + 32LL))(
                      *((_QWORD *)this + 17),
                      v2)
                  + 4);
}
