/*
 * XREFs of _lambda_56c6782606ebfbd5986f99ce5cf01b42_::operator() @ 0x1801EFEFC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_56c6782606ebfbd5986f99ce5cf01b42___::Run @ 0x1801F3140 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_56c6782606ebfbd5986f99ce5cf01b42___--Run.c)
 * Callees:
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18005B600 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180087644 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_56c6782606ebfbd5986f99ce5cf01b42_::operator()(_DWORD **a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  wil *v26; // rcx
  const char *v28; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v32; // [rsp+50h] [rbp+8h]
  HSTRING string; // [rsp+58h] [rbp+10h] BYREF
  HSTRING v34; // [rsp+60h] [rbp+18h] BYREF

  try
  {
    v2 = *((_QWORD *)*a1 + 13);
    v3 = (__int64 *)(*a1 + 28);
    v4 = *v3;
    *v3 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 64LL))(v2, v3);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        100LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)*a1 + 13) + 56LL))(*((_QWORD *)*a1 + 13), *a1 + 32);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        101LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)*a1 + 13) + 48LL))(*((_QWORD *)*a1 + 13), *a1 + 52);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        102LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)*a1 + 13) + 120LL))(
           *((_QWORD *)*a1 + 13),
           *a1 + 36);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        103LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v8);
    string = 0LL;
    v9 = *((_QWORD *)*a1 + 14);
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 48LL))(v9, &string);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        106LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v10);
    v34 = string;
    v11 = Windows::Internal::String::Initialize((HSTRING *)*a1 + 43, &v34);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        107LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v11);
    v12 = (__int64)*a1;
    if ( (*a1)[32] == 3 )
    {
      v13 = v12 + 336;
      v14 = *(_QWORD *)(v12 + 336);
      *(_QWORD *)(v12 + 336) = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64))*a1 + 14))(
              *((_QWORD *)*a1 + 14),
              &GUID_43c44496_73a7_4b25_b876_1df2708e3e45,
              v13);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          5691LL,
          (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
          (const char *)(unsigned int)v15);
      v16 = *((_QWORD *)*a1 + 42);
      v17 = (__int64 *)(*a1 + 30);
      v18 = *v17;
      *v17 = 0LL;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 400LL))(v16, v17);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          112LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v19);
      v20 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)*a1 + 42) + 136LL))(
              *((_QWORD *)*a1 + 42),
              *a1 + 44);
      if ( v20 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          113LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v20);
    }
    v21 = *((_QWORD *)*a1 + 13);
    v22 = (__int64)(*a1 + 40);
    SafeRelease<IShellItemArray>(v22);
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 72LL))(v21, v22);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        116LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v23);
    v24 = *((_QWORD *)*a1 + 20);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v24 + 48LL))(v24, *a1 + 82);
      if ( v25 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          119LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v25);
      WindowReadyState::SetWindow((__int64)(*a1 + 90), (HWND)(int)(*a1)[82], 0);
    }
    WindowsDeleteString(string);
  }
  catch ( ... )
  {
    *a1[1] = wil::ResultFromCaughtException(v26);
    v28 = (const char *)(unsigned int)*a1[1];
    v32 = (unsigned int)v28;
    if ( (int)v28 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v28);
    return v32;
  }
  return 0LL;
}
