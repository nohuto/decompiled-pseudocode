/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efacefe1f9a132f9192ecba0e8d88571___::Run @ 0x1801372F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efacefe1f9a132f9192ecba0e8d88571___::Run(
        __int64 a1)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 120LL) + 224LL))(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL));
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 204LL);
  ReleaseSRWLockExclusive(v3);
}
