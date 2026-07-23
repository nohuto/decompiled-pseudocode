/*
 * XREFs of RtlDeleteCriticalSection @ 0x180029D90
 * Callers:
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     RtlDeleteResource @ 0x180029F00 (RtlDeleteResource.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     RtlTraceDatabaseDestroy @ 0x1800F7A40 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029E80 @ 0x180029E80 (sub_180029E80.c)
 *     sub_180029EA4 @ 0x180029EA4 (sub_180029EA4.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800F6A80 @ 0x1800F6A80 (sub_1800F6A80.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *LockSemaphore; // rcx
  NTSTATUS v3; // r14d
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  __int64 v6; // rsi
  LIST_ENTRY *p_ProcessLocksList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rdx
  __int64 v10; // rax

  LockSemaphore = (char *)CriticalSection->LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = ZwClose(LockSemaphore);
  else
    v3 = 0;
  DebugInfo = CriticalSection->DebugInfo;
  if ( (unsigned __int64)&CriticalSection->DebugInfo[-1].Identifier + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = CriticalSection->SpinCount & 0x4000000;
    RtlAcquireSRWLockExclusive(&stru_18015D258);
    p_ProcessLocksList = &DebugInfo->ProcessLocksList;
    Flink = DebugInfo->ProcessLocksList.Flink;
    if ( Flink )
    {
      Blink = DebugInfo->ProcessLocksList.Blink;
      if ( Flink->Blink != p_ProcessLocksList || Blink->Flink != p_ProcessLocksList )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
    RtlReleaseSRWLockExclusive(&stru_18015D258);
    v10 = sub_180029E80(DebugInfo->CreatorBackTraceIndex, DebugInfo->CreatorBackTraceIndexHigh);
    if ( v10 && qword_18015AA50 )
      sub_1800F6A80(qword_18015AA50, v10);
    memset(DebugInfo, 0, sizeof(_RTL_CRITICAL_SECTION_DEBUG));
    if ( !v6 )
      sub_180029EA4((PSLIST_ENTRY)DebugInfo);
  }
  memset(CriticalSection, 0, sizeof(_RTL_CRITICAL_SECTION));
  return v3;
}
