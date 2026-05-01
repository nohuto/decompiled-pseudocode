/*
 * XREFs of ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x18018E508
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x18018E318 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18006FAA0 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018DD20 (--0-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAA@XZ @ 0x18018DFD8 (--1LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemet.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x18018F044 (-StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSe.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18018F4D4 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
        RTL_SRWLOCK *this,
        struct ILockScreenDirector **a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity");
  v8[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity *)v8);
  *a2 = 0LL;
  v4 = this + 18;
  AcquireSRWLockShared(this + 18);
  if ( this[19].Ptr
    && (v5 = AgileGitPtr::CopyLocal((AgileGitPtr *)&this[19], &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb, (void **)a2),
        v6 = v5,
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v8);
    v6 = 0;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::~LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity *)v8);
  return v6;
}
