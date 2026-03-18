/*
 * XREFs of PiEnumerateDependentListEntry @ 0x140692AAC
 * Callers:
 *     PipAttemptDependentsStart @ 0x1404A7558 (PipAttemptDependentsStart.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14056DC54 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x14056F530 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14056F7E0 (PnpProcessDependencyRelations.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405BF154 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401F7AC0 (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateDependentListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 1);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 40) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
