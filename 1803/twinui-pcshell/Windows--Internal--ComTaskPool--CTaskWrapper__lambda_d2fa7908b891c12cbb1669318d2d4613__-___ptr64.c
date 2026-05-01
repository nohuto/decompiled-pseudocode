/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&___ptr64_::Run @ 0x18000E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x18000DE54 (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18000FA94 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18000FB0C (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180013620 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x180072174 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180093694 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_180093694.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18011CFF0 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613______ptr64_::Run(
        __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rcx
  WINBOOL fPending; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-D8h] BYREF
  void **v7; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[24]; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+50h] [rbp-B0h]
  int v10; // [rsp+68h] [rbp-98h]
  _BYTE v11[32]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v12[184]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v13[24]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v14[16]; // [rsp+160h] [rbp+60h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(v3 + 212) == 1 )
  {
    LOBYTE(v2) = **(_DWORD **)(v3 + 264) == 1;
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      &v7,
      v3 + 216,
      v2);
    v7 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
    CFramePresentationTelemetry::SplashScreenSuppressed::Stop(
      (CFramePresentationTelemetry::SplashScreenSuppressed *)&v7,
      2);
    v7 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v7);
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v14);
    wil::details::shared_buffer::reset((wil::details::shared_buffer *)v13);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v12);
    if ( v10 == 1 )
    {
      Context = 0LL;
      v10 = 2;
      if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
      {
        Context = qword_180438670;
        qword_180438670[0] = &LockScreenServiceLogging::`vftable';
        qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
        InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
      }
      _TlgWriteActivityAutoStop<70368744177664,5>(*((_QWORD *)Context + 1), v11);
    }
    v10 = 3;
    if ( v9 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v8);
    *(_DWORD *)(v3 + 212) = 2;
    v4 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v4 + 52) )
      CFrameApplicationPresentation::_SetFrameCloakSerialized(v4, 0LL);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
