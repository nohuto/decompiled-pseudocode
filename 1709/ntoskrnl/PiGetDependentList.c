/*
 * XREFs of PiGetDependentList @ 0x1405529AC
 * Callers:
 *     PipAttemptDependentsStart @ 0x140552894 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14055293C (PipNotifyDeviceDependencyList.c)
 *     PipVisitDeviceObjectListEntry @ 0x14055C388 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14055C6B8 (PnpProcessDependencyRelations.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405D2368 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405EDC78 (PnpRequestDeviceRemovalWorker.c)
 *     IoDuplicateDependency @ 0x1406BE4F0 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
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
