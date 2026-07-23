/*
 * XREFs of KiBlockAndActivateUmsThread @ 0x1402078A0
 * Callers:
 *     KiSwapToUmsThread @ 0x1406ADA00 (KiSwapToUmsThread.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall KiBlockAndActivateUmsThread(__int64 a1, struct _KQUEUE *a2, _LIST_ENTRY *a3, struct _KEVENT *a4)
{
  PLIST_ENTRY EntryArray; // [rsp+50h] [rbp+18h] BYREF

  EntryArray = a3;
  KeSetEvent(a4 + 2, 1, 1u);
  KiLeaveGuardedRegionUnsafe(a1);
  LOBYTE(a1) = KeGetCurrentPrcb()->NextThread != 0LL;
  KeRemoveQueueEx(a2, 0, 0, 0LL, &EntryArray, 1u);
  return a1;
}
