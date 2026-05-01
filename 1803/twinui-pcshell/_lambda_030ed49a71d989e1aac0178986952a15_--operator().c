/*
 * XREFs of _lambda_030ed49a71d989e1aac0178986952a15_::operator() @ 0x1801E9F18
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_030ed49a71d989e1aac0178986952a15___::Run @ 0x1801ED720 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_030ed49a71d989e1aac0178986952a15___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_030ed49a71d989e1aac0178986952a15_::operator()(_DWORD **a1)
{
  int v1; // eax
  wil *v2; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v8; // [rsp+40h] [rbp+8h]

  try
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 35) + 208LL))(*((_QWORD *)*a1 + 35));
    v2 = retaddr;
    if ( v1 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        898LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v1);
  }
  catch ( ... )
  {
    *a1[1] = wil::ResultFromCaughtException(v2);
    v4 = (const char *)(unsigned int)*a1[1];
    v8 = (unsigned int)v4;
    if ( (int)v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x387,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v4);
    return v8;
  }
  return 0LL;
}
