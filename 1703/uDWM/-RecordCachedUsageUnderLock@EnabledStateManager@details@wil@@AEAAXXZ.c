/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800176E8
 * Callers:
 *     _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x1800174C0 (_lambda_3a8e20f2e77891984b45453b80f2a737_--_lambda_invoker_cdecl_.c)
 *     ??1?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18004CD68 (--1-$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180080248 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800177F0 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180018888 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int *v5; // rdi
  unsigned int *v6; // rbx
  union wil_details_FeaturePropertyCache *v7; // rcx
  unsigned int *v8; // r14
  unsigned int v9; // r8d
  const char *v10; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v11[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v12[64]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+80h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 6) - *((_QWORD *)this + 5) >= 0x10uLL )
  {
    v5 = (unsigned int *)*((_QWORD *)this + 5);
    v6 = (unsigned int *)((char *)v5 + ((*((_QWORD *)this + 6) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL));
    while ( v5 != v6 )
    {
      memset_0(v12, 0, sizeof(v12));
      v10 = 0LL;
      v7 = (union wil_details_FeaturePropertyCache *)*((_QWORD *)v5 + 1);
      v11[0] = &v10;
      v11[1] = v12;
      wil_details_ModifyFeatureData(v7, lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_, v11);
      v8 = (unsigned int *)v12;
      do
      {
        v9 = v8[1];
        if ( v9 )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)*v5, *v8, v9, a4, v10);
        v8 += 2;
      }
      while ( v8 != (unsigned int *)&v13 );
      v5 += 4;
    }
    *((_QWORD *)this + 6) = *((_QWORD *)this + 5);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v10);
  }
}
