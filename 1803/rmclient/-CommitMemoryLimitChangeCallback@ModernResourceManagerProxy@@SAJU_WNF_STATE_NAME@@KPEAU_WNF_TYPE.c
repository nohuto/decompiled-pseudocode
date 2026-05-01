/*
 * XREFs of ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180001C50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180001CD0 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceManagerProxy::CommitMemoryLimitChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        unsigned __int64 *a5)
{
  void (__fastcall *v6)(unsigned __int64, unsigned __int64); // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  if ( a5 )
  {
    RtlAcquireSRWLockExclusive(a4 + 9, a2, a3);
    GetCurrentThreadId();
    v6 = (void (__fastcall *)(unsigned __int64, unsigned __int64))a4[4];
    *((_DWORD *)a4 + 20) = 0;
    RtlReleaseSRWLockExclusive(a4 + 9);
    if ( v6 )
    {
      v7 = a5[1];
      v8 = *a5;
      if ( v6 == Windows::System::CMemoryManager::OnCommitLimitChangeRoutine )
        Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(v8, v7);
      else
        v6(v8, v7);
    }
  }
  return 0LL;
}
