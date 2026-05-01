/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800FDE6C
 * Callers:
 *     ?Destroy@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180097610 (-Destroy@-$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXX.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x1800FC25C (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800FDA34 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x18009282C (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18009C5A0 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  unsigned int *v1; // rdi
  __int64 v3; // rbx
  unsigned int *v4; // rbx
  union wil_details_FeaturePropertyCache *v5; // rcx
  unsigned int *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v10[64]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v11; // [rsp+80h] [rbp-18h] BYREF

  v1 = (unsigned int *)*((_QWORD *)this + 6);
  v3 = (*((_QWORD *)this + 7) - (_QWORD)v1) >> 4;
  if ( v3 )
  {
    v4 = &v1[4 * v3];
    while ( v1 != v4 )
    {
      memset_0(v10, 0, sizeof(v10));
      v8 = 0LL;
      v5 = (union wil_details_FeaturePropertyCache *)*((_QWORD *)v1 + 1);
      v9[0] = &v8;
      v9[1] = v10;
      wil_details_ModifyFeatureData(
        v5,
        (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, void *))lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_,
        v9);
      v6 = (unsigned int *)v10;
      do
      {
        v7 = v6[1];
        if ( (_DWORD)v7 )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)*v1, *v6, v7);
        v6 += 2;
      }
      while ( v6 != (unsigned int *)&v11 );
      v1 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 254LL, 0LL);
  }
}
