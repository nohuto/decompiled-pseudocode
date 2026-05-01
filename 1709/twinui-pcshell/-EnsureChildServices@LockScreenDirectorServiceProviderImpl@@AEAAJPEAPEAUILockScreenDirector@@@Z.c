/*
 * XREFs of ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E1A90
 * Callers:
 *     ?v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800E19A0 (-v_QueryService@LockScreenDirectorServiceProviderImpl@@MEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E0704 (--1-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1800E0C0C (-StartActivity@LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity@LockScreenServ.c)
 *     ?GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E1CF8 (-GetLockScreenDirector@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@.c)
 *     ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1800E1E70 (-StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E24A4 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E2B34 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LockScreenDirectorServiceProviderImpl::EnsureChildServices(
        LockScreenDirectorServiceProviderImpl *this,
        struct ILockScreenDirector **a2)
{
  HRESULT LockScreenDirector; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  struct ILockScreenDirector *v7; // rcx
  __int64 v8; // rdx
  struct ILockScreenDirector *v9; // rcx
  struct ILockScreenDirector *v10; // rcx
  struct ILockScreenDirector *v12; // [rsp+38h] [rbp-D0h] BYREF
  DWORD dwindex[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE pHandles[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v15[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+78h] [rbp-90h]
  int *v17; // [rsp+80h] [rbp-88h]
  int *v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h] BYREF
  char v20; // [rsp+94h] [rbp-74h]
  int v21; // [rsp+B8h] [rbp-50h] BYREF
  const char *v22; // [rsp+C0h] [rbp-48h]
  __int64 v23; // [rsp+C8h] [rbp-40h]
  char v24; // [rsp+D0h] [rbp-38h]
  __int64 v25; // [rsp+D8h] [rbp-30h]
  _BYTE v26[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+170h] [rbp+68h]
  __int64 v28; // [rsp+178h] [rbp+70h]
  __int64 v29; // [rsp+180h] [rbp+78h]
  __int64 v30; // [rsp+188h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  pHandles[1] = (HANDLE)-2LL;
  v15[1] = 0LL;
  v15[2] = v15;
  v15[3] = 0LL;
  LODWORD(v16) = 0;
  v17 = &v21;
  v18 = &v19;
  v19 = 0;
  v20 = 0;
  v24 = 0;
  v21 = 0;
  v22 = "LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity";
  v23 = 0LL;
  v25 = 1LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(v26, 0, sizeof(v26));
  v29 = 0LL;
  v30 = 0LL;
  v15[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::`vftable';
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity *)v15);
  *a2 = 0LL;
  v12 = 0LL;
  LockScreenDirector = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(this, &v12);
  v5 = LockScreenDirector;
  if ( LockScreenDirector < 0 )
  {
    v6 = 97LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)LockScreenDirector);
    goto LABEL_20;
  }
  if ( !dword_1802BA7EC )
  {
    v7 = v12;
    if ( v12 )
      goto LABEL_19;
    dword_1802BA7EC = 1;
    LockScreenDirector = LockScreenDirectorServiceProviderImpl::StartDirectorThread(this);
    v5 = LockScreenDirector;
    if ( LockScreenDirector < 0 )
    {
      v6 = 110LL;
      goto LABEL_15;
    }
    pHandles[0] = *((HANDLE *)this + 17);
    LockScreenDirector = CoWaitForMultipleHandles(0x18u, 0x1388u, 1u, pHandles, dwindex);
    v5 = LockScreenDirector;
    if ( LockScreenDirector < 0 )
    {
      v6 = 116LL;
      goto LABEL_15;
    }
    if ( dwindex[0] )
    {
      v8 = 117LL;
LABEL_18:
      v5 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_20;
    }
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    LockScreenDirector = LockScreenDirectorServiceProviderImpl::GetLockScreenDirector(this, &v12);
    v5 = LockScreenDirector;
    if ( LockScreenDirector < 0 )
    {
      v6 = 118LL;
      goto LABEL_15;
    }
  }
  v7 = v12;
  if ( !v12 )
  {
    v8 = 122LL;
    goto LABEL_18;
  }
LABEL_19:
  (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v7 + 8LL))(v7);
  *a2 = v12;
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
  v5 = 0;
LABEL_20:
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct ILockScreenDirector *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v15[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_EnsureChildServices_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v15);
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v15);
  return v5;
}
