/*
 * XREFs of KiEntropyQueueDpc @ 0x1400C76A0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401AC250 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401AC420 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401AC560 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401AC6A0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterrupt @ 0x1401AF010 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401AFAF0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1401B0080 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401B0610 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401B0BA0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25576, 0LL, 0LL, 0LL, 0);
  return result;
}
