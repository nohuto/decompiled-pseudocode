/*
 * XREFs of ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800D2C14
 * Callers:
 *     ?GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z @ 0x1800BC630 (-GetHandoffData@CAnimation@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180132C50 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x1801AFF80 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 */

bool __fastcall CAnimationInterpolator::GetAnimationValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  bool result; // al
  float v8; // [rsp+40h] [rbp-20h] BYREF
  int v9; // [rsp+44h] [rbp-1Ch] BYREF
  int v10; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF

  v8 = 0.0;
  v10 = 0;
  v11 = 0LL;
  v9 = 0;
  result = CAnimationInterpolator::GetInterpolatedValue(this, a2, &v8, a4);
  if ( result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, int *, int *, __int64 *))(**(_QWORD **)this + 16LL))(
               *(_QWORD *)this,
               &v9,
               &v10,
               &v11);
    if ( result )
    {
      if ( v9 )
        result = CAnimationInterpolator::GetAdjustedHandoffValue(this, a2);
      if ( result )
        *a3 = v8;
    }
  }
  return result;
}
