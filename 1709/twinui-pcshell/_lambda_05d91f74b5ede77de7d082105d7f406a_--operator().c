/*
 * XREFs of _lambda_05d91f74b5ede77de7d082105d7f406a_::operator() @ 0x1801D2114
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_05d91f74b5ede77de7d082105d7f406a___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64_::Invoke @ 0x1801D46D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801D46D0.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180048D24 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800D1720 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1801D77DC (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_05d91f74b5ede77de7d082105d7f406a_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  struct wil::details::IFailureCallback *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r15
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rdx
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rcx
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v17; // rax
  HANDLE ProcessHeap; // rax
  _QWORD v20[3]; // [rsp+28h] [rbp-49h] BYREF
  char v21; // [rsp+40h] [rbp-31h]
  LPVOID v22[4]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v23; // [rsp+68h] [rbp-9h] BYREF
  __int64 v24; // [rsp+78h] [rbp+7h]
  int v25; // [rsp+80h] [rbp+Fh]
  __int64 v26; // [rsp+88h] [rbp+17h]
  __int64 v27; // [rsp+98h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  char v29; // [rsp+D8h] [rbp+67h] BYREF
  void *v30; // [rsp+F0h] [rbp+7Fh] BYREF

  v27 = -2LL;
  v6 = (struct wil::details::IFailureCallback *)(a1 + 3);
  v7 = a1[9];
  if ( *(_DWORD *)v7 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v22,
      v6,
      (const struct wil::details::StoredCallContextInfo *)(v7 + 40));
  }
  else
  {
    memset(v22, 0, sizeof(v22));
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0;
    v26 = 0LL;
  }
  v8 = a1[1];
  v20[1] = v6;
  v20[2] = v8;
  v21 = 1;
  ExperienceManagerUtils::AsStrong<IInspectable>(v20, a1);
  if ( !v20[0] )
    goto LABEL_17;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v29);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x326,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_18;
  }
  if ( !v29 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x330,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80070015LL);
LABEL_17:
    v10 = 0;
    goto LABEL_18;
  }
  v30 = 0LL;
  v11 = CMarshaledInterface::_Unmarshal(
          (CMarshaledInterface *)(a1 + 2),
          &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
          &v30,
          0);
  v10 = v11;
  if ( v11 < 0 )
  {
    v12 = 811LL;
    goto LABEL_12;
  }
  v11 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v30 + 24LL))(v30, a2, a3);
  v10 = v11;
  if ( v11 >= 0 )
  {
    v14 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_17;
  }
  v12 = 812LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v11);
  v13 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_18:
  v15 = v20[0];
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v8 + 16), 0LL);
  v17 = WindowsGetStringRawBuffer(*(HSTRING *)(v8 + 8), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(v6, v17, StringRawBuffer);
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v23);
  if ( LOBYTE(v22[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v22[2]);
  }
  return v10;
}
