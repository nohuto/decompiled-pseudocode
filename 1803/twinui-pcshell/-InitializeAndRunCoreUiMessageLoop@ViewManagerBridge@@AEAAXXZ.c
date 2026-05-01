/*
 * XREFs of ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x1801DCDB0
 * Callers:
 *     _lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_ @ 0x1801DABA0 (_lambda_746ce81ff21a836f4d6b75f33bf24800_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewManagerBridge::InitializeAndRunCoreUiMessageLoop(wil::details **this)
{
  ViewManagerBridge *v1; // rdi
  _QWORD *v2; // rsi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  volatile int *v16; // rdx
  wil *v17; // rcx
  void *v18; // rdx
  __int64 v19[7]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v19[1] = -2LL;
  v1 = (ViewManagerBridge *)this;
  try
  {
    v2 = this + 11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
    v3 = CoreUICreate(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1341LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(ViewManagerBridge *), ViewManagerBridge *))(*(_QWORD *)*v2 + 264LL))(
           *v2,
           *((_QWORD *)v1 + 17),
           lambda_fac38c699c8bb63e0b9dd6c10e48dd3a_::_lambda_invoker_cdecl_,
           v1);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1350LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v5 = CoreUIFactoryCreate(&v24);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1354LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v24 + 24LL))(
           v24,
           &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
           (__int64)v1 + 96);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1357LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v25 = 0LL;
    v7 = v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v8 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v7 + 40LL))(
           v7,
           L"System\\NavigationServer_ShellViewManager",
           *((unsigned int *)v1 + 24),
           &v25);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1359LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 56LL))(v25, (__int64)v1 + 8);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1362LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 13);
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v25)(
            v25,
            &GUID_490c6bc3_8ab2_4528_b974_709a9ef2d72d,
            (__int64)v1 + 104);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1365LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v24 + 24LL))(
            v24,
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            &v23);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1369LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v19[0] = 0LL;
    v12 = v24;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    v13 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64 *))(*(_QWORD *)v12 + 40LL))(
            v12,
            L"System\\NavigationServer_ClientViewCreator",
            v23,
            v19);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1371LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 14);
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v19[0])(
            v19[0],
            &GUID_e07f380f_c171_42d4_ae2c_fd6bf97976e9,
            (__int64)v1 + 112);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1372LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 224LL))(*v2);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1375LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  catch ( ... )
  {
    *((_DWORD *)this + 37) = wil::ResultFromCaughtException(v17);
    wil::details::SetEvent(this[16], v18);
    v1 = (ViewManagerBridge *)this;
  }
  Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease((__int64 *)v1 + 10, v16);
}
