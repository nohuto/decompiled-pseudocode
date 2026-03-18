/*
 * XREFs of KeWakeProcessor @ 0x140207510
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140187990 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x14018BDC0 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14018F280 (KiMcheckAbort.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14017B290 (KeFlushCurrentTbImmediately.c)
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  _InterlockedAnd64(
    &qword_14036AAE8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
  return KeFlushCurrentTbImmediately();
}
