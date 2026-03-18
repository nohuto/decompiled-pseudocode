/*
 * XREFs of ViExAcquireFastMutexCommon @ 0x14082F6B4
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x14082F110 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x14082F160 (VerifierExAcquireFastMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140827410 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x14082767C (ViKeIrqlLogCommon.c)
 *     ViExCheckAPCLevelOrBelow @ 0x14082F72C (ViExCheckAPCLevelOrBelow.c)
 */

void __fastcall ViExAcquireFastMutexCommon(__int64 a1, unsigned int a2)
{
  char CurrentIrql; // bl
  char *v4; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow(a1, a1, a2);
  else
    CurrentIrql = KeGetCurrentIrql();
  ((void (__fastcall *)(__int64))pXdvExAcquireFastMutex)(a1);
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0 )
  {
    v4 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
    ViKeIrqlLogCommon((__int64)v4, 2u);
  }
}
