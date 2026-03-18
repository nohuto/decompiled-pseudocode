/*
 * XREFs of ViDeadlockCanProceed @ 0x140829524
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockDeleteMemoryRange @ 0x140828548 (VfDeadlockDeleteMemoryRange.c)
 *     VfDeadlockInitializeResource @ 0x1408288DC (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400F0B30 (KeAreInterruptsEnabled.c)
 *     ViDeadlockCheckStackLimits @ 0x1408298E4 (ViDeadlockCheckStackLimits.c)
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
