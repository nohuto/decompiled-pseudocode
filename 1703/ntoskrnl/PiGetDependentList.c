/*
 * XREFs of PiGetDependentList @ 0x1404D9EF4
 * Callers:
 *     PipAttemptDependentsStart @ 0x1404A7558 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x1404D9E84 (PipNotifyDeviceDependencyList.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14056DC54 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x14056F530 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14056F7E0 (PnpProcessDependencyRelations.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405BF154 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x140692840 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 32);
  else
    return &PiDependencyNodeEmptyList;
}
