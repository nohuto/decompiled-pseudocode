/*
 * XREFs of _lambda_a7914316c04637f4e251a3ddd59c2e1b_::operator() @ 0x1801EBA60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a7914316c04637f4e251a3ddd59c2e1b___::Run @ 0x1801ED7E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a7914316c04637f4e251a3ddd59c2e1b___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall lambda_a7914316c04637f4e251a3ddd59c2e1b_::operator()(_DWORD **a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  wil *v16; // rcx
  const char *v18; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v22; // [rsp+40h] [rbp+8h]

  try
  {
    *((_BYTE *)*a1 + 64) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 56LL))(
           *((_QWORD *)*a1 + 7),
           *((_QWORD *)*a1 + 9));
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        440LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 72LL))(
           *((_QWORD *)*a1 + 7),
           *((_QWORD *)*a1 + 10));
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        441LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 88LL))(
           *((_QWORD *)*a1 + 7),
           *((_QWORD *)*a1 + 11));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        442LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 104LL))(
           *((_QWORD *)*a1 + 7),
           *((_QWORD *)*a1 + 12));
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        443LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 120LL))(
           *((_QWORD *)*a1 + 7),
           *((_QWORD *)*a1 + 13));
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        444LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 136LL))(
           *((_QWORD *)*a1 + 7),
           *((_QWORD *)*a1 + 14));
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        445LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 200LL))(
           *((_QWORD *)*a1 + 7),
           *((_QWORD *)*a1 + 15));
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        446LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 264LL))(
           *((_QWORD *)*a1 + 7),
           *((_QWORD *)*a1 + 16));
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        447LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 280LL))(
            *((_QWORD *)*a1 + 7),
            *((_QWORD *)*a1 + 17));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        448LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 296LL))(
            *((_QWORD *)*a1 + 7),
            *((_QWORD *)*a1 + 18));
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        449LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 312LL))(
            *((_QWORD *)*a1 + 7),
            *((_QWORD *)*a1 + 19));
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        450LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 328LL))(
            *((_QWORD *)*a1 + 7),
            *((_QWORD *)*a1 + 20));
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        451LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 376LL))(
            *((_QWORD *)*a1 + 7),
            *((_QWORD *)*a1 + 21));
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        452LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v14);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 7) + 152LL))(
            *((_QWORD *)*a1 + 7),
            *((_QWORD *)*a1 + 22));
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        453LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v15);
    SafeRelease<IShellItemArray>(*a1 + 14);
    *((_BYTE *)*a1 + 256) = 0;
  }
  catch ( ... )
  {
    *a1[1] = wil::ResultFromCaughtException(v16);
    v18 = (const char *)(unsigned int)*a1[1];
    v22 = (unsigned int)v18;
    if ( (int)v18 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CD,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v18);
    return v22;
  }
  return 0LL;
}
