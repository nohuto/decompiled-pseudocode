/*
 * XREFs of _lambda_00be1f95221eb842538ce67e0fb4e246_::operator() @ 0x1801827F8
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_00be1f95221eb842538ce67e0fb4e246__2__1_::Invoke @ 0x180185400 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windo_ea_180185400.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800260C4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180047CE4 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180183CB8 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180188998 (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_00be1f95221eb842538ce67e0fb4e246_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v17; // rax
  HANDLE ProcessHeap; // rax
  __int64 v20; // [rsp+28h] [rbp-59h] BYREF
  __int128 v21; // [rsp+30h] [rbp-51h] BYREF
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *v22; // [rsp+40h] [rbp-41h] BYREF
  __int64 v23; // [rsp+48h] [rbp-39h]
  char v24; // [rsp+50h] [rbp-31h]
  __int64 v25; // [rsp+58h] [rbp-29h]
  _BYTE v26[16]; // [rsp+68h] [rbp-19h] BYREF
  LPVOID lpMem; // [rsp+78h] [rbp-9h]
  char v28; // [rsp+80h] [rbp-1h]
  _BYTE v29[24]; // [rsp+88h] [rbp+7h] BYREF
  int v30; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  char v32; // [rsp+E8h] [rbp+67h] BYREF
  void *v33; // [rsp+100h] [rbp+7Fh] BYREF

  v25 = -2LL;
  v6 = a1 + 24;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 24),
    (wil::ActivityThreadWatcher *)v26);
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v21 = v6;
  *((_QWORD *)&v21 + 1) = v7;
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)&v22, &v21);
  ExperienceManagerUtils::AsStrong<IInspectable>(&v20, a1);
  if ( !v20 )
    goto LABEL_14;
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v32);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x325,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_15;
  }
  if ( !v32 )
  {
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x32F,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x80070015LL);
LABEL_14:
    v9 = 0;
    goto LABEL_15;
  }
  v33 = 0LL;
  v10 = CMarshaledInterface::_Unmarshal(
          (CMarshaledInterface *)(a1 + 16),
          &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
          &v33,
          0);
  v9 = v10;
  if ( v10 < 0 )
  {
    v11 = 810LL;
    goto LABEL_9;
  }
  v10 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v33 + 24LL))(v33, a2, a3);
  v9 = v10;
  if ( v10 >= 0 )
  {
    v13 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_14;
  }
  v11 = 811LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v11,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v10);
  v12 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_15:
  v14 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v24 )
  {
    v15 = v23;
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v23 + 16), 0LL);
    v17 = WindowsGetStringRawBuffer(*(HSTRING *)(v15 + 8), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(v22, v17, StringRawBuffer);
  }
  if ( v30 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v29);
  if ( v28 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return v9;
}
