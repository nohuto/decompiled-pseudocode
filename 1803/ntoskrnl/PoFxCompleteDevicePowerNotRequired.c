/*
 * XREFs of PoFxCompleteDevicePowerNotRequired @ 0x1401862C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     PopFxQueueWorkOrder @ 0x140079DC0 (PopFxQueueWorkOrder.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
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
