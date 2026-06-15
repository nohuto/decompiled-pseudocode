/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18005C1F8
 * Callers:
 *     ??1?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x1800323F4 (--1-$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ.c)
 *     ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18005C2F8 (-OnTimer@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18008A71C (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180006248 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800065D8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rbx
  unsigned int *v3; // rdi
  unsigned int *v4; // rbx
  union wil_details_FeaturePropertyCache *v5; // rcx
  unsigned int *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v9[3]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v10[64]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v11; // [rsp+80h] [rbp-18h] BYREF

  v2 = (*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4;
  if ( v2 )
  {
    v3 = (unsigned int *)*((_QWORD *)this + 6);
    v4 = &v3[4 * v2];
    while ( v3 != v4 )
    {
      memset(v10, 0, sizeof(v10));
      v8 = 0LL;
      v5 = (union wil_details_FeaturePropertyCache *)*((_QWORD *)v3 + 1);
      v9[0] = &v8;
      v9[1] = v10;
      wil_details_ModifyFeatureData(
        v5,
        (__int64 (__fastcall *)(signed __int32 *, void *))lambda_a6162ed205bf533298d20564adf5c8f3_::_lambda_invoker_cdecl_,
        v9);
      v6 = (unsigned int *)v10;
      do
      {
        v7 = v6[1];
        if ( (_DWORD)v7 )
          wil::details::WilApi_RecordFeatureUsage((wil::details *)*v3, *v6, v7);
        v6 += 2;
      }
      while ( v6 != (unsigned int *)&v11 );
      v3 += 4;
    }
    *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
    wil::details::WilApi_RecordFeatureUsage(0LL, 254LL, 0LL);
  }
}
