/*
 * XREFs of ?PerformDelayedInitialization@ViewEventDispatcher@@UEAAJXZ @ 0x18011F1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?StartActivity@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18011A2FC (-StartActivity@CloseUnRecoveredViews@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?StartActivity@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18011A83C (-StartActivity@RecoverComponentRelationships@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     _lambda_3e1390e1d2422aea3f572ae27706a686_::operator() @ 0x18011F56C (_lambda_3e1390e1d2422aea3f572ae27706a686_--operator().c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180128DE4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart@.c)
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180133010 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  char *k; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v16[6]; // [rsp+48h] [rbp-C0h] BYREF
  void **v17; // [rsp+78h] [rbp-90h] BYREF
  __int64 v18; // [rsp+80h] [rbp-88h]
  void ***v19; // [rsp+88h] [rbp-80h]
  __int64 v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+98h] [rbp-70h]
  int *v22; // [rsp+A0h] [rbp-68h]
  int *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h] BYREF
  char v25; // [rsp+B4h] [rbp-54h]
  int v26; // [rsp+D8h] [rbp-30h] BYREF
  const char *v27; // [rsp+E0h] [rbp-28h]
  __int64 v28; // [rsp+E8h] [rbp-20h]
  char v29; // [rsp+F0h] [rbp-18h]
  __int64 v30; // [rsp+F8h] [rbp-10h]
  _BYTE v31[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v32; // [rsp+190h] [rbp+88h]
  __int64 v33; // [rsp+198h] [rbp+90h]
  __int64 v34; // [rsp+1A0h] [rbp+98h]
  __int64 v35; // [rsp+1A8h] [rbp+A0h]

  v16[3] = -2LL;
  v18 = 0LL;
  v19 = &v17;
  v20 = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "CloseUnRecoveredViews";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  v35 = 0LL;
  v17 = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  ViewManagerInteropTraceLogging::CloseUnRecoveredViews::StartActivity((ViewManagerInteropTraceLogging::CloseUnRecoveredViews *)&v17);
  for ( i = 0LL; i < this[37].Ptr; ++i )
  {
    v3 = *((_QWORD *)this[36].Ptr + (_QWORD)i);
    Ptr = this[50].Ptr;
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 576LL))(v3);
    ViewManagerBridge::NavigateView(Ptr, v5, 0LL);
    v6 = *((_QWORD *)this[36].Ptr + (_QWORD)i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 688LL))(v6);
  }
  if ( this[36].Ptr )
  {
    for ( j = 0LL; j < this[37].Ptr; j = (char *)j + 1 )
    {
      v8 = this[36].Ptr;
      v9 = v8[(_QWORD)j];
      if ( v9 )
      {
        v8[(_QWORD)j] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    CoTaskMemFree(this[36].Ptr);
    this[36].Ptr = 0LL;
  }
  this[37].Ptr = 0LL;
  this[39].Ptr = 0LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v17);
  v17 = &ViewManagerInteropTraceLogging::CloseUnRecoveredViews::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v17);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)&v17);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetCachedFeatureEnabledState();
  v13 = 0;
  LOBYTE(v14) = 3;
  LODWORD(k) = 0;
  WORD2(k) = v14;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ComponentUI_ExplorerRestart>::GetFeaturePropertyCache'::`2'::data,
    0x9AD6A6u,
    (const struct FEATURE_LOGGED_TRAITS *)&k,
    1,
    3);
  AcquireSRWLockExclusive(this + 23);
  v16[4] = this + 23;
  v18 = 0LL;
  v19 = &v17;
  v20 = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "RecoverComponentRelationships";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  v35 = 0LL;
  v17 = &ViewManagerInteropTraceLogging::RecoverComponentRelationships::`vftable';
  ViewManagerInteropTraceLogging::RecoverComponentRelationships::StartActivity((ViewManagerInteropTraceLogging::RecoverComponentRelationships *)&v17);
  v10 = 0LL;
  for ( k = 0LL; v10 < this[33].Ptr; k = v10 )
  {
    v11 = *((_QWORD *)this[32].Ptr + (_QWORD)v10);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 744LL))(v11);
    if ( v13 )
    {
      v16[0] = this - 14;
      v16[1] = &k;
      v16[2] = &v13;
      lambda_3e1390e1d2422aea3f572ae27706a686_::operator()(v16);
    }
    v10 = k + 1;
  }
  LOBYTE(this[24].Ptr) = 1;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v17);
  v17 = &ViewManagerInteropTraceLogging::RecoverComponentRelationships::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v17);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)&v17);
  if ( this != (RTL_SRWLOCK *)-184LL )
    ReleaseSRWLockExclusive(this + 23);
  return 0LL;
}
