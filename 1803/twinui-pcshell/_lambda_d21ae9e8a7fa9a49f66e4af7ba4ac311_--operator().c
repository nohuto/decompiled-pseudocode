/*
 * XREFs of _lambda_d21ae9e8a7fa9a49f66e4af7ba4ac311_::operator() @ 0x1801F1218
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d21ae9e8a7fa9a49f66e4af7ba4ac311___::Run @ 0x1801F3270 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d21ae9e8a7fa9a49f66e4af7ba4ac311___--Run.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180087644 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_d21ae9e8a7fa9a49f66e4af7ba4ac311_::operator()(HSTRING *a1)
{
  int v2; // eax
  int v3; // eax
  wil *v4; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h]

  try
  {
    v2 = Windows::Internal::String::Initialize((HSTRING *)*a1 + 38, a1 + 1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1821LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, _QWORD))(**((_QWORD **)*a1 + 13) + 144LL))(
           *((_QWORD *)*a1 + 13),
           a1[1],
           0LL);
    v4 = retaddr;
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1822LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3);
  }
  catch ( ... )
  {
    *(_DWORD *)a1[2] = wil::ResultFromCaughtException(v4);
    v6 = (const char *)*(_DWORD *)a1[2];
    v10 = (unsigned int)v6;
    if ( (int)v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x723,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v6);
    return v10;
  }
  return 0LL;
}
