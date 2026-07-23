/*
 * XREFs of RtlDeleteCriticalSection @ 0x180061480
 * Callers:
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlDeleteResource @ 0x180061430 (RtlDeleteResource.c)
 *     RtlTraceDatabaseDestroy @ 0x1800FAF70 (RtlTraceDatabaseDestroy.c)
 *     _ResFindClose @ 0x18010FAF0 (_ResFindClose.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpGetStackTraceAddressEx @ 0x180061570 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x180061594 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlStdReleaseStackTrace @ 0x1800FA3C0 (RtlStdReleaseStackTrace.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *LockSemaphore; // rcx
  NTSTATUS v3; // r14d
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rbx
  __int64 v6; // rsi
  _LIST_ENTRY *p_ProcessLocksList; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 StackTraceAddress; // rax

  LockSemaphore = (char *)CriticalSection->LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = NtClose(LockSemaphore);
  else
    v3 = 0;
  DebugInfo = CriticalSection->DebugInfo;
  if ( (unsigned __int64)&CriticalSection->DebugInfo[-1].SpareUSHORT + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = CriticalSection->SpinCount & 0x4000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
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
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    StackTraceAddress = RtlpGetStackTraceAddressEx(
                          DebugInfo->CreatorBackTraceIndex,
                          DebugInfo->CreatorBackTraceIndexHigh);
    if ( StackTraceAddress && RtlpStackTraceDatabase )
      RtlStdReleaseStackTrace(RtlpStackTraceDatabase, StackTraceAddress);
    memset(DebugInfo, 0, sizeof(_RTL_CRITICAL_SECTION_DEBUG));
    if ( !v6 )
      RtlpFreeDebugInfo(DebugInfo);
  }
  memset(CriticalSection, 0, sizeof(_RTL_CRITICAL_SECTION));
  return v3;
}
