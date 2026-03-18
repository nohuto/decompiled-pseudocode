/*
 * XREFs of IopDisableTimer @ 0x14023236C
 * Callers:
 *     IoStopTimer @ 0x140236F70 (IoStopTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceIoTimerEvent @ 0x1402AED2C (EtwTraceIoTimerEvent.c)
 */

BOOLEAN __fastcall IopDisableTimer(__int64 a1)
{
  BOOL v2; // ebx
  KIRQL v3; // si
  BOOLEAN result; // al

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( *(_WORD *)(a1 + 2) )
  {
    *(_WORD *)(a1 + 2) = 0;
    v2 = --IopTimerCount == 0;
  }
  KxReleaseSpinLock(&IopTimerLock);
  result = v3;
  __writecr8(v3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    result = EtwTraceIoTimerEvent(3934LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  if ( v2 )
    return KeCancelTimer(&IopTimer);
  return result;
}
