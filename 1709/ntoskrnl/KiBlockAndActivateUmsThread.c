/*
 * XREFs of KiBlockAndActivateUmsThread @ 0x14020E248
 * Callers:
 *     KiSwapToUmsThread @ 0x1406D8E40 (KiSwapToUmsThread.c)
 * Callees:
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
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
