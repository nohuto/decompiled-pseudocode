/*
 * XREFs of KdExitDebugger @ 0x140803DB4
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1401872C0 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x14023EFEC (KdpReport.c)
 *     KdSendTraceData @ 0x140803EE0 (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x140804F74 (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x140805F38 (KdpCommandString.c)
 *     KdpPrint @ 0x140805FF8 (KdpPrint.c)
 *     KdpPrompt @ 0x14080616C (KdpPrompt.c)
 *     KdpSymbol @ 0x1408062D4 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x140806ED4 (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x1408076C8 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140807804 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140807A00 (KdpReadRemoteFile.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     VfIsVerifierEnabled @ 0x1400D2C7C (VfIsVerifierEnabled.c)
 *     ExQueueDebuggerWorker @ 0x140181D18 (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeRestoreSupervisorState @ 0x1402454C0 (KeRestoreSupervisorState.c)
 *     KeThawExecution @ 0x14024738C (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140813B50 (VfNotifyVerifierOfEvent.c)
 */

__int64 __fastcall KdExitDebugger(char a1)
{
  __int64 v1; // rax
  _DWORD *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 result; // rax

  KdEnteredDebugger = 0;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)KdLogBuffer[v1];
  if ( v3 )
  {
    v4 = (unsigned int)*v3;
    v5 = __rdtsc();
    *(_QWORD *)&v3[4 * v4 + 6] = v3[4 * v4 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u | ((((unsigned __int64)HIDWORD(v5) << 32) | (unsigned int)v5) - *(_QWORD *)&v3[4 * v4 + 4]) & 0xFFFFFFFFFFFFFFF1uLL;
    if ( (_DWORD)v4 == 254 )
      *v3 = 0;
    else
      *v3 = v4 + 1;
  }
  off_140398998[0]();
  KeRestoreSupervisorState((__int64)KeGetCurrentPrcb()->ExtendedSupervisorState, qword_1403EAD38);
  qword_1403EAD38 = 0LL;
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
  result = VfIsVerifierEnabled();
  if ( (_DWORD)result )
    return VfNotifyVerifierOfEvent(4LL);
  return result;
}
