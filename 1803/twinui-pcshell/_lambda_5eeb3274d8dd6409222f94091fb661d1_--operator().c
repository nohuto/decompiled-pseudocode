/*
 * XREFs of _lambda_5eeb3274d8dd6409222f94091fb661d1_::operator() @ 0x1801E2E2C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1___::Run @ 0x1801E32F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800F8074 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18012929C (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x18012C9F4 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18012DBB0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ??$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z @ 0x1801E2AE8 (--$HostedViewClosingTimeoutWaitExceeded@AEAK@ViewManagerInteropTraceLogging@@SAXAEAK@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_3114892238aac1ba31b9cd865f2ce2e1___ @ 0x1801E2C7C (CCrashDetector--StartMonitoringThreadOfWindow__lambda_3114892238aac1ba31b9cd865f2ce2e1___.c)
 *     _lambda_5dd7cd4bfb25944316609216e9eeedb1_::operator() @ 0x1801E2DC0 (_lambda_5dd7cd4bfb25944316609216e9eeedb1_--operator().c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1801E31CC (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1802FE050 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_5eeb3274d8dd6409222f94091fb661d1_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  unsigned int v3; // edi
  HRESULT v4; // eax
  const unsigned __int16 *v5; // rdx
  int v6; // r8d
  int IsAppBeingDebugged; // eax
  int *v8; // r8
  char *v9; // rbx
  __int64 v10; // rdx
  _QWORD *v11; // rax
  void *v12; // rsi
  int started; // eax
  __int64 v14; // rdx
  DWORD v15; // edx
  unsigned __int16 v17[2]; // [rsp+28h] [rbp-49h] BYREF
  int v18; // [rsp+2Ch] [rbp-45h] BYREF
  __int64 v19; // [rsp+30h] [rbp-41h] BYREF
  LPOLESTR lpsz; // [rsp+38h] [rbp-39h] BYREF
  HANDLE hHandle; // [rsp+40h] [rbp-31h] BYREF
  GUID v22; // [rsp+48h] [rbp-29h] BYREF
  __int64 v23; // [rsp+58h] [rbp-19h] BYREF
  char v24; // [rsp+60h] [rbp-11h]
  _BYTE v25[24]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v26; // [rsp+80h] [rbp+Fh]
  void *v27; // [rsp+88h] [rbp+17h]
  GUID pguid; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v26 = -2LL;
  v23 = *(_QWORD *)(a1 + 8);
  v24 = 1;
  v2 = CoCreateGuid(&pguid);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_35;
  }
  lpsz = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpsz,
    0LL);
  v4 = StringFromCLSID(&pguid, &lpsz);
  v3 = v4;
  if ( v4 >= 0 )
  {
    hHandle = 0LL;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hHandle,
      0LL);
    IsAppBeingDebugged = CreateEventWithSDDL(lpsz, v5, v6, &hHandle);
    v3 = IsAppBeingDebugged;
    v9 = (char *)hHandle;
    if ( IsAppBeingDebugged < 0 )
    {
      v10 = 151LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
        (const char *)(unsigned int)IsAppBeingDebugged);
LABEL_31:
      if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v9);
      goto LABEL_33;
    }
    *(_DWORD *)v17 = 0;
    IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                           *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                           v17,
                           v8);
    v3 = IsAppBeingDebugged;
    if ( IsAppBeingDebugged < 0 )
    {
      v10 = 153LL;
      goto LABEL_9;
    }
    v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    *(_QWORD *)&v22.Data1 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    v27 = v12;
    if ( !v12 )
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_29;
    }
    v18 = 15000;
    v19 = 0LL;
    CRPCTimeout::CRPCTimeout((CRPCTimeout *)v25, 0x3A98u);
    if ( *(_DWORD *)v17
      && (CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v25),
          *(_QWORD *)&v22.Data1 = v9,
          started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_3114892238aac1ba31b9cd865f2ce2e1___(
                      v12,
                      *(HWND *)(a1 + 16),
                      &v22),
          v3 = started,
          started < 0) )
    {
      v14 = 172LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      started = CoreQueryWindowService(
                  *(_QWORD *)(a1 + 16),
                  &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                  &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
                  &v19);
      v3 = started;
      if ( started >= 0 )
      {
        v22 = pguid;
        started = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *))(*(_QWORD *)v19 + 24LL))(
                    v19,
                    *(_QWORD *)(a1 + 16),
                    &v22);
        v3 = started;
        if ( started >= 0 )
        {
          CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v25);
          v15 = v18;
          if ( *(_DWORD *)v17 )
            v15 = -1;
          if ( WaitForSingleObject(v9, v15) == 258 )
            ViewManagerInteropTraceLogging::HostedViewClosingTimeoutWaitExceeded<unsigned long &>((__int64)&v18);
          v3 = 0;
          goto LABEL_28;
        }
        v14 = 176LL;
      }
      else
      {
        v14 = 174LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
      (const char *)(unsigned int)started);
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v25);
LABEL_28:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
LABEL_29:
    if ( v12 )
    {
      CCrashDetector::~CCrashDetector((CCrashDetector *)v12);
      operator delete(v12, (const struct std::nothrow_t *)0x18);
    }
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x95,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\uapviewwrapper.cpp",
    (const char *)(unsigned int)v4);
LABEL_33:
  if ( lpsz )
    CoTaskMemFree(lpsz);
LABEL_35:
  v24 = 0;
  lambda_5dd7cd4bfb25944316609216e9eeedb1_::operator()((__int64)&v23);
  return v3;
}
