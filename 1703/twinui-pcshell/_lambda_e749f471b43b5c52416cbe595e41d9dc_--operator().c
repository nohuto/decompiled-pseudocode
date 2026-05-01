/*
 * XREFs of _lambda_e749f471b43b5c52416cbe595e41d9dc_::operator() @ 0x1801113D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e749f471b43b5c52416cbe595e41d9dc___::Run @ 0x180111B30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e749f471b43b5c52416cbe595e41d9dc___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18004FA70 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180061204 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x180076414 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___ @ 0x1801119BC (CCrashDetector--StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116F00 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801768AC (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_e749f471b43b5c52416cbe595e41d9dc_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  int v3; // edi
  HRESULT v4; // eax
  const WCHAR *v5; // rdi
  RTL_SRWLOCK *v6; // rbx
  __int64 v7; // rax
  bool v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rsi
  void *v11; // r14
  DWORD LastError; // edi
  signed int v13; // eax
  int *v14; // r8
  const char *v15; // r9
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int IsAppBeingDebugged; // eax
  _QWORD *v19; // rax
  void *v20; // rsi
  ULONG v21; // r12d
  int started; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  DWORD v25; // edx
  const struct _TlgProvider_t *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  ULONG SecurityDescriptorSize[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  HLOCAL hMem; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  LPOLESTR lpsz; // [rsp+58h] [rbp-B0h] BYREF
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+60h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp-90h] BYREF
  GUID v37; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  char v39; // [rsp+A0h] [rbp-68h]
  _QWORD v40[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  GUID pguid; // [rsp+C8h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v42 = -2LL;
  lpsz = *(LPOLESTR *)(a1 + 8);
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v38, &lpsz);
  v2 = CoCreateGuid(&pguid);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_63;
  }
  lpsz = 0LL;
  v4 = StringFromCLSID(&pguid, &lpsz);
  v3 = v4;
  if ( v4 >= 0 )
  {
    v5 = lpsz;
    *(_QWORD *)&v37.Data1 = lpsz;
    v6 = 0LL;
    SRWLock = 0LL;
    hMem = 0LL;
    SecurityDescriptorSize[0] = 0;
    v7 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>>(
           (__int64)v40,
           (__int64)&hMem);
    v8 = !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;0xFFFFFFFFF;;;WD)(A;;0xFFFFFFFFF;;;AC)",
            1u,
            (PSECURITY_DESCRIPTOR *)(v7 + 8),
            SecurityDescriptorSize);
    if ( v41 )
    {
      v9 = v40[1];
      v10 = (_QWORD *)v40[0];
      v11 = *(void **)v40[0];
      if ( *(_QWORD *)v40[0] )
      {
        LastError = GetLastError();
        LocalFree(v11);
        SetLastError(LastError);
        v5 = *(const WCHAR **)&v37.Data1;
      }
      *v10 = v9;
    }
    if ( v8 )
    {
      v13 = GetLastError();
      v3 = (unsigned __int16)v13 | 0x80070000;
      if ( v13 <= 0 )
        v3 = v13;
      if ( v3 >= 0 )
        v3 = -2147467259;
    }
    else
    {
      *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
      EventAttributes.nLength = 24;
      EventAttributes.lpSecurityDescriptor = hMem;
      v6 = (RTL_SRWLOCK *)CreateEventW(&EventAttributes, 1, 0, v5);
      SRWLock = v6;
      if ( v6 )
      {
        if ( hMem )
          LocalFree(hMem);
        v3 = 0;
LABEL_21:
        if ( v3 < 0 )
        {
          v16 = (unsigned int)v3;
          v17 = 148LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v17,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
            (const char *)v16);
LABEL_59:
          if ( (unsigned __int64)&v6[-1].Ptr + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v6);
          goto LABEL_61;
        }
        SecurityDescriptorSize[0] = 0;
        IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                               *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                               (const unsigned __int16 *)SecurityDescriptorSize,
                               v14);
        v3 = IsAppBeingDebugged;
        if ( IsAppBeingDebugged < 0 )
        {
          v16 = (unsigned int)IsAppBeingDebugged;
          v17 = 150LL;
          goto LABEL_25;
        }
        v19 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v20 = v19;
        *(_QWORD *)&v37.Data1 = v19;
        if ( v19 )
        {
          *v19 = 0LL;
          v19[1] = 0LL;
          v19[2] = 0LL;
        }
        else
        {
          v20 = 0LL;
        }
        hMem = v20;
        if ( !v20 )
        {
          v3 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x98,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
            (const char *)0x8007000ELL);
LABEL_57:
          if ( v20 )
          {
            CCrashDetector::~CCrashDetector((CCrashDetector *)v20);
            operator delete(v20);
          }
          goto LABEL_59;
        }
        LODWORD(v33) = 15000;
        v31 = 0LL;
        CRPCTimeout::CRPCTimeout(&EventAttributes, 0x3A98u);
        v21 = SecurityDescriptorSize[0];
        if ( !SecurityDescriptorSize[0] )
          goto LABEL_37;
        if ( SLODWORD(EventAttributes.lpSecurityDescriptor) >= 0 )
        {
          LODWORD(EventAttributes.lpSecurityDescriptor) = -2147467259;
          CoDisableCallCancellation(0LL);
          if ( *(_QWORD *)&EventAttributes.bInheritHandle )
          {
            DeleteTimerQueueTimer(0LL, *(HANDLE *)&EventAttributes.bInheritHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
            *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
          }
        }
        *(_QWORD *)&v37.Data1 = v6;
        started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___(
                    v20,
                    *(HWND *)(a1 + 16));
        v3 = started;
        if ( started < 0 )
        {
          v23 = 169LL;
        }
        else
        {
LABEL_37:
          v24 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          started = CoreQueryWindowService(
                      *(_QWORD *)(a1 + 16),
                      &IID_IHostedViewDeferClose,
                      &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                      &v31);
          v3 = started;
          if ( started >= 0 )
          {
            v37 = pguid;
            started = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *))(*(_QWORD *)v31 + 24LL))(
                        v31,
                        *(_QWORD *)(a1 + 16),
                        &v37);
            v3 = started;
            if ( started >= 0 )
            {
              if ( SLODWORD(EventAttributes.lpSecurityDescriptor) >= 0 )
              {
                LODWORD(EventAttributes.lpSecurityDescriptor) = -2147467259;
                CoDisableCallCancellation(0LL);
                if ( *(_QWORD *)&EventAttributes.bInheritHandle )
                  DeleteTimerQueueTimer(0LL, *(HANDLE *)&EventAttributes.bInheritHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
              }
              v25 = v33;
              if ( v21 )
                v25 = -1;
              if ( WaitForSingleObject(v6, v25) == 258 )
              {
                v26 = ViewManagerInteropLogging::Provider();
                if ( *(_DWORD *)v26 > 5u )
                {
                  v45 = &v33;
                  v46 = 4LL;
                  TlgWrite(v26, &unk_18020076B, 0LL, 0LL, 3u, &pData);
                }
              }
              v3 = 0;
              goto LABEL_55;
            }
            v23 = 173LL;
          }
          else
          {
            v23 = 171LL;
          }
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
          (const char *)(unsigned int)started);
        if ( SLODWORD(EventAttributes.lpSecurityDescriptor) >= 0 )
        {
          LODWORD(EventAttributes.lpSecurityDescriptor) = -2147467259;
          CoDisableCallCancellation(0LL);
          if ( *(_QWORD *)&EventAttributes.bInheritHandle )
            DeleteTimerQueueTimer(0LL, *(HANDLE *)&EventAttributes.bInheritHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
        }
LABEL_55:
        v27 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_57;
      }
      v3 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xCF,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
             v15);
    }
    if ( hMem )
      LocalFree(hMem);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x92,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
    (const char *)(unsigned int)v4);
LABEL_61:
  if ( lpsz )
    CoTaskMemFree(lpsz);
LABEL_63:
  if ( v39 )
  {
    v28 = v38;
    ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(v38 + 160), &SRWLock);
    ViewWrapperBase::NavigateInternal(v28 + 8, 0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return (unsigned int)v3;
}
