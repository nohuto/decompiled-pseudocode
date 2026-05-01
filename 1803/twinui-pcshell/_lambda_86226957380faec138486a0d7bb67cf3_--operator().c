/*
 * XREFs of _lambda_86226957380faec138486a0d7bb67cf3_::operator() @ 0x1801F0C08
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_86226957380faec138486a0d7bb67cf3___::Run @ 0x1801F3230 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_86226957380faec138486a0d7bb67cf3___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1801F1FEC (-CommitImportanceVector@WindowWrapperBase@@AEAAXT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F2D1C (-PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerI.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall lambda_86226957380faec138486a0d7bb67cf3_::operator()(unsigned int *a1)
{
  int v2; // r14d
  int v3; // esi
  HWND v4; // rdi
  int v5; // ecx
  __int64 v7; // rcx
  int v8; // r8d
  __int16 v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1[2];
  v3 = v2;
  if ( v2 == 5 )
    v3 = 4;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*(_QWORD *)a1 + 312LL) + 152LL))(
    *(_QWORD *)(*(_QWORD *)a1 + 312LL),
    &SRWLock);
  v4 = (HWND)*(int *)(*(_QWORD *)a1 + 328LL);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 464LL);
  if ( v3 != v5 )
  {
    if ( !v5 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D0,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x8007139FLL);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      return 2147947423LL;
    }
    *(_DWORD *)(*(_QWORD *)a1 + 464LL) = v3;
    v7 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 352LL) & 4) == 0 )
    {
      if ( (unsigned int)(*(_DWORD *)(v7 + 464) - 4) > 1 )
      {
        v8 = 2;
        v9 = 4;
      }
      else
      {
        v8 = 4;
        v9 = 8;
      }
      if ( v8 != ((*(unsigned __int16 *)(v7 + 292) >> 1) & 7) )
      {
        *(_WORD *)(v7 + 292) = v9 | *(_WORD *)(v7 + 292) & 0xFFF1;
        WindowWrapperBase::CommitImportanceVector(*(_QWORD *)a1, *(unsigned int *)(*(_QWORD *)a1 + 292LL));
        v7 = *(_QWORD *)a1;
      }
    }
    WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(v7, a1[2]);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v2 == 5 && v4 )
    SetForegroundWindow(v4);
  return 0LL;
}
