/*
 * XREFs of ViExTryToAcquireFastMutexCommon @ 0x1407802B8
 * Callers:
 *     VerifierExTryToAcquireFastMutex @ 0x14077FE40 (VerifierExTryToAcquireFastMutex.c)
 *     VerifierExTryToAcquireFastMutexNoReboot @ 0x14077FEA0 (VerifierExTryToAcquireFastMutexNoReboot.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1407781CC (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x140778434 (ViKeIrqlLogCommon.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1407801CC (ViExCheckAPCLevelOrBelow.c)
 */

char __fastcall ViExTryToAcquireFastMutexCommon(ULONG_PTR a1, int a2)
{
  char CurrentIrql; // bl
  char v4; // di
  char *v5; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow(a1, a1, a2);
  else
    CurrentIrql = KeGetCurrentIrql();
  v4 = ((__int64 (__fastcall *)(ULONG_PTR))pXdvExTryToAcquireFastMutex)(a1);
  if ( v4 )
  {
    v5 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
    ViKeIrqlLogCommon((__int64)v5, 2u);
  }
  return v4;
}
