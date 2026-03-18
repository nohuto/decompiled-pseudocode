/*
 * XREFs of PiEnumerateDependentListEntry @ 0x1406BE75C
 * Callers:
 *     PipAttemptDependentsStart @ 0x140552894 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x14055C388 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14055C6B8 (PnpProcessDependencyRelations.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1405D2368 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1405EDC78 (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401FDADC (PiListEntryToDependencyEdge.c)
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
