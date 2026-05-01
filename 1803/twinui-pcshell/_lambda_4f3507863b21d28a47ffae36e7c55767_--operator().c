/*
 * XREFs of _lambda_4f3507863b21d28a47ffae36e7c55767_::operator() @ 0x1801EE054
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f3507863b21d28a47ffae36e7c55767___::Run @ 0x1801EE3E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f3507863b21d28a47ffae36e7c55767___--Run.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800F8074 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18012929C (--1CCrashDetector@@QEAA@XZ.c)
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x18012C9F4 (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18012DBB0 (-Disarm@CBaseRPCTimeout@@QEAAXXZ.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180149930 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     CCrashDetector::StartMonitoringThreadOfWindow__lambda_3114892238aac1ba31b9cd865f2ce2e1___ @ 0x1801E2C7C (CCrashDetector--StartMonitoringThreadOfWindow__lambda_3114892238aac1ba31b9cd865f2ce2e1___.c)
 *     ?CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z @ 0x1801E31CC (-CreateEventWithSDDL@@YAJPEBG0HPEAPEAX@Z.c)
 *     _lambda_458208d6a7ae0bd08cfee5104eefb8a5_::operator() @ 0x1801EDFF0 (_lambda_458208d6a7ae0bd08cfee5104eefb8a5_--operator().c)
 *     ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1802FE050 (-IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_4f3507863b21d28a47ffae36e7c55767_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  HRESULT v3; // eax
  const unsigned __int16 *v4; // rdx
  __int64 v5; // r8
  int EventWithSDDL; // eax
  int *v7; // r8
  int IsAppBeingDebugged; // eax
  _QWORD *v9; // rax
  const char *v10; // r9
  _QWORD *v11; // rdi
  char *v12; // rbx
  int v13; // r14d
  int started; // eax
  int v15; // eax
  int v16; // eax
  __int64 v18; // [rsp+28h] [rbp-49h] BYREF
  LPOLESTR lpsz; // [rsp+30h] [rbp-41h] BYREF
  HANDLE hHandle[2]; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int16 v21[8]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD *v22; // [rsp+58h] [rbp-19h]
  __int64 v23; // [rsp+60h] [rbp-11h] BYREF
  char v24; // [rsp+68h] [rbp-9h]
  __int64 v25; // [rsp+70h] [rbp-1h]
  _BYTE v26[32]; // [rsp+78h] [rbp+7h] BYREF
  GUID pguid; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v25 = -2LL;
  v23 = *(_QWORD *)(a1 + 8);
  v24 = 1;
  v2 = CoCreateGuid(&pguid);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      125LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  lpsz = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpsz,
    0LL);
  v3 = StringFromCLSID(&pguid, &lpsz);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      127LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  hHandle[0] = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    hHandle,
    0LL);
  EventWithSDDL = CreateEventWithSDDL(lpsz, v4, v5, hHandle);
  if ( EventWithSDDL < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      129LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)EventWithSDDL);
    __debugbreak();
  }
  *(_DWORD *)v21 = 0;
  IsAppBeingDebugged = CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
                         *(CallerIdentity::ApiPolicyChecker **)(a1 + 24),
                         v21,
                         v7);
  if ( IsAppBeingDebugged < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      131LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)IsAppBeingDebugged);
    __debugbreak();
  }
  v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v9;
  v22 = v9;
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  v22 = v11;
  if ( !v11 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      133LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      v10);
    __debugbreak();
  }
  v18 = 0LL;
  CRPCTimeout::CRPCTimeout((CRPCTimeout *)v26, 0x3A98u);
  v12 = (char *)hHandle[0];
  v13 = *(_DWORD *)v21;
  if ( *(_DWORD *)v21 )
  {
    CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v26);
    *(_QWORD *)v21 = v12;
    started = CCrashDetector::StartMonitoringThreadOfWindow__lambda_3114892238aac1ba31b9cd865f2ce2e1___(
                v11,
                *(HWND *)(a1 + 16),
                v21);
    if ( started < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        150LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)started);
      __debugbreak();
    }
  }
  v18 = 0LL;
  v15 = CoreQueryWindowService(
          *(_QWORD *)(a1 + 16),
          &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
          &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc,
          &v18);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      152LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v15);
    __debugbreak();
  }
  *(GUID *)v21 = pguid;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int16 *))(*(_QWORD *)v18 + 24LL))(
          v18,
          *(_QWORD *)(a1 + 16),
          v21);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      154LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v16);
  CBaseRPCTimeout::Disarm((CBaseRPCTimeout *)v26);
  WaitForSingleObject(v12, v13 != 0 ? -1 : 15000);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  CCrashDetector::~CCrashDetector((CCrashDetector *)v11);
  operator delete(v11, (const struct std::nothrow_t *)0x18);
  if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v12);
  if ( lpsz )
    CoTaskMemFree(lpsz);
  v24 = 0;
  lambda_458208d6a7ae0bd08cfee5104eefb8a5_::operator()((__int64)&v23);
  return 0LL;
}
