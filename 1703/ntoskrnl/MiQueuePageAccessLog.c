/*
 * XREFs of MiQueuePageAccessLog @ 0x140006E9C
 * Callers:
 *     MiReturnCcAccessLog @ 0x140006794 (MiReturnCcAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x14013F820 (MiEmptyAccessLogs.c)
 *     MiGetCcAccessLog @ 0x140423E34 (MiGetCcAccessLog.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x14005F1B8 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rdx
  unsigned int Alignment_low; // ebx
  int v4; // ebx

  *((_QWORD *)&ListEntry[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&ListEntry->Next + 3) = dword_140382C10;
  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140382BE8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_14036DC10, 0x64u);
    v4 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
    if ( Alignment_low >= 8 && !stru_140382BD0.Header.SignalState )
      KeSetEvent(&stru_140382BD0, 0, 0);
    v4 = 1;
  }
  ExReleaseRundownProtection(&RunRef);
  if ( !v4 )
  {
LABEL_9:
    LOBYTE(v2) = 1;
    MmFreeAccessPfnBuffer(ListEntry, v2);
  }
}
