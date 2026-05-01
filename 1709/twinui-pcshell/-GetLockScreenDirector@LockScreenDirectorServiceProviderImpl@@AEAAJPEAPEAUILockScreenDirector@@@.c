/*
 * XREFs of ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E1CF8
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E1A90 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E0704 (--1-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1800E114C (-StartActivity@LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity@LockScreenSe.c)
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E24A4 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E2B34 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(
        RTL_SRWLOCK *this,
        struct ILockScreenDirector **a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD v8[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+50h] [rbp-B0h]
  int *v10; // [rsp+58h] [rbp-A8h]
  int *v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h] BYREF
  char v13; // [rsp+6Ch] [rbp-94h]
  int v14; // [rsp+90h] [rbp-70h] BYREF
  const char *v15; // [rsp+98h] [rbp-68h]
  __int64 v16; // [rsp+A0h] [rbp-60h]
  char v17; // [rsp+A8h] [rbp-58h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  _BYTE v19[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v20; // [rsp+148h] [rbp+48h]
  __int64 v21; // [rsp+150h] [rbp+50h]
  __int64 v22; // [rsp+158h] [rbp+58h]
  __int64 v23; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v8[1] = 0LL;
  v8[2] = v8;
  v8[3] = 0LL;
  v9 = 0;
  v10 = &v14;
  v11 = &v12;
  v12 = 0;
  v13 = 0;
  v17 = 0;
  v14 = 0;
  v15 = "LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity";
  v16 = 0LL;
  v18 = 1LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v19, 0, sizeof(v19));
  v22 = 0LL;
  v23 = 0LL;
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
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x8B,
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
  v8[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_GetLockScreenDirector_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v8);
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
  return v6;
}
