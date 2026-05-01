/*
 * XREFs of _lambda_6d00836a8b084132a7e1fa9e799cd88e_::operator() @ 0x1801F04D0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6d00836a8b084132a7e1fa9e799cd88e___::Run @ 0x1801F3170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6d00836a8b084132a7e1fa9e799cd88e___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1801F1FEC (-CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

__int64 __fastcall lambda_6d00836a8b084132a7e1fa9e799cd88e_::operator()(_QWORD *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  wil *v4; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+40h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 312LL) + 152LL))(
      *(_QWORD *)(*a1 + 312LL),
      &SRWLock);
    v2 = *(_DWORD *)(*a1 + 232LL) & 0x40;
    *(_DWORD *)(*a1 + 232LL) &= ~0x40u;
    v3 = *a1;
    if ( (*(_WORD *)(*a1 + 292LL) & 0xC0) == 0xC0 && (*(_DWORD *)(v3 + 232) & 0x100) == 0 )
    {
      *(_WORD *)(v3 + 292) = *(_WORD *)(*a1 + 292LL) & 0xFFBF;
      WindowWrapperBase::CommitImportanceVector(*a1, *(unsigned int *)(*a1 + 292LL));
    }
    v4 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v2 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 312LL) + 192LL))(*(_QWORD *)(*a1 + 312LL));
  }
  catch ( ... )
  {
    *(_DWORD *)a1[1] = wil::ResultFromCaughtException(v4);
    v6 = (const char *)*(unsigned int *)a1[1];
    v10 = (unsigned int)v6;
    if ( (int)v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x625,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v6);
    return v10;
  }
  return 0LL;
}
