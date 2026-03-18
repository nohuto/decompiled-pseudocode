/*
 * XREFs of KiCopyCounters @ 0x140202010
 * Callers:
 *     NtContinue @ 0x140181F30 (NtContinue.c)
 *     NtRaiseException @ 0x1401821D0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x140182620 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140182930 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401830D0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140183320 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140183570 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401837C0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183A00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140185430 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x140185950 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x140185EF0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140186420 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401869B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140186F40 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401874D0 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140187A70 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140187EE0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x140188ED0 (KxStartUserThread.c)
 *     KiNmiInterruptStart @ 0x14018C080 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14018CB00 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018CFC0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14018E8C0 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14018F540 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14018FAC0 (KxMcheckAlternateReturn.c)
 *     KiSystemCall64 @ 0x140191240 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140191C00 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140191EC0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140192180 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiCopyCountersWorker @ 0x1406AD448 (KiCopyCountersWorker.c)
 */

__int64 __fastcall KiCopyCounters(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi
  int v5; // eax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 360);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  do
  {
    v4 = *(_QWORD *)(a1 + 72);
    _enable();
    v5 = KiCopyCountersWorker(a1, v2);
    _disable();
  }
  while ( !v5 && v4 != *(_QWORD *)(a1 + 72) );
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
