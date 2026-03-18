/*
 * XREFs of IopEnableTimer @ 0x1401EF95C
 * Callers:
 *     IoStartTimer @ 0x1401F4250 (IoStartTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x1400E3510 (KeSetCoalescableTimer.c)
 *     EtwTraceIoTimerEvent @ 0x140253748 (EtwTraceIoTimerEvent.c)
 */

__int64 __fastcall IopEnableTimer(__int64 a1)
{
  KIRQL v2; // di
  int v3; // edx
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( !*(_WORD *)(a1 + 2) )
  {
    v3 = IopTimerCount;
    if ( !IopTimerCount )
    {
      KeSetCoalescableTimer(&IopTimer, (LARGE_INTEGER)-10000000LL, 0x3E8u, 0x23u, &IopTimerDpc);
      v3 = IopTimerCount;
    }
    IopTimerCount = v3 + 1;
    *(_WORD *)(a1 + 2) = 1;
  }
  KxReleaseSpinLock(&IopTimerLock);
  result = v2;
  __writecr8(v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    return EtwTraceIoTimerEvent(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  return result;
}
