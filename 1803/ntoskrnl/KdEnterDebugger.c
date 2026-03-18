/*
 * XREFs of KdEnterDebugger @ 0x140803C74
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1401872C0 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x14023EFEC (KdpReport.c)
 *     KdSendTraceData @ 0x140803EE0 (KdSendTraceData.c)
 *     KdpCommandString @ 0x140805F38 (KdpCommandString.c)
 *     KdpPrint @ 0x140805FF8 (KdpPrint.c)
 *     KdpPrompt @ 0x14080616C (KdpPrompt.c)
 *     KdpSymbol @ 0x1408062D4 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x140806ED4 (KdpSetOwedBreakpoints.c)
 *     KdpCloseRemoteFile @ 0x1408076C8 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x140807804 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140807A00 (KdpReadRemoteFile.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1400D2C7C (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeSaveSupervisorState @ 0x1402454FC (KeSaveSupervisorState.c)
 *     KeFreezeExecution @ 0x140246F28 (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x140813B50 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 ExtendedSupervisorState; // rcx
  __int64 Number; // rdi
  unsigned int *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
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
  off_1403989A8[0]();
  CurrentPrcb = KeGetCurrentPrcb();
  ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
  Number = CurrentPrcb->Number;
  qword_1403EAD38 = MEMORY[0xFFFFF780000005F0] & ~KdIgnoredSavingSupervisorXStateFeatures;
  KeSaveSupervisorState(ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] & ~KdIgnoredSavingSupervisorXStateFeatures);
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v8 = (unsigned int *)KdLogBuffer[Number];
  if ( v8 )
  {
    v9 = (unsigned __int64 *)&v8[4 * *v8 + 4];
    v10 = __rdtsc();
    *v9 = ((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10;
    v9[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdDebuggerEnteredWithoutLock += v2;
  KdEnteredDebugger = 1;
  return result;
}
