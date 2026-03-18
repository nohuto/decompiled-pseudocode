/*
 * XREFs of VfWdInit @ 0x14082B7BC
 * Callers:
 *     VfInitVerifierComponents @ 0x140814500 (VfInitVerifierComponents.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfWdSetCancelTimeout @ 0x14082B884 (VfWdSetCancelTimeout.c)
 */

__int64 VfWdInit()
{
  __int64 result; // rax

  if ( !VfSafeMode )
  {
    VfWdIrpListLock = 0LL;
    qword_1408421B0 = (__int64)&VfWdIrpListHead;
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
