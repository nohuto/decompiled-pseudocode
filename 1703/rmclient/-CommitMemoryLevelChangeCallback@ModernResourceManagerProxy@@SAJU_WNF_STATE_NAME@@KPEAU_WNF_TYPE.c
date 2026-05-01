/*
 * XREFs of ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180001CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@Z @ 0x180001D50 (-OnCommitLevelChangeRoutine@CMemoryManager@System@Windows@@CAXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOA.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceManagerProxy::CommitMemoryLevelChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *a5)
{
  void (__fastcall *v6)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rsi

  if ( a5 )
  {
    RtlAcquireSRWLockExclusive(a4 + 9, a2, a3);
    GetCurrentThreadId();
    v6 = (void (__fastcall *)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *))a4[3];
    *((_DWORD *)a4 + 20) = 0;
    RtlReleaseSRWLockExclusive(a4 + 9);
    if ( v6 )
    {
      if ( v6 == Windows::System::CMemoryManager::OnCommitLevelChangeRoutine )
        Windows::System::CMemoryManager::OnCommitLevelChangeRoutine(a5);
      else
        v6(a5);
    }
  }
  return 0LL;
}
