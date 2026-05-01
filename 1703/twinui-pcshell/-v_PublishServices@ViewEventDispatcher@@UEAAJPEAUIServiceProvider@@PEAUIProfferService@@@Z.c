/*
 * XREFs of ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800F4C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800040CC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x1800ED5CC (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1800F9508 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@$$V@ConnectToViewManager@ViewManagerInteropTraceLogging@@SA?AV01@XZ @ 0x18010D010 (--$Start@$$V@ConnectToViewManager@ViewManagerInteropTraceLogging@@SA-AV01@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
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
  _QWORD v16[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v3 = *((_QWORD *)this + 45);
  ViewManagerInteropTraceLogging::ConnectToViewManager::Start<>((ViewManagerInteropTraceLogging::ConnectToViewManager *)v16);
  v5 = WaitForSingleObjectEx(*(HANDLE *)(v3 + 120), 0x7530u, 0);
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
        (void *)0x90F,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v6);
      JUMPOUT(0x1800F4E16LL);
    }
    v7 = *(_DWORD *)(v3 + 140);
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
    (const unsigned __int16 *)0x591,
    v8);
  SiHostProcessHandle = (int)v15;
  if ( (int)v15 < 0 )
  {
    v10 = 1426LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)SiHostProcessHandle);
    return (unsigned int)SiHostProcessHandle;
  }
  v12 = (void **)((char *)this + 464);
  v13 = (char *)*((_QWORD *)this + 58);
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
    v10 = 1429LL;
    goto LABEL_10;
  }
  ViewEventDispatcher::_PerformCrashRecovery((ViewEventDispatcher *)((char *)this - 80));
  return 0LL;
}
