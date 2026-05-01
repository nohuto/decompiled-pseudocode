/*
 * XREFs of _lambda_65aa065c5924fde239f972953d032db4_::operator() @ 0x1801F0410
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65aa065c5924fde239f972953d032db4___::Run @ 0x1801F3160 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_65aa065c5924fde239f972953d032db4___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_65aa065c5924fde239f972953d032db4_::operator()(_DWORD **a1)
{
  int v2; // ecx
  wil *v3; // rcx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)*a1 + 39) + 152LL))(*((_QWORD *)*a1 + 39), &SRWLock);
    v2 = *((_DWORD *)a1 + 2);
    if ( v2 != (*a1)[75] )
      (*a1)[75] = v2;
    v3 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    *a1[2] = wil::ResultFromCaughtException(v3);
    v5 = (const char *)(unsigned int)*a1[2];
    v9 = (unsigned int)v5;
    if ( (int)v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x706,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v5);
    return v9;
  }
  return 0LL;
}
