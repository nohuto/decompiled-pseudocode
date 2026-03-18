/*
 * XREFs of HalPerformEndOfInterrupt_0 @ 0x140176E10
 * Callers:
 *     KiChainedDispatch @ 0x1401823B0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x140182B50 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140182DA0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140182FF0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140184ED0 (KiApcInterrupt.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140187520 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140187990 (KiIpiInterrupt.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 HalPerformEndOfInterrupt_0()
{
  return HalPerformEndOfInterrupt();
}
