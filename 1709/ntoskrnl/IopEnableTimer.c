/*
 * XREFs of IopEnableTimer @ 0x1401F5058
 * Callers:
 *     IoStartTimer @ 0x1401F9DC0 (IoStartTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 *     EtwTraceIoTimerEvent @ 0x14027B40C (EtwTraceIoTimerEvent.c)
 */

__int64 __fastcall IopEnableTimer(__int64 a1)
{
  KIRQL v2; // di
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( !*(_WORD *)(a1 + 2) )
  {
    if ( !IopTimerCount )
      KeSetCoalescableTimer(&IopTimer, (LARGE_INTEGER)-10000000LL, 0x3E8u, 0x23u, &IopTimerDpc);
    ++IopTimerCount;
    *(_WORD *)(a1 + 2) = 1;
  }
  KxReleaseSpinLock(&IopTimerLock);
  result = v2;
  __writecr8(v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    return EtwTraceIoTimerEvent(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  return result;
}
