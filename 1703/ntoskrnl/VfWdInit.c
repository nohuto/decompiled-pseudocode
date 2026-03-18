/*
 * XREFs of VfWdInit @ 0x14077C448
 * Callers:
 *     VfInitVerifierComponents @ 0x1407657A0 (VfInitVerifierComponents.c)
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfWdSetCancelTimeout @ 0x14077C510 (VfWdSetCancelTimeout.c)
 */

__int64 VfWdInit()
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    VfWdIrpListLock = 0LL;
    qword_1407901A0 = (__int64)&VfWdIrpListHead;
    VfWdIrpListHead = (__int64)&VfWdIrpListHead;
    pXdvExInitializeNPagedLookasideList(
      (int)&ViWdIrpLookasideList,
      0,
      (int)VfUtilFreePoolDispatchLevel,
      512,
      32LL,
      1683449430,
      16,
      VfInitializedWithoutReboot,
      (__int64)ExInitializeNPagedLookasideListInternal);
    KeInitializeTimerEx(&ViWdIrpTimer, NotificationTimer);
    KeInitializeDpc(&ViWdIrpTimerDpc, ViWdIrpTimerDpcRoutine, 0LL);
    VfWdSetCancelTimeout((unsigned int)VfWdIrpTimeoutMsec);
    return (unsigned int)_InterlockedExchange(&ViWdInitialized, 1);
  }
  return result;
}
