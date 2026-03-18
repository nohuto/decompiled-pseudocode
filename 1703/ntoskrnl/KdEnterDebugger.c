/*
 * XREFs of KdEnterDebugger @ 0x140789A24
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140168660 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1401FC184 (KdpReport.c)
 *     KdSendTraceData @ 0x140789C3C (KdSendTraceData.c)
 *     KdpCommandString @ 0x14078BC34 (KdpCommandString.c)
 *     KdpPrint @ 0x14078BCF4 (KdpPrint.c)
 *     KdpPrompt @ 0x14078BE68 (KdpPrompt.c)
 *     KdpSymbol @ 0x14078BFD0 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x14078CB8C (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x14078D380 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x14078D4BC (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14078D6B8 (KdpReadRemoteFile.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14003CBA4 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeFreezeExecution @ 0x1402030B4 (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140764CA0 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // di
  bool v4; // si
  struct _KPRCB *CurrentPrcb; // r8
  __int64 Number; // rdx
  unsigned int *v7; // rdx
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // rax
  bool result; // al

  v2 = 0;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(3);
  if ( a1 )
  {
    KdTimerStop = __rdtsc();
    KdTimerDifference = KdTimerStop - KdTimerStart;
  }
  else
  {
    KdTimerStop = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v4 = KeFreezeExecution();
  off_14033B5D8[0]();
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v7 = (unsigned int *)KdLogBuffer[Number];
  if ( v7 )
  {
    v8 = (unsigned __int64 *)&v7[4 * *v7 + 4];
    v9 = __rdtsc();
    *v8 = ((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9;
    v8[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1LL;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdEnteredDebugger = 1;
  KdDebuggerEnteredWithoutLock += v2;
  return result;
}
