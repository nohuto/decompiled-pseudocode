/*
 * XREFs of KiCopyCounters @ 0x140246210
 * Callers:
 *     NtContinue @ 0x1401AB600 (NtContinue.c)
 *     NtRaiseException @ 0x1401AB8A0 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1401AC000 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401AC7A0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401AC9F0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401ACC40 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401ACE90 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401AD0D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1401AEAF0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401AF5C0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401AFAF0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401B0080 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401B0610 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401B0BA0 (KiVmbusInterrupt3.c)
 *     KiDpcInterrupt @ 0x1401B1140 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1401B15B0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1401B2630 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1401B35C0 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x1401B5AC0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401B6540 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1401B6A00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 *     KiMcheckAbort @ 0x1401B8F80 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x1401B9500 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x1401B9D00 (KiVirtualizationException.c)
 *     KiSystemCall64 @ 0x1401BB100 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1401BBAC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401BBD80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401BC040 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiCopyCountersWorker @ 0x1407425C8 (KiCopyCountersWorker.c)
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
