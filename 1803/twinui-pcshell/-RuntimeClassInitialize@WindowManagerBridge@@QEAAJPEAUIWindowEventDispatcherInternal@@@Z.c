/*
 * XREFs of ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1801ED80C
 * Callers:
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x1801D194C (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800F6134 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWindowWatcher@WindowManagerBridge@@AEAAJXZ @ 0x1801EDC18 (-StartWindowWatcher@WindowManagerBridge@@AEAAJXZ.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021B964 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::RuntimeClassInitialize(
        wil::details **this,
        struct IWindowEventDispatcherInternal *a2)
{
  wil::details *Event; // rdi
  const char *v4; // r9
  int LastError; // eax
  wil::details *v6; // rdi
  const char *v7; // r9
  int v8; // eax
  HRESULT v9; // eax
  LPVOID v10; // rsi
  wil::details *v11; // rcx
  int v12; // eax
  LPVOID v13; // rsi
  wil::details *v14; // rcx
  int v15; // eax
  int started; // eax
  const char *v17; // r9
  __int64 result; // rax
  const char *v19; // r9
  __int64 v20; // [rsp+0h] [rbp-118h] BYREF
  __int64 v21; // [rsp+30h] [rbp-E8h]
  LPVOID v22[3]; // [rsp+40h] [rbp-D8h] BYREF
  int v23; // [rsp+5Ch] [rbp-BCh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  LPVOID ppv; // [rsp+130h] [rbp+18h] BYREF

  v21 = -2LL;
  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
      this + 35,
      a2);
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        this + 33,
        Event);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1621,
                    (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
                    v4);
    }
    if ( LastError < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        52LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)LastError);
    v6 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v6 )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        this + 34,
        v6);
      v8 = 0;
    }
    else
    {
      v8 = wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1621,
             (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
             v7);
    }
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        54LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    ppv = 0LL;
    v9 = CoCreateInstance(
           &GUID_3480a401_bde9_4407_bc02_798a866ac051,
           0LL,
           0x404u,
           &GUID_0f4accb1_d8f9_4011_ba37_2557925a78cf,
           &ppv);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        62LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = ppv;
    v11 = this[23];
    this[23] = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, char *))(*(_QWORD *)v10 + 24LL))(
            v10,
            &SID_WindowStatics,
            &GUID_5e75aba7_c424_4076_9d47_409a1eda087f,
            (char *)this + 184);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        64LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    v13 = ppv;
    v14 = this[6];
    this[6] = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = (*(__int64 (__fastcall **)(LPVOID, SID *, GUID *, char *))(*(_QWORD *)v13 + 24LL))(
            v13,
            &SID_AppViewStatics,
            &GUID_882d9981_e3b3_4275_a857_00c3910fb5c3,
            (char *)this + 48);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        65LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    try
    {
      started = WindowManagerBridge::StartWindowWatcher((WindowManagerBridge *)this);
      if ( started < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          71LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)started);
    }
    catch ( wil::ResultException v22 )
    {
      *((_DWORD *)this + 72) = v23;
      wil::details::SetEvent(this[33], &v20);
      v19 = (const char *)*((unsigned int *)this + 72);
      if ( (int)v19 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          80LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          v19);
        __debugbreak();
      }
      wil::ResultException::~ResultException(v22);
    }
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v17);
  }
  return result;
}
