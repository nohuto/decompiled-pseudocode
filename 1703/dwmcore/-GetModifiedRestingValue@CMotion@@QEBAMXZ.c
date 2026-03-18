/*
 * XREFs of ?GetModifiedRestingValue@CMotion@@QEBAMXZ @ 0x180184F88
 * Callers:
 *     ?GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ @ 0x180181A00 (-GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetModifiedRestingValue(CMotion *this)
{
  __int64 v2; // rcx
  float result; // xmm0_4

  v2 = *((_QWORD *)this + 23);
  if ( !v2 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2) )
    return fminf(fmaxf(*((float *)this + 15), *((float *)this + 16)), *((float *)this + 9));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 48LL))(*((_QWORD *)this + 23));
  return result;
}
