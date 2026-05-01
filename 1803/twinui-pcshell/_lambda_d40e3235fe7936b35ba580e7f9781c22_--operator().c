/*
 * XREFs of _lambda_d40e3235fe7936b35ba580e7f9781c22_::operator() @ 0x1801EBE0C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d40e3235fe7936b35ba580e7f9781c22___::Run @ 0x1801ED7F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d40e3235fe7936b35ba580e7f9781c22___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall lambda_d40e3235fe7936b35ba580e7f9781c22_::operator()(_DWORD **a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wil *v7; // rcx
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v13; // [rsp+40h] [rbp+8h]

  try
  {
    *((_BYTE *)*a1 + 200) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 24) + 56LL))(
           *((_QWORD *)*a1 + 24),
           *((_QWORD *)*a1 + 26));
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        812LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 24) + 72LL))(
           *((_QWORD *)*a1 + 24),
           *((_QWORD *)*a1 + 27));
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        813LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 24) + 88LL))(
           *((_QWORD *)*a1 + 24),
           *((_QWORD *)*a1 + 28));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        814LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 24) + 104LL))(
           *((_QWORD *)*a1 + 24),
           *((_QWORD *)*a1 + 29));
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        815LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 24) + 168LL))(
           *((_QWORD *)*a1 + 24),
           *((_QWORD *)*a1 + 30));
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        816LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6);
    SafeRelease<IShellItemArray>(*a1 + 48);
    *((_BYTE *)*a1 + 256) = 0;
  }
  catch ( ... )
  {
    *a1[1] = wil::ResultFromCaughtException(v7);
    v9 = (const char *)(unsigned int)*a1[1];
    v13 = (unsigned int)v9;
    if ( (int)v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x338,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v9);
    return v13;
  }
  return 0LL;
}
