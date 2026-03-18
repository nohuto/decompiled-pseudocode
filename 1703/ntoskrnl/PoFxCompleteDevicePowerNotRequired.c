/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x14014B470
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxQueueWorkOrder @ 0x14006882C (PopFxQueueWorkOrder.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

void __fastcall PoFxCompleteDevicePowerNotRequired(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  KIRQL v3; // bp

  v2 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 40));
  if ( !v2 )
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), 0, 17, 1LL);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 336));
    if ( *(_DWORD *)(BugCheckParameter2 + 36) == 2 )
      PopFxQueueWorkOrder(&PopFxSystemWorkQueue, (PLIST_ENTRY)(BugCheckParameter2 + 280), BugCheckParameter2, 0);
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 336));
    __writecr8(v3);
  }
  if ( v2 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, 0LL, 0LL);
}
