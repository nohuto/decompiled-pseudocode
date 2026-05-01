/*
 * XREFs of _lambda_84226a7d85cdb49867dc6b031ad975a1_::operator() @ 0x1801F08A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_84226a7d85cdb49867dc6b031ad975a1___::Run @ 0x1801F3210 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_84226a7d85cdb49867dc6b031ad975a1___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_84226a7d85cdb49867dc6b031ad975a1_::operator()(_QWORD *a1)
{
  wil *v2; // rcx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v8; // [rsp+40h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 312LL) + 152LL))(
      *(_QWORD *)(*a1 + 312LL),
      &SRWLock);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 144LL))(*a1, *((unsigned int *)a1 + 2));
    v2 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    *(_DWORD *)a1[2] = wil::ResultFromCaughtException(v2);
    v4 = (const char *)*(unsigned int *)a1[2];
    v8 = (unsigned int)v4;
    if ( (int)v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x274,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v4);
    return v8;
  }
  return 0LL;
}
