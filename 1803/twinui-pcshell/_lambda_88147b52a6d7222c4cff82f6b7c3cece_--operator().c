/*
 * XREFs of _lambda_88147b52a6d7222c4cff82f6b7c3cece_::operator() @ 0x1801EB700
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88147b52a6d7222c4cff82f6b7c3cece___::Run @ 0x1801ED7A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88147b52a6d7222c4cff82f6b7c3cece___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_88147b52a6d7222c4cff82f6b7c3cece_::operator()(__int64 a1)
{
  int v1; // eax
  wil *v2; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v8; // [rsp+40h] [rbp+8h]

  try
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 280LL) + 80LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 280LL),
           *(_QWORD *)(a1 + 8));
    v2 = retaddr;
    if ( v1 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        580LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v1);
  }
  catch ( ... )
  {
    **(_DWORD **)(a1 + 16) = wil::ResultFromCaughtException(v2);
    v4 = (const char *)**(unsigned int **)(a1 + 16);
    v8 = (unsigned int)v4;
    if ( (int)v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x249,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        v4);
    return v8;
  }
  return 0LL;
}
