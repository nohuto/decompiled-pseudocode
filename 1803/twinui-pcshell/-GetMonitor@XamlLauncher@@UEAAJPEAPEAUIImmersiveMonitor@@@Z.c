/*
 * XREFs of ?GetMonitor@XamlLauncher@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180077F80
 * Callers:
 *     ?GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z @ 0x180063774 (-GetImmersiveLauncherMonitor@CortanaDesktopExperienceView@@AEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x180076E74 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180078470 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007854C (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180093670 (-reset@-$shared_object@V-$ActivityData@VCommonStartTelemetryLogging@@U_TlgReflector_ea_180093670.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

__int64 __fastcall XamlLauncher::GetMonitor(XamlLauncher *this, struct IImmersiveMonitor **a2)
{
  int *v4; // rdi
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rdi
  const GUID *v7; // rax
  REGHANDLE v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  HANDLE ProcessHeap; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL v16; // [rsp+34h] [rbp-CCh] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-C8h] BYREF
  WINBOOL v18; // [rsp+3Ch] [rbp-C4h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v20; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v21; // [rsp+50h] [rbp-B0h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  void **v24; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v25[3]; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+90h] [rbp-70h]
  int *v27; // [rsp+98h] [rbp-68h]
  int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h] BYREF
  char v30; // [rsp+ACh] [rbp-54h]
  _BYTE v31[32]; // [rsp+B0h] [rbp-50h] BYREF
  int v32; // [rsp+D0h] [rbp-30h] BYREF
  const char *v33; // [rsp+D8h] [rbp-28h]
  LPVOID lpMem; // [rsp+E0h] [rbp-20h]
  char v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  _BYTE v37[144]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v38[3]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v39; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1B0h] [rbp+B0h] BYREF
  void *v41; // [rsp+1C0h] [rbp+C0h]
  int v42; // [rsp+1C8h] [rbp+C8h]
  int v43; // [rsp+1CCh] [rbp+CCh]
  DWORD *p_CurrentThreadId; // [rsp+1D0h] [rbp+D0h]
  __int64 v45; // [rsp+1D8h] [rbp+D8h]
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 28) )
    return 2147943568LL;
  v25[0] = 0LL;
  v25[1] = &v24;
  v25[2] = 0LL;
  v27 = &v32;
  v26 = 0;
  v28 = &v29;
  v29 = 0;
  v33 = "GetImmersiveMonitor";
  v30 = 0;
  v35 = 0;
  v32 = 0;
  lpMem = 0LL;
  v36 = 1LL;
  v38[0] = 0LL;
  memset_0(v37, 0, sizeof(v37));
  v39 = 0LL;
  v38[1] = 0LL;
  v38[2] = 0LL;
  v24 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v24,
    &SRWLock);
  v4 = v28;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1804389D0;
    qword_1804389D0[0] = &LockScreenServiceLogging::`vftable';
    qword_1804389E8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804389D0, qword_1804389E8);
    InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1804389D0);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v4 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 2));
  v5 = SRWLock;
  *v4 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v20 = 0LL;
  if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &v16, &v20) && v16 )
  {
    v20 = qword_1804389D0;
    qword_1804389D0[0] = &LockScreenServiceLogging::`vftable';
    qword_1804389E8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804389D0, qword_1804389E8);
    InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1804389D0);
  }
  v6 = *((_QWORD *)v20 + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v45 = 4LL;
    v7 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v24);
    *(_DWORD *)&EventDescriptor.Level = 261;
    v8 = *(_QWORD *)(v6 + 32);
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803984F0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v41 = &unk_1803984FB;
    UserData.Reserved = 2;
    v42 = 47;
    v43 = 1;
    EventWriteTransfer(v8, &EventDescriptor, (LPCGUID)(v28 + 2), v7, 3u, &UserData);
  }
  if ( !v26 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v25);
  v9 = *((_QWORD *)this + 13);
  *a2 = 0LL;
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *a2 = *(struct IImmersiveMonitor **)(v9 + 64);
    wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v24);
    v11 = 0;
  }
  else
  {
    v11 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x80070490LL,
      UserDataCount);
  }
  v24 = &StartWindowTelemetry::GetImmersiveMonitor::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v24);
  wil::details::shared_object<wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonStartTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v39);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)v38);
  if ( v35 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
    v35 = 0;
  }
  lpMem = 0LL;
  if ( v29 == 1 )
  {
    v29 = 2;
    v21 = 0LL;
    if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &v18, &v21) && v18 )
    {
      v21 = qword_1804389D0;
      qword_1804389D0[0] = &LockScreenServiceLogging::`vftable';
      qword_1804389E8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804389D0, qword_1804389E8);
      InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1804389D0);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v21 + 1), v31);
  }
  v29 = 3;
  if ( v26 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v25);
  return v11;
}
