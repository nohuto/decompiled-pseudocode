/*
 * XREFs of _lambda_4d9498deded80cfab1ff9f78bf19bcab_::operator() @ 0x18012E08C
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___::Run @ 0x180131130 (XamlExplorerHostWindowCreatedCallback__lambda_4d9498deded80cfab1ff9f78bf19bcab___--Run.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18011D29C (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18011E630 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?Stop@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAX_NUtagRECT@@@Z @ 0x18012BAD8 (-Stop@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAX_NUtagRECT@@@Z.c)
 *     ?Initialize@MonitorFrame@@QEAAXPE$AAVTaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVWindow@Xaml@UI@Windows@@PEAUIXamlExplorerHostWindow@@@Z @ 0x18012C280 (-Initialize@MonitorFrame@@QEAAXPE$AAVTaskViewViewModel@Switcher@Experiences@ComposableShell@Wind.c)
 *     ??0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@@Z @ 0x18012EDD4 (--0TaskViewViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchIt.c)
 *     ??0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItemDataSource@Common@Multitasking@234@@Z @ 0x18012F0B4 (--0SwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIS.c)
 *     ??0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ @ 0x18012F158 (--0TaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@XZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowUXClient@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801300F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowUXClient@@@wil@@CA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=27
void __fastcall lambda_4d9498deded80cfab1ff9f78bf19bcab_::operator()(__int64 a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  void **v7; // r9
  __int64 v8; // rax
  void *v9; // rsi
  int v10; // eax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rax
  void *v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  __int64 v24; // r12
  int v25; // eax
  HANDLE ProcessHeap; // rax
  __int16 v27; // [rsp+3Ch] [rbp-65h]
  __int16 v28; // [rsp+3Ch] [rbp-65h]
  struct tagRECT v29; // [rsp+58h] [rbp-49h] BYREF
  __int64 v30; // [rsp+68h] [rbp-39h]
  char v31[16]; // [rsp+78h] [rbp-29h] BYREF
  LPVOID lpMem; // [rsp+88h] [rbp-19h]
  char v33; // [rsp+90h] [rbp-11h]
  char v34[24]; // [rsp+98h] [rbp-9h] BYREF
  int v35; // [rsp+B0h] [rbp+Fh]
  __int64 v36; // [rsp+108h] [rbp+67h] BYREF
  void *v37; // [rsp+118h] [rbp+77h]
  __int64 v38; // [rsp+120h] [rbp+7Fh]

  v30 = -2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 56),
    (wil::ActivityThreadWatcher *)v31);
  v8 = Windows::UI::Xaml::Window::Current::get(v5, v4, v6, v7);
  v9 = (void *)v8;
  v36 = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v37 = v9;
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 64LL))(
          *(_QWORD *)(a1 + 40),
          *(_QWORD *)(a1 + 8));
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  v38 = 0LL;
  v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 40);
  v12 = 0LL;
  v36 = 0LL;
  if ( v11 )
  {
    v13 = (**v11)(v11, &GUID_5cc69cbd_8bcc_4674_a80b_9466992872d0, &v36);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v12 = v36;
  }
  v14 = WindowsInternal::ComposableShell::Experiences::Switcher::SwitchItemListViewModel::SwitchItemListViewModel(
          v11,
          v12);
  v16 = v14;
  v38 = v14;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v38 = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v36 = 0LL;
  v17 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewViewModel::TaskViewViewModel(v15, v16);
  v18 = (void *)v17;
  v36 = v17;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v18 + 80LL))(v18, *(_QWORD *)(a1 + 32));
  if ( v19 < 0 )
    __abi_WinRTraiseException(v19);
  MonitorFrame::Initialize(*(RTL_SRWLOCK **)(a1 + 48), v18, v9, a2);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowUXClient>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowUXClient>::GetCachedFeatureEnabledState();
  LOBYTE(v27) = 0;
  LODWORD(v36) = 0;
  WORD2(v36) = v27;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowUXClient>::GetFeaturePropertyCache'::`2'::data,
    0x8C7EE1u,
    (const struct FEATURE_LOGGED_TRAITS *)&v36,
    0,
    3);
  v36 = 0LL;
  v20 = WindowsInternal::ComposableShell::Experiences::Switcher::TaskView::TaskView();
  v21 = v20;
  v36 = v20;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
  *(_QWORD *)&v29.left = v21;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v21 + 64LL))(v21, v18);
  if ( v22 < 0 )
    __abi_WinRTraiseException(v22);
  v36 = 0LL;
  v23 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v21)(
          v21,
          &_uuidof__AVUIElement_Xaml_UI_Windows__,
          &v36);
  if ( v23 < 0 )
    __abi_WinRTraiseException(v23);
  v24 = v36;
  HIBYTE(v28) = BYTE5(v36);
  v25 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v9 + 72LL))(v9, v36);
  if ( v25 < 0 )
    __abi_WinRTraiseException(v25);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( *(_DWORD *)a1 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)a2 + 48LL))(a2, a1 + 16);
  v29 = *(struct tagRECT *)(a1 + 16);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowUXClient>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowUXClient>::GetCachedFeatureEnabledState();
  LOBYTE(v28) = 0;
  LODWORD(v36) = 0;
  WORD2(v36) = v28;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowUXClient>::GetFeaturePropertyCache'::`2'::data,
    0x8C7EE1u,
    (const struct FEATURE_LOGGED_TRAITS *)&v36,
    0,
    3);
  XamlSwitcherTelemetry::MonitorFrameCreated::Stop((XamlSwitcherTelemetry::MonitorFrameCreated *)(a1 + 56), 0, &v29);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v35 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v34);
  if ( v33 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
