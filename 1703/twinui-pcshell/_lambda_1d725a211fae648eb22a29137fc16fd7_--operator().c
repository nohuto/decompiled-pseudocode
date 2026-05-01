/*
 * XREFs of _lambda_1d725a211fae648eb22a29137fc16fd7_::operator() @ 0x180066A4C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cd635be87c787a0220700b97c104318___::Run @ 0x18006BAE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0cd635be87c787a0220700b97c104318___--Run.c)
 * Callees:
 *     WPP_SF_qd @ 0x180006D2C (WPP_SF_qd.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x180065C5C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180065CE4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x18006944C (-_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800696D4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_PresentationStateBugFix@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_1d725a211fae648eb22a29137fc16fd7_::operator()(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  HANDLE ProcessHeap; // rax
  __int64 v8; // [rsp+28h] [rbp-39h]
  int v9; // [rsp+40h] [rbp-21h] BYREF
  __int16 v10; // [rsp+44h] [rbp-1Dh]
  _BYTE v11[16]; // [rsp+58h] [rbp-9h] BYREF
  LPVOID lpMem; // [rsp+68h] [rbp+7h]
  char v13; // [rsp+70h] [rbp+Fh]
  _BYTE v14[24]; // [rsp+78h] [rbp+17h] BYREF
  int v15; // [rsp+90h] [rbp+2Fh]
  int v16; // [rsp+C8h] [rbp+67h] BYREF
  __int16 v17; // [rsp+CCh] [rbp+6Bh]

  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 2),
    (wil::ActivityThreadWatcher *)v11);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[1] + 112LL) + 48LL))(*(_QWORD *)(a1[1] + 112LL), 0LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetCachedFeatureEnabledState();
  v9 = 0;
  LOBYTE(v10) = 3;
  v16 = 0;
  v17 = v10;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_PresentationStateBugFix>::GetFeaturePropertyCache'::`2'::data,
    0x935D3Au,
    (const struct FEATURE_LOGGED_TRAITS *)&v16,
    1,
    3);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(***(_QWORD ***)(a1[1] + 96LL) + 208LL))(
    **(_QWORD **)(a1[1] + 96LL),
    *(_QWORD *)(a1[1] + 120LL),
    0LL);
  v2 = a1[1];
  v3 = **(_QWORD **)(v2 + 104);
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)&v9,
    (struct CFrameApplicationPresentation *)v2);
  if ( *(_QWORD *)(v2 + 72) || *(_QWORD *)(v2 + 80) != v3 )
    *(_BYTE *)(v2 + 88) = 0;
  v4 = *(_QWORD *)(v2 + 72);
  if ( v4 )
  {
    *(_QWORD *)(v2 + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *(_QWORD *)(v2 + 80) = v3;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)&v9);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = a1[1];
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
    LODWORD(v8) = *(_DWORD *)(v5 + 40);
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_a1658e10cf12387b63d474d4cc4de9d3_Traceguids, v6, v8);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  ShowWindowAsync(*(HWND *)(a1[1] + 120LL), 0);
  CFrameApplicationPresentation::_DestroyFrameIfPossible((CFrameApplicationPresentation *)a1[1]);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)(a1 + 2), 0);
  if ( v15 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v14);
  if ( v13 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
