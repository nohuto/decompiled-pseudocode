/*
 * XREFs of _lambda_ebf472f1599809bdbab25f70af63208e_::operator() @ 0x1801F18A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ebf472f1599809bdbab25f70af63208e___::Run @ 0x1801F32B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ebf472f1599809bdbab25f70af63208e___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1801F1FEC (-CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ebf472f1599809bdbab25f70af63208e_::operator()(_QWORD *a1)
{
  __int64 v2; // rax
  __int16 v3; // cx
  int v4; // eax
  wil *v5; // rcx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v11; // [rsp+40h] [rbp+8h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 312LL) + 152LL))(
      *(_QWORD *)(*a1 + 312LL),
      &SRWLock);
    *(_QWORD *)(*a1 + 168LL) = a1[1];
    v2 = *a1;
    if ( (a1[2] & 1) != 0 || !*(_QWORD *)(v2 + 168) )
      v3 = 0;
    else
      v3 = 128;
    *(_WORD *)(v2 + 292) &= ~0x80u;
    *(_WORD *)(v2 + 292) |= v3;
    WindowWrapperBase::CommitImportanceVector(*a1, *(unsigned int *)(*a1 + 292LL));
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 312LL) + 200LL))(
           *(_QWORD *)(*a1 + 312LL),
           (*a1 + 16LL) & -(__int64)(*a1 != 0LL));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1992LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
    v5 = (wil *)SRWLock;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  catch ( ... )
  {
    *(_DWORD *)a1[3] = wil::ResultFromCaughtException(v5);
    v7 = (const char *)*(unsigned int *)a1[3];
    v11 = (unsigned int)v7;
    if ( (int)v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7CD,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        v7);
    return v11;
  }
  return 0LL;
}
