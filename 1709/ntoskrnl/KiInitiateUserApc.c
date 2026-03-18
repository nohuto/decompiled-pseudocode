/*
 * XREFs of KiInitiateUserApc @ 0x140185310
 * Callers:
 *     NtContinue @ 0x1401819B0 (NtContinue.c)
 *     NtRaiseException @ 0x140181C50 (NtRaiseException.c)
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
 *     KiBoundFault @ 0x14018C840 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14018CD00 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14018F800 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140190000 (KiVirtualizationException.c)
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140191DC0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140192080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140192340 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 */

void __fastcall KiInitiateUserApc()
{
  __int64 v0; // rbp
  __int64 v1; // [rsp+0h] [rbp-138h] BYREF

  KiDeliverApc(1, (int)&v1, (_KTRAP_FRAME *)(v0 - 128));
}
