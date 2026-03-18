/*
 * XREFs of ViDeadlockCanProceed @ 0x14077A280
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14077927C (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockInitializeResource @ 0x140779620 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x14077A628 (ViDeadlockCheckStackLimits.c)
 */

__int64 __fastcall ViDeadlockCanProceed(LONG *a1, int a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !ViDeadlockDetectionEnabled )
    return 0LL;
  if ( (unsigned int)KeNumberProcessors_0 > 4 )
    return 0LL;
  if ( KeGetCurrentIrql() > 2u )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    return 0LL;
  if ( !ViDeadlockGlobals )
    return 0LL;
  ViDeadlockCheckStackLimits();
  if ( ViDeadlockVerifyOnlySpinlocks )
  {
    if ( a2 && (unsigned int)(a2 - 5) > 2 )
      return 0LL;
  }
  if ( a1 == &ViDeadlockDatabaseLock )
    return 0LL;
  LOBYTE(v2) = ViDeadlockDatabaseOwner != (_QWORD)KeGetCurrentThread();
  return v2;
}
