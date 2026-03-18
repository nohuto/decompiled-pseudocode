/*
 * XREFs of KdExitDebugger @ 0x140796D74
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x14015D520 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x140201E98 (KdpReport.c)
 *     KdSendTraceData @ 0x140796E7C (KdSendTraceData.c)
 *     KdpSendWaitContinue @ 0x140797EA0 (KdpSendWaitContinue.c)
 *     KdpCommandString @ 0x140798E58 (KdpCommandString.c)
 *     KdpPrint @ 0x140798F18 (KdpPrint.c)
 *     KdpPrompt @ 0x14079908C (KdpPrompt.c)
 *     KdpSymbol @ 0x1407991F4 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x140799DAC (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x14079A5AC (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x14079A6E8 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14079A8E4 (KdpReadRemoteFile.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     VfIsVerifierEnabled @ 0x1400F8F48 (VfIsVerifierEnabled.c)
 *     ExQueueDebuggerWorker @ 0x1401538D0 (ExQueueDebuggerWorker.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeThawExecution @ 0x1402097E0 (KeThawExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1407A69D0 (VfNotifyVerifierOfEvent.c)
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
  off_1403535F8[0]();
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
