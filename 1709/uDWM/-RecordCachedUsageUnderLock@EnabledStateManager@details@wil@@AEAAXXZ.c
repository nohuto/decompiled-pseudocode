/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800315B0
 * Callers:
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800316B0 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ??1?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18004517C (--1-$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180067E88 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800316F4 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180034044 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(
        wil::details::EnabledStateManager *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v5; // rbx
  unsigned int *v6; // rdi
  unsigned int *v7; // rbx
  union wil_details_FeaturePropertyCache *v8; // rcx
  unsigned int *v9; // rsi
  unsigned int v10; // r8d
  const char *v11; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v12[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v13[64]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+80h] [rbp-18h] BYREF

  v5 = (*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4;
  if ( v5 )
  {
    v6 = (unsigned int *)*((_QWORD *)this + 6);
    v7 = &v6[4 * v5];
    while ( v6 != v7 )
    {
      memset_0(v13, 0, sizeof(v13));
      v11 = 0LL;
      v8 = (union wil_details_FeaturePropertyCache *)*((_QWORD *)v6 + 1);
      v12[0] = &v11;
      v12[1] = v13;
      wil_details_ModifyFeatureData(v8, lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_, v12);
      v9 = (unsigned int *)v13;
      do
      {
        v10 = v9[1];
        if ( v10 )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)*v6, *v9, v10, a4, v11);
        v9 += 2;
      }
      while ( v9 != (unsigned int *)&v14 );
      v6 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 0xFEu, 0, a4, v11);
  }
}
