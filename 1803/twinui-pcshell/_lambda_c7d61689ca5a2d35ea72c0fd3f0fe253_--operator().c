/*
 * XREFs of _lambda_c7d61689ca5a2d35ea72c0fd3f0fe253_::operator() @ 0x1801F1120
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7d61689ca5a2d35ea72c0fd3f0fe253___::Run @ 0x1801F3260 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c7d61689ca5a2d35ea72c0fd3f0fe253___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c7d61689ca5a2d35ea72c0fd3f0fe253_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  wil *v4; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    *a1[1] = 0;
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)*a1 + 39) + 160LL))(*((_QWORD *)*a1 + 39), &SRWLock);
    v2 = *((_QWORD *)*a1 + 20);
    if ( v2 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v2 + 56LL))(v2, a1[1]);
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          880LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v3);
    }
    v4 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
  }
  catch ( ... )
  {
    *a1[2] = wil::ResultFromCaughtException(v4);
    v6 = (const char *)(unsigned int)*a1[2];
    v10 = (unsigned int)v6;
    if ( (int)v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x376,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v6);
    return v10;
  }
  return 0LL;
}
