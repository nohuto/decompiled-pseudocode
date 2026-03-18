/*
 * XREFs of KiCopyCounters @ 0x1402085E0
 * Callers:
 *     NtContinue @ 0x1401819B0 (NtContinue.c)
 *     NtRaiseException @ 0x140181C50 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401820A0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401823B0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140182B50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140182DA0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140182FF0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140183240 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140183480 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140184ED0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x140187520 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140187990 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401889D0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140189960 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x14018BDC0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14018C840 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018CD00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14018F280 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14018F800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140190000 (KiVirtualizationException.c)
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140192080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140192340 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiCopyCountersWorker @ 0x1406D8898 (KiCopyCountersWorker.c)
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
