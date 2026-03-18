/*
 * XREFs of KdEnterDebugger @ 0x140796C6C
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x14015D520 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x140201E98 (KdpReport.c)
 *     KdSendTraceData @ 0x140796E7C (KdSendTraceData.c)
 *     KdpCommandString @ 0x140798E58 (KdpCommandString.c)
 *     KdpPrint @ 0x140798F18 (KdpPrint.c)
 *     KdpPrompt @ 0x14079908C (KdpPrompt.c)
 *     KdpSymbol @ 0x1407991F4 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x140799DAC (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x14079A5AC (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x14079A6E8 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x14079A8E4 (KdpReadRemoteFile.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1400F8F48 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1407A69D0 (VfNotifyVerifierOfEvent.c)
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
    VfNotifyVerifierOfEvent(3LL);
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
  off_140353608[0]();
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
    v8[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdEnteredDebugger = 1;
  KdDebuggerEnteredWithoutLock += v2;
  return result;
}
