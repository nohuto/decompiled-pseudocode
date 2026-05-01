/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11368385320830d8a241e2fe32d21e6b___::Run @ 0x18006E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11368385320830d8a241e2fe32d21e6b___::Run(
        __int64 a1)
{
  int v2; // ebx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 128LL) + 80LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 32) + 128LL),
           *(_QWORD *)(a1 + 32) + 160LL);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x50A,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v3);
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 192LL))(*(_QWORD *)(a1 + 32));
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v4);
}
