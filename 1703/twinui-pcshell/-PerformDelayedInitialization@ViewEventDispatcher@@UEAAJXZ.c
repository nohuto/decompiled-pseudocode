/*
 * XREFs of ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x1800F4500
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     _lambda_166d3a698f4a828bb68fc489a415f587_::operator() @ 0x1800F4780 (_lambda_166d3a698f4a828bb68fc489a415f587_--operator().c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800FDFF4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart@.c)
 *     ??$Start@$$V@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x1800FEB74 (--$Start@$$V@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@SA-AV01@XZ.c)
 *     ??$Start@$$V@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x1800FEC20 (--$Start@$$V@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@SA-AV01@XZ.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180108770 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::PerformDelayedInitialization(RTL_SRWLOCK *this)
{
  char *i; // rsi
  __int64 v3; // rcx
  PVOID Ptr; // rbx
  unsigned int v5; // eax
  __int64 v6; // rcx
  PVOID j; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  char *v10; // rcx
  __int64 v11; // rcx
  int v13; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-CCh]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  char *k; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v17[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v18[40]; // [rsp+78h] [rbp-90h] BYREF

  v17[3] = -2LL;
  ViewManagerInteropTraceLogging::CloseUnRecoveredViews::Start<>((ViewManagerInteropTraceLogging::CloseUnRecoveredViews *)v18);
  for ( i = 0LL; i < this[32].Ptr; ++i )
  {
    v3 = *((_QWORD *)this[31].Ptr + (_QWORD)i);
    Ptr = this[45].Ptr;
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 576LL))(v3);
    ViewManagerBridge::NavigateView(Ptr, v5, 0LL);
    v6 = *((_QWORD *)this[31].Ptr + (_QWORD)i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 688LL))(v6);
  }
  if ( this[31].Ptr )
  {
    for ( j = 0LL; j < this[32].Ptr; j = (char *)j + 1 )
    {
      v8 = this[31].Ptr;
      v9 = v8[(_QWORD)j];
      if ( v9 )
      {
        v8[(_QWORD)j] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    CoTaskMemFree(this[31].Ptr);
    this[31].Ptr = 0LL;
  }
  this[32].Ptr = 0LL;
  this[34].Ptr = 0LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
  v18[0] = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetCachedFeatureEnabledState();
  LODWORD(SRWLock) = 0;
  BYTE4(SRWLock) = 3;
  v13 = 0;
  v14 = WORD2(SRWLock);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetFeaturePropertyCache'::`2'::data,
    0x9AD6A6u,
    (const struct FEATURE_LOGGED_TRAITS *)&v13,
    1,
    3);
  wil::srwlock::lock_exclusive(this + 18, &SRWLock);
  ViewManagerInteropTraceLogging::RecoverComponentRelationships::Start<>((ViewManagerInteropTraceLogging::RecoverComponentRelationships *)v18);
  v10 = 0LL;
  for ( k = 0LL; v10 < this[28].Ptr; k = v10 )
  {
    v11 = *((_QWORD *)this[27].Ptr + (_QWORD)v10);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 744LL))(v11);
    if ( v13 )
    {
      v17[0] = this - 10;
      v17[1] = &k;
      v17[2] = &v13;
      lambda_166d3a698f4a828bb68fc489a415f587_::operator()(v17);
    }
    v10 = k + 1;
  }
  LOBYTE(this[19].Ptr) = 1;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
  v18[0] = &ViewManagerInteropTraceLogging::RecoverComponentRelationships::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
