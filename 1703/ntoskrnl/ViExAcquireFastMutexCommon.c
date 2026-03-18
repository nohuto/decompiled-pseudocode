/*
 * XREFs of ViExAcquireFastMutexCommon @ 0x140780168
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x14077FBF0 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x14077FC40 (VerifierExAcquireFastMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1407781CC (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1407801CC (ViExCheckAPCLevelOrBelow.c)
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
  v4 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
  ViKeIrqlLogCommon((__int64)v4, 2u);
}
