/*
 * XREFs of KiEntropyQueueDpc @ 0x14002F740
 * Callers:
 *     KiScanInterruptObjectList @ 0x140182B80 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140182D50 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140182E90 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140182FD0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterrupt @ 0x140185950 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140186420 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401869B0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140186F40 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401874D0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25896, 0);
  return result;
}
