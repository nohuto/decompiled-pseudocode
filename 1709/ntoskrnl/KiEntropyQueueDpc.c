/*
 * XREFs of KiEntropyQueueDpc @ 0x140127180
 * Callers:
 *     KiScanInterruptObjectList @ 0x140182600 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401827D0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182910 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140182A50 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25576, 0LL, 0LL, 0LL, 0);
  return result;
}
