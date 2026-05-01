/*
 * XREFs of ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1801CC0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180059064 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800590A4 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1800F8828 (--1-$CCoSimpleArray@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleArrayStan.c)
 *     _lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_::operator() @ 0x1801C9430 (_lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801CAA7C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart@.c)
 *     ?StartActivity@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801CD318 (-StartActivity@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x1801CD6D8 (-StartActivity@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::PerformDelayedInitialization(RTL_SRWLOCK *this)
{
  char *i; // rdi
  __int64 v3; // rcx
  char *v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-E0h]
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v9; // [rsp+3Ch] [rbp-CCh]
  char *j; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v11[6]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v12[40]; // [rsp+78h] [rbp-90h] BYREF

  v11[3] = -2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"CloseUnRecoveredViews");
  v12[0] = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  ViewManagerInteropTraceLogging::CloseUnRecoveredViews::StartActivity((ViewManagerInteropTraceLogging::CloseUnRecoveredViews *)v12);
  for ( i = 0LL; i < this[36].Ptr; ++i )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this[35].Ptr + (_QWORD)i) + 720LL))(*((_QWORD *)this[35].Ptr
                                                                                       + (_QWORD)i));
  CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IImmersiveMonitor>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>((__int64)&this[35]);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12);
  v12[0] = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetCachedFeatureEnabledState(v3);
  v8 = 0;
  LOBYTE(v9) = 3;
  LODWORD(j) = 0;
  WORD2(j) = v9;
  LODWORD(v7) = 3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetFeaturePropertyCache'::`2'::data,
    0x9AD6A6u,
    (const struct FEATURE_LOGGED_TRAITS *)&j,
    (struct wil_details_RecordUsageResult *)1,
    v7);
  AcquireSRWLockExclusive(this + 22);
  v11[4] = this + 22;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v12,
    (__int64)"RecoverComponentRelationships");
  v12[0] = &ViewManagerInteropTraceLogging::RecoverComponentRelationships::`vftable';
  ViewManagerInteropTraceLogging::RecoverComponentRelationships::StartActivity((ViewManagerInteropTraceLogging::RecoverComponentRelationships *)v12);
  v4 = 0LL;
  for ( j = 0LL; v4 < this[32].Ptr; j = v4 )
  {
    v5 = *((_QWORD *)this[31].Ptr + (_QWORD)v4);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 776LL))(v5);
    if ( v8 )
    {
      v11[0] = this - 15;
      v11[1] = &j;
      v11[2] = &v8;
      lambda_52f7d3e2c6f11a3164f9ea2f297b49c5_::operator()((__int64)v11);
    }
    v4 = j + 1;
  }
  LOBYTE(this[23].Ptr) = 1;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v12);
  v12[0] = &ViewManagerInteropTraceLogging::RecoverComponentRelationships::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  if ( this != (RTL_SRWLOCK *)-176LL )
    ReleaseSRWLockExclusive(this + 22);
  return 0LL;
}
