/*
 * XREFs of _lambda_e1365bb4f253a4ea24e8f51062dc9f67_::operator() @ 0x180068BCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ae01d123478e9bd18be70bedd94d30f___::Run @ 0x18006ECA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7ae01d123478e9bd18be70bedd94d30f___--Run.c)
 * Callees:
 *     WPP_SF_qd @ 0x180006DCC (WPP_SF_qd.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18006779C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180067824 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x18006B97C (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18006BE7C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wi.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_e1365bb4f253a4ea24e8f51062dc9f67_::operator()(_QWORD *a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  HANDLE ProcessHeap; // rax
  __int64 v9; // [rsp+28h] [rbp-49h]
  _BYTE v10[24]; // [rsp+40h] [rbp-31h] BYREF
  LPVOID v11[4]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v12; // [rsp+78h] [rbp+7h] BYREF
  __int64 v13; // [rsp+88h] [rbp+17h]
  int v14; // [rsp+90h] [rbp+1Fh]
  __int64 v15; // [rsp+98h] [rbp+27h]
  __int16 v16; // [rsp+DCh] [rbp+6Bh]
  int v17; // [rsp+E0h] [rbp+6Fh] BYREF
  __int16 v18; // [rsp+E4h] [rbp+73h]

  v2 = a1[8];
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v11,
      (struct wil::details::IFailureCallback *)(a1 + 2),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset(v11, 0, sizeof(v11));
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 128LL) + 48LL))(*(_QWORD *)(a1[1] + 128LL), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetCachedFeatureEnabledState();
  LOBYTE(v16) = 3;
  v17 = 0;
  v18 = v16;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetFeaturePropertyCache'::`2'::data,
    0x935D3Au,
    (const struct FEATURE_LOGGED_TRAITS *)&v17,
    1,
    3);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(a1[1] + 112LL) + 208LL))(
    **(_QWORD **)(a1[1] + 112LL),
    *(_QWORD *)(a1[1] + 136LL),
    0LL);
  v3 = a1[1];
  v4 = **(_QWORD **)(v3 + 120);
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v10,
    (struct CFrameApplicationPresentation *)v3);
  if ( *(_QWORD *)(v3 + 88) || *(_QWORD *)(v3 + 96) != v4 )
    *(_BYTE *)(v3 + 104) = 0;
  v5 = *(_QWORD *)(v3 + 88);
  if ( v5 )
  {
    *(_QWORD *)(v3 + 88) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *(_QWORD *)(v3 + 96) = v4;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v10);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = a1[1];
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    LODWORD(v9) = *(_DWORD *)(v6 + 56);
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_7785cad5b4a736930de9968ca66fe3e3_Traceguids, v7, v9);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*(HWND *)(a1[1] + 136LL), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible((CFrameApplicationPresentation *)a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v12);
  if ( LOBYTE(v11[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11[2]);
  }
}
