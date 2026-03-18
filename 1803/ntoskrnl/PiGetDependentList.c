/*
 * XREFs of PiGetDependentList @ 0x1405CC0AC
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x1405C9BB4 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x1405CA0BC (PnpProcessDependencyRelations.c)
 *     PipVisitDeviceObjectListEntry @ 0x1405CA38C (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x1405CC078 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x1405CC14C (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14063B97C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x140723570 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140723F90 (PnpGetDeviceDependencyList.c)
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
