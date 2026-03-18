/*
 * XREFs of KdExitDebugger @ 0x140789B30
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x140168660 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x1401FC184 (KdpReport.c)
 *     KdSendTraceData @ 0x140789C3C (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x14078AC78 (KdpSendWaitContinue.c)
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
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     ExQueueDebuggerWorker @ 0x14016367C (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeThawExecution @ 0x1402034E8 (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140764CA0 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall KdExitDebugger(char a1)
{
  __int64 v1; // rax
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax

  KdEnteredDebugger = 0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    *(_QWORD *)&v3[4 * v4 + 6] = v3[4 * v4 + 6] & 4 | (2LL * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1 | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_14033B5C8[0]();
  KeThawExecution(a1);
  if ( KdTimerStop )
    KdTimerStart = __rdtsc();
  else
    KdTimerStart = 0LL;
  if ( !PoHiberInProgress && (KiBugCheckActive & 3) == 0 )
  {
    if ( !_InterlockedExchange(&KdpTimeSlipPending, 2) )
      KeInsertQueueDpc(&KdpTimeSlipDpc, 0LL, 0LL);
    ExQueueDebuggerWorker();
  }
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(4);
}
