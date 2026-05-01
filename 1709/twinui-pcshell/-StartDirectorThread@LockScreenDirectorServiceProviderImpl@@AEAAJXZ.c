/*
 * XREFs of ?StartDirectorThread@LockScreenDirectorServiceProviderImpl@@AEAAJXZ @ 0x1800E1E70
 * Callers:
 *     ?EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z @ 0x1800E1A90 (-EnsureChildServices@LockScreenDirectorServiceProviderImpl@@AEAAJPEAPEAUILockScreenDirector@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??1?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E0704 (--1-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServiceTelemetry@@QEAAXXZ @ 0x1800E1664 (-StartActivity@LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity@LockScreenServ.c)
 *     ?Destroy@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E24A4 (-Destroy@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E2B34 (-Stop@-$ActivityBase@VLockScreenServiceLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LockScreenDirectorServiceProviderImpl::StartDirectorThread(struct IUnknown *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  struct IUnknownVtbl *EventW; // rax
  const char *v7; // r9
  struct IUnknownVtbl *lpVtbl; // rsi
  struct IUnknownVtbl *v9; // r15
  DWORD LastError; // edi
  __int64 v11; // rdx
  char *v12; // rsi
  DWORD v13; // edi
  struct IUnknownVtbl *v14; // rsi
  HANDLE CurrentProcess; // rdi
  HANDLE v16; // rax
  char *v17; // rcx
  __int64 v18; // rcx
  _QWORD v20[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+60h] [rbp-A0h]
  int *v22; // [rsp+68h] [rbp-98h]
  int *v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h] BYREF
  char v25; // [rsp+7Ch] [rbp-84h]
  int v26; // [rsp+A0h] [rbp-60h] BYREF
  const char *v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  char v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  _BYTE v31[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v32; // [rsp+158h] [rbp+58h]
  __int64 v33; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  __int64 v35; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v20[2] = v20;
  v20[1] = 0LL;
  v22 = &v26;
  v20[3] = 0LL;
  v23 = &v24;
  v21 = 0;
  v27 = "LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity";
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  v20[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::`vftable';
  v35 = 0LL;
  LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::StartActivity((LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity *)v20);
  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  if ( !v3 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA7,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_30;
  }
  if ( this )
    ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->AddRef)(this);
  v5 = CMarshaledInterface::Marshal(v3, &GUID_c853771a_f336_4cf8_9a27_1570293ab52d, this, 2);
  v4 = v5;
  if ( v5 >= 0 )
  {
    EventW = (struct IUnknownVtbl *)CreateEventW(0LL, 1, 0, 0LL);
    lpVtbl = this[16].lpVtbl;
    v9 = EventW;
    if ( (unsigned __int64)&lpVtbl[-1].Release + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(lpVtbl);
      SetLastError(LastError);
    }
    this[16].lpVtbl = v9;
    if ( v9 )
    {
      v12 = (char *)v3[1];
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v13 = GetLastError();
        CloseHandle(v12);
        SetLastError(v13);
      }
      v3[1] = 0LL;
      v14 = this[16].lpVtbl;
      CurrentProcess = GetCurrentProcess();
      v16 = GetCurrentProcess();
      if ( DuplicateHandle(v16, v14, CurrentProcess, (LPHANDLE)v3 + 1, 0, 0, 2u) )
      {
        if ( SHCreateThread(LockScreenDirectorServiceProviderImpl::s_RunDirectorThread, v3, 8u, 0LL) )
        {
          v3 = 0LL;
          wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
          v4 = 0;
          goto LABEL_22;
        }
        v11 = 179LL;
      }
      else
      {
        v11 = 176LL;
      }
    }
    else
    {
      v11 = 175LL;
    }
    v4 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)v11,
           (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
           v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xAA,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_22:
  if ( this )
    ((void (__fastcall *)(struct IUnknown *))this->lpVtbl->Release)(this);
  if ( v3 )
  {
    v17 = (char *)v3[1];
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v17);
    v18 = *v3;
    if ( *v3 )
    {
      *v3 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    operator delete(v3);
  }
LABEL_30:
  v20[0] = &LockScreenServiceTelemetry::LockScreenDirectorServiceProviderImpl_StartDirectorThread_Activity::`vftable';
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LockScreenServiceLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
  return v4;
}
