/*
 * XREFs of ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18011FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180004278 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x18000671C (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x18011812C (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1801247A0 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18012CD34 (-StartActivity@ConnectToViewManager@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall ViewEventDispatcher::v_PublishServices(
        ViewEventDispatcher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  __int64 v3; // rbx
  DWORD v5; // eax
  const char *v6; // r9
  int v7; // ebx
  __int64 v8; // r9
  int SiHostProcessHandle; // ebx
  __int64 v10; // rdx
  void **v12; // rdi
  char *v13; // rsi
  DWORD LastError; // ebx
  struct CCriticalFailureHandler *v15; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int *v18; // [rsp+58h] [rbp-A8h]
  int *v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h] BYREF
  char v21; // [rsp+6Ch] [rbp-94h]
  int v22; // [rsp+90h] [rbp-70h] BYREF
  const char *v23; // [rsp+98h] [rbp-68h]
  __int64 v24; // [rsp+A0h] [rbp-60h]
  char v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  _BYTE v27[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+148h] [rbp+48h]
  __int64 v29; // [rsp+150h] [rbp+50h]
  __int64 v30; // [rsp+158h] [rbp+58h]
  __int64 v31; // [rsp+160h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v3 = *((_QWORD *)this + 50);
  v16[2] = v16;
  v16[1] = 0LL;
  v18 = &v22;
  v16[3] = 0LL;
  v19 = &v20;
  v17 = 0;
  v23 = "ConnectToViewManager";
  v20 = 0;
  v21 = 0;
  v25 = 0;
  v22 = 0;
  v24 = 0LL;
  v26 = 1LL;
  v28 = 0LL;
  v29 = 0LL;
  memset(v27, 0, sizeof(v27));
  v30 = 0LL;
  v16[0] = &ViewManagerInteropTraceLogging::ConnectToViewManager::`vftable';
  v31 = 0LL;
  ViewManagerInteropTraceLogging::ConnectToViewManager::StartActivity((ViewManagerInteropTraceLogging::ConnectToViewManager *)v16);
  v5 = WaitForSingleObjectEx(*(HANDLE *)(v3 + 136), 0x7530u, 0);
  if ( v5 == 258 )
  {
    v7 = -2147483638;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x8000000ALL);
  }
  else
  {
    if ( v5 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93C,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v6);
      JUMPOUT(0x18011FD0BLL);
    }
    v7 = *(_DWORD *)(v3 + 156);
    if ( v7 >= 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v16);
      v16[0] = &ViewManagerInteropTraceLogging::ConnectToViewManager::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
      v7 = 0;
      goto LABEL_8;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA1,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v7);
  }
  v16[0] = &ViewManagerInteropTraceLogging::ConnectToViewManager::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
LABEL_8:
  LODWORD(v15) = v7;
  CRVPrivate::VerifyCriticalResult(
    (unsigned __int64)&v15,
    L"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const unsigned __int16 *)0x59A,
    v8);
  SiHostProcessHandle = (int)v15;
  if ( (int)v15 < 0 )
  {
    v10 = 1435LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)SiHostProcessHandle);
    return (unsigned int)SiHostProcessHandle;
  }
  v12 = (void **)((char *)this + 504);
  v13 = (char *)*((_QWORD *)this + 63);
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v13);
    SetLastError(LastError);
  }
  *v12 = 0LL;
  SiHostProcessHandle = GetSiHostProcessHandle(0x200u, v12);
  if ( SiHostProcessHandle < 0 )
  {
    v10 = 1438LL;
    goto LABEL_10;
  }
  ViewEventDispatcher::_PerformCrashRecovery((ViewEventDispatcher *)((char *)this - 112));
  return 0LL;
}
