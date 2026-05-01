/*
 * XREFs of _lambda_f748ab983864a1d9251a0884a7c17331_::operator() @ 0x1800E8390
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f748ab983864a1d9251a0884a7c17331___::Run @ 0x1800ED1D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f748ab983864a1d9251a0884a7c17331___--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x1800440E8 (wil--ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A39C8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1800E9BF8 (-RemovePaneViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x1800EA688 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800EC13C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_f748ab983864a1d9251a0884a7c17331_::operator()(__int64 a1)
{
  __int64 v2; // r14
  _QWORD *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r8
  void *v7; // rsi
  HRESULT v8; // eax
  HWND WindowW; // rax
  LPVOID v10; // rbx
  __int64 v11; // rdi
  const unsigned __int16 *AppId; // rax
  LPVOID v13; // rcx
  HANDLE ProcessHeap; // rax
  LPVOID pv[3]; // [rsp+38h] [rbp-59h] BYREF
  PeoplePaneViewManager *v17[2]; // [rsp+50h] [rbp-41h] BYREF
  char v18; // [rsp+60h] [rbp-31h]
  __int64 v19; // [rsp+68h] [rbp-29h]
  _BYTE v20[16]; // [rsp+78h] [rbp-19h] BYREF
  LPVOID lpMem; // [rsp+88h] [rbp-9h]
  char v22; // [rsp+90h] [rbp-1h]
  _BYTE v23[24]; // [rsp+98h] [rbp+7h] BYREF
  int v24; // [rsp+B0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  int v26; // [rsp+F8h] [rbp+67h] BYREF
  LPVOID ppv; // [rsp+100h] [rbp+6Fh] BYREF

  v19 = -2LL;
  v2 = a1 + 40;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 40),
    (wil::ActivityThreadWatcher *)v20);
  pv[0] = *(LPVOID *)a1;
  v3 = (_QWORD *)(a1 + 8);
  pv[1] = (LPVOID)(a1 + 8);
  wil::ScopeExit__lambda_6914baa2bbb41478f35591fe55a15932___((__int64)v17, (__int128 *)pv);
  memset(pv, 0, sizeof(pv));
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
         pv,
         L"Windows.Internal.ShellExperience.PeoplePane",
         43LL);
  v5 = v4;
  if ( v4 < 0 )
    goto LABEL_9;
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(pv, L" ", 1LL);
  v5 = v4;
  if ( v4 < 0 )
    goto LABEL_9;
  v6 = v3[1];
  if ( v6 == -1 )
  {
    if ( *v3 )
    {
      do
        ++v6;
      while ( *(_WORD *)(*v3 + 2 * v6) );
    }
    else
    {
      v6 = 0LL;
    }
  }
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(pv, *v3, v6);
  v5 = v4;
  if ( v4 >= 0 )
  {
    ppv = 0LL;
    v8 = CoCreateInstance(&CLSID_ApplicationActivationClient, 0LL, 1u, &GUID_2e941141_7f97_4756_ba1d_9decde894a3d, &ppv);
    v5 = v8;
    v7 = pv[0];
    if ( v8 >= 0
      && (WindowW = FindWindowW(L"Shell_TrayWnd", 0LL),
          SetForegroundWindow(WindowW),
          v10 = ppv,
          v11 = *(_QWORD *)ppv,
          AppId = PeoplePaneViewManager::s_GetAppId(),
          v8 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, void *, _QWORD, int *))(v11 + 24))(
                 v10,
                 AppId,
                 v7,
                 0LL,
                 &v26),
          v5 = v8,
          v8 >= 0) )
    {
      wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
      v18 = 0;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xA8,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v8);
    }
    v13 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xA8,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v4);
    v7 = pv[0];
  }
  if ( v7 )
    CoTaskMemFree(v7);
  if ( v18 )
    PeoplePaneViewManager::RemovePaneViewInfoForContactId(v17[0], *(const unsigned __int16 **)v17[1]);
  if ( v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  if ( v22 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
  return v5;
}
