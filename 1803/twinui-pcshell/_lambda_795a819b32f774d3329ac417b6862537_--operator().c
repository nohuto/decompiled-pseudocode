/*
 * XREFs of _lambda_795a819b32f774d3329ac417b6862537_::operator() @ 0x1801F0698
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_795a819b32f774d3329ac417b6862537___::Run @ 0x1801F31F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_795a819b32f774d3329ac417b6862537___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1801F1FEC (-CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

__int64 __fastcall lambda_795a819b32f774d3329ac417b6862537_::operator()(_QWORD *a1)
{
  int v2; // esi
  unsigned int v3; // edi
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
    *(_DWORD *)(*a1 + 232LL) |= 0xC0u;
    if ( (*(_WORD *)(*a1 + 292LL) & 0xC0) != 0xC0 )
    {
      *(_WORD *)(*a1 + 292LL) |= 0x40u;
      *(_WORD *)(*a1 + 292LL) |= 0x80u;
      WindowWrapperBase::CommitImportanceVector(*a1, *(unsigned int *)(*a1 + 292LL));
    }
    v3 = 0;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    LOBYTE(v3) = v2 != 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 312LL) + 184LL))(*(_QWORD *)(*a1 + 312LL), v3);
  }
  catch ( ... )
  {
    *(_DWORD *)a1[1] = wil::ResultFromCaughtException(v4);
    v6 = (const char *)*(unsigned int *)a1[1];
    v10 = (unsigned int)v6;
    if ( (int)v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F0,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v6);
    return v10;
  }
  return 0LL;
}
