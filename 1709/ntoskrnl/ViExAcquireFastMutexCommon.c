/*
 * XREFs of ViExAcquireFastMutexCommon @ 0x1407C2168
 * Callers:
 *     VerifierExAcquireFastMutex @ 0x1407C1BD0 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1407C1C20 (VerifierExAcquireFastMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1407BA0B0 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x1407BA314 (ViKeIrqlLogCommon.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1407C21CC (ViExCheckAPCLevelOrBelow.c)
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
