/*
 * XREFs of RtlDeleteCriticalSection @ 0x180008D10
 * Callers:
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     RtlDeleteResource @ 0x180008CC0 (RtlDeleteResource.c)
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlTraceDatabaseDestroy @ 0x1800F9A60 (RtlTraceDatabaseDestroy.c)
 *     sub_18010CAF8 @ 0x18010CAF8 (sub_18010CAF8.c)
 * Callees:
 *     sub_180008E00 @ 0x180008E00 (sub_180008E00.c)
 *     sub_180008E24 @ 0x180008E24 (sub_180008E24.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F8F80 @ 0x1800F8F80 (sub_1800F8F80.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *LockSemaphore; // rcx
  NTSTATUS v3; // r14d
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rbx
  __int64 v6; // rsi
  LIST_ENTRY *p_ProcessLocksList; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
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
    RtlAcquireSRWLockExclusive(&stru_18015C1F8);
    p_ProcessLocksList = &DebugInfo->ProcessLocksList;
    if ( DebugInfo->ProcessLocksList.Flink )
    {
      Flink = p_ProcessLocksList->Flink;
      Blink = DebugInfo->ProcessLocksList.Blink;
      if ( p_ProcessLocksList->Flink->Blink != p_ProcessLocksList || Blink->Flink != p_ProcessLocksList )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
    RtlReleaseSRWLockExclusive(&stru_18015C1F8);
    v10 = sub_180008E00(DebugInfo->CreatorBackTraceIndex, DebugInfo->CreatorBackTraceIndexHigh);
    if ( v10 && qword_180159A08 )
      sub_1800F8F80(qword_180159A08, v10);
    memset(DebugInfo, 0, sizeof(_RTL_CRITICAL_SECTION_DEBUG));
    if ( !v6 )
      sub_180008E24((PSLIST_ENTRY)DebugInfo);
  }
  memset(CriticalSection, 0, sizeof(_RTL_CRITICAL_SECTION));
  return v3;
}
