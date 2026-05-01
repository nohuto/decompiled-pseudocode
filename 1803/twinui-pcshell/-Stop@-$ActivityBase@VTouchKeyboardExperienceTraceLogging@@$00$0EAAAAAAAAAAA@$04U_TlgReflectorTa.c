/*
 * XREFs of ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180241D84
 * Callers:
 *     _lambda_65c0f5c4ae095b6c4d2379132d65e3aa_::operator() @ 0x1800A1A4C (_lambda_65c0f5c4ae095b6c4d2379132d65e3aa_--operator().c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18023CF18 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x18023F720 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180248DD0 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18024AA44 (-OnInputAppActivated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x18024AE00 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18024B61C (-OnInputAppResumed@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x18024B9F0 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z @ 0x18024BAE0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJI@Z.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801AF520 (-LockExclusive@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1802457E0 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  bool v4; // al
  PSRWLOCK v5; // rcx
  bool v6; // di
  __int64 v7; // rax
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v10; // [rsp+38h] [rbp-9h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  PSRWLOCK *p_SRWLock; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  int *v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]

  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v4 = wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         a2,
         (int *)&v10);
  v5 = SRWLock;
  v6 = v4;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v7 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
           v5,
           lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
    v8 = *(const struct _TlgProvider_t **)(v7 + 8);
    if ( *(_DWORD *)v8 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v7 + 8), 0x400000000000uLL) )
    {
      v15 = 0;
      LODWORD(SRWLock) = a2;
      v14 = 4;
      p_SRWLock = &SRWLock;
      CurrentThreadId = GetCurrentThreadId();
      v18 = 0;
      v10 = CurrentThreadId;
      v16 = (int *)&v10;
      v17 = 4;
      TlgWrite(v8, &unk_18038A208, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
