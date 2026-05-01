/*
 * XREFs of _lambda_e749f471b43b5c52416cbe595e41d9dc_::operator() @ 0x18013B678
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e749f471b43b5c52416cbe595e41d9dc___::Run @ 0x18013BE80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e749f471b43b5c52416cbe595e41d9dc___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x180051F94 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x180062EF4 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___ @ 0x18013BC4C (CCrashDetector--StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180141554 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C23E4 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_e749f471b43b5c52416cbe595e41d9dc_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  HRESULT v3; // eax
  int v4; // esi
  HRESULT v5; // eax
  const WCHAR *v6; // rsi
  RTL_SRWLOCK *v7; // rbx
  char v8; // al
  PSECURITY_DESCRIPTOR v9; // r12
  HLOCAL *v10; // r14
  HLOCAL v11; // r15
  DWORD LastError; // esi
  signed int v13; // eax
  int *v14; // r8
  const char *v15; // r9
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int IsAppBeingDebugged; // eax
  _QWORD *v19; // rax
  void *v20; // r14
  ULONG v21; // r12d
  int started; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  DWORD v25; // edx
  const struct _TlgProvider_t *v26; // rax
  __int64 v27; // rcx
  ULONG SecurityDescriptorSize[2]; // [rsp+38h] [rbp-99h] BYREF
  __int64 v30; // [rsp+40h] [rbp-91h] BYREF
  HLOCAL hMem; // [rsp+48h] [rbp-89h] BYREF
  int v32; // [rsp+50h] [rbp-81h] BYREF
  HLOCAL *Parameter; // [rsp+58h] [rbp-79h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-71h] BYREF
  HANDLE Timer; // [rsp+68h] [rbp-69h]
  LPOLESTR lpsz; // [rsp+70h] [rbp-61h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp-59h] BYREF
  GUID v38; // [rsp+88h] [rbp-49h] BYREF
  __int64 v39; // [rsp+98h] [rbp-39h]
  __int64 v40; // [rsp+A0h] [rbp-31h]
  char v41; // [rsp+A8h] [rbp-29h]
  GUID pguid; // [rsp+B8h] [rbp-19h] BYREF
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+C8h] [rbp-9h] BYREF
  int *v44; // [rsp+E8h] [rbp+17h]
  int v45; // [rsp+F0h] [rbp+1Fh]
  int v46; // [rsp+F4h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v39 = -2LL;
  v2 = *(_QWORD *)(a1 + 8);
  v40 = v2;
  v41 = 1;
  v3 = CoCreateGuid(&pguid);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_63;
  }
  lpsz = 0LL;
  v5 = StringFromCLSID(&pguid, &lpsz);
  v4 = v5;
  if ( v5 >= 0 )
  {
    v6 = lpsz;
    *(_QWORD *)&v38.Data1 = lpsz;
    v7 = 0LL;
    SRWLock = 0LL;
    hMem = 0LL;
    SecurityDescriptorSize[1] = 0;
    Parameter = &hMem;
    SecurityDescriptor = 0LL;
    LOBYTE(Timer) = 1;
    v8 = !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;0xFFFFFFFFF;;;WD)(A;;0xFFFFFFFFF;;;AC)",
            1u,
            &SecurityDescriptor,
            &SecurityDescriptorSize[1]);
    LOBYTE(SecurityDescriptorSize[0]) = v8;
    if ( (_BYTE)Timer )
    {
      v9 = SecurityDescriptor;
      v10 = Parameter;
      v11 = *Parameter;
      if ( *Parameter )
      {
        LastError = GetLastError();
        LocalFree(v11);
        SetLastError(LastError);
        v8 = SecurityDescriptorSize[0];
        v6 = *(const WCHAR **)&v38.Data1;
      }
      *v10 = v9;
    }
    if ( v8 )
    {
      v13 = GetLastError();
      v4 = (unsigned __int16)v13 | 0x80070000;
      if ( v13 <= 0 )
        v4 = v13;
      if ( v4 >= 0 )
        v4 = -2147467259;
    }
    else
    {
      *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
      EventAttributes.nLength = 24;
      EventAttributes.lpSecurityDescriptor = hMem;
      v7 = (RTL_SRWLOCK *)CreateEventW(&EventAttributes, 1, 0, v6);
      SRWLock = v7;
      if ( v7 )
      {
        if ( hMem )
          LocalFree(hMem);
        v4 = 0;
LABEL_21:
        if ( v4 < 0 )
        {
          v16 = (unsigned int)v4;
          v17 = 148LL;
LABEL_25:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v17,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
            (const char *)v16);
LABEL_59:
          if ( (unsigned __int64)&v7[-1].Ptr + 7 <= 0xFFFFFFFFFFFFFFFDuLL )
            CloseHandle(v7);
          goto LABEL_61;
        }
        SecurityDescriptorSize[1] = 0;
        IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                               *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                               (const unsigned __int16 *)&SecurityDescriptorSize[1],
                               v14);
        v4 = IsAppBeingDebugged;
        if ( IsAppBeingDebugged < 0 )
        {
          v16 = (unsigned int)IsAppBeingDebugged;
          v17 = 150LL;
          goto LABEL_25;
        }
        v19 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v20 = v19;
        *(_QWORD *)&v38.Data1 = v19;
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
          v4 = -2147024882;
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
        v32 = 15000;
        v30 = 0LL;
        CRPCTimeout::CRPCTimeout(&Parameter, 0x3A98u);
        v21 = SecurityDescriptorSize[1];
        if ( !SecurityDescriptorSize[1] )
          goto LABEL_37;
        if ( (int)SecurityDescriptor >= 0 )
        {
          LODWORD(SecurityDescriptor) = -2147467259;
          CoDisableCallCancellation(0LL);
          if ( Timer )
          {
            DeleteTimerQueueTimer(0LL, Timer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
            Timer = 0LL;
          }
        }
        *(_QWORD *)&v38.Data1 = v7;
        started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_ec4fde8b812195c38639938f317e8c2b___(
                    v20,
                    *(HWND *)(a1 + 16));
        v4 = started;
        if ( started < 0 )
        {
          v23 = 169LL;
        }
        else
        {
LABEL_37:
          v24 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          started = CoreQueryWindowService(
                      *(_QWORD *)(a1 + 16),
                      &IID_IHostedViewDeferClose,
                      &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                      &v30);
          v4 = started;
          if ( started >= 0 )
          {
            v38 = pguid;
            started = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *))(*(_QWORD *)v30 + 24LL))(
                        v30,
                        *(_QWORD *)(a1 + 16),
                        &v38);
            v4 = started;
            if ( started >= 0 )
            {
              if ( (int)SecurityDescriptor >= 0 )
              {
                LODWORD(SecurityDescriptor) = -2147467259;
                CoDisableCallCancellation(0LL);
                if ( Timer )
                  DeleteTimerQueueTimer(0LL, Timer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
              }
              v25 = v32;
              if ( v21 )
                v25 = -1;
              if ( WaitForSingleObject(v7, v25) == 258 )
              {
                v26 = ViewManagerInteropLogging::Provider();
                if ( *(_DWORD *)v26 > 5u )
                {
                  v44 = &v32;
                  v45 = 4;
                  v46 = 0;
                  TlgWrite(v26, &unk_180263C88, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&EventAttributes);
                }
              }
              v4 = 0;
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
        if ( (int)SecurityDescriptor >= 0 )
        {
          LODWORD(SecurityDescriptor) = -2147467259;
          CoDisableCallCancellation(0LL);
          if ( Timer )
            DeleteTimerQueueTimer(0LL, Timer, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
        }
LABEL_55:
        v27 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_57;
      }
      v4 = wil::details::in1diag3::Return_GetLastError(
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
    (const char *)(unsigned int)v5);
LABEL_61:
  if ( lpsz )
    CoTaskMemFree(lpsz);
LABEL_63:
  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(v2 + 184), &SRWLock);
  ViewWrapperBase::NavigateInternal(v2 + 8, 0LL);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return (unsigned int)v4;
}
