/*
 * XREFs of ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007A3DC
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x1800782F0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180078B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800794C0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x1800796C4 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18022FBC0 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180230080 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ @ 0x180079D40 (-StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        CommonStartTelemetry::LauncherInvokeActivity *this,
        int a2)
{
  __int64 v4; // rax
  int v5; // edi
  RTL_SRWLOCK *v6; // rcx
  int v7; // edi
  void (__fastcall *v8)(CommonStartTelemetry::LauncherInvokeActivity *); // rax
  __int64 v9; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v11; // r8
  REGHANDLE v12; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+34h] [rbp-35h] BYREF
  DWORD v15; // [rsp+38h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-29h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  void *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]
  int *v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+88h] [rbp+1Fh]
  int v25; // [rsp+8Ch] [rbp+23h]
  DWORD *v26; // [rsp+90h] [rbp+27h]
  int v27; // [rsp+98h] [rbp+2Fh]
  int v28; // [rsp+9Ch] [rbp+33h]

  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  v5 = *(_DWORD *)(v4 + 72);
  if ( v5 < 1 )
    __fastfail(7u);
  if ( *(int *)(v4 + 76) >= 0 )
    *(_DWORD *)(v4 + 76) = a2;
  v6 = SRWLock;
  v7 = v5 - 1;
  *(_DWORD *)(v4 + 72) = v7;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v7 )
  {
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
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 5u
      && (*(_QWORD *)(v9 + 16) & 0x400000000000LL) != 0
      && (*(_QWORD *)(v9 + 24) & 0x400000000000LL) == *(_QWORD *)(v9 + 24) )
    {
      v25 = 0;
      v14 = a2;
      v24 = 4;
      v23 = &v14;
      CurrentThreadId = GetCurrentThreadId();
      v28 = 0;
      v15 = CurrentThreadId;
      v26 = &v15;
      v27 = 4;
      v11 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v9 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18038A208 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v12 = *(_QWORD *)(v9 + 32);
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v20 = &unk_18038A213;
      UserData.Reserved = 2;
      v21 = 61;
      v22 = 1;
      EventWriteTransfer(v12, &EventDescriptor, v11, 0LL, 4u, &UserData);
    }
  }
  else
  {
    v8 = *(void (__fastcall **)(CommonStartTelemetry::LauncherInvokeActivity *))(*(_QWORD *)this + 8LL);
    if ( v8 == CommonStartTelemetry::LauncherInvokeActivity::StopActivity )
      CommonStartTelemetry::LauncherInvokeActivity::StopActivity(this);
    else
      v8(this);
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CommonStartTelemetry::LauncherInvokeActivity *)((char *)this + 8));
}
