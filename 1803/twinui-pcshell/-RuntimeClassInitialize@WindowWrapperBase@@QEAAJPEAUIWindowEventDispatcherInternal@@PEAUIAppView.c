/*
 * XREFs of ?RuntimeClassInitialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEBG@Z @ 0x1801F32CC
 * Callers:
 *     ?RuntimeClassInitialize@WindowWrapper@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEBG@Z @ 0x1801EE3EC (-RuntimeClassInitialize@WindowWrapper@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@Win.c)
 * Callees:
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x18005B584 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180087690 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_56c6782606ebfbd5986f99ce5cf01b42___ @ 0x1801EED6C (Windows--Internal--ComTaskPool--QueueTask__lambda_56c6782606ebfbd5986f99ce5cf01b42___.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021B964 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 */

__int64 __fastcall WindowWrapperBase::RuntimeClassInitialize(
        WindowWrapperBase *this,
        struct IWindowEventDispatcherInternal *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a3,
        const unsigned __int16 *a4)
{
  __int64 v8; // rsi
  HRESULT v9; // eax
  DWORD CurrentThreadId; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  __int128 v16; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v17[9]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char *v19; // [rsp+A8h] [rbp+10h] BYREF

  try
  {
    (*(void (__fastcall **)(struct IWindowEventDispatcherInternal *))(*(_QWORD *)a2 + 168LL))(a2);
    v8 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 13) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
      (char *)this + 312,
      a2);
    if ( a4 )
      v9 = Windows::Internal::String::_InitializeHelper((HSTRING *)this + 17, a4);
    else
      v9 = -2147467261;
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        85LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v9);
    v17[0] = off_180336598;
    v17[1] = this;
    v17[7] = v17;
    WindowReadyState::SetCallback((__int64)this + 360, (__int64)v17);
    LODWORD(v19) = 0;
    *(_QWORD *)&v16 = this;
    *((_QWORD *)&v16 + 1) = &v19;
    CurrentThreadId = GetCurrentThreadId();
    v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_56c6782606ebfbd5986f99ce5cf01b42___(
            v12,
            v11,
            CurrentThreadId,
            &v16);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        130LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v13);
    v14 = (const char *)(unsigned int)v19;
    if ( (int)v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        131LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v19);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x87,
                     (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                     v14);
    return (unsigned int)v19;
  }
  return result;
}
