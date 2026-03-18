/*
 * XREFs of PiEnumerateDependentListEntry @ 0x1407237C8
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x1405C9BB4 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x1405CA0BC (PnpProcessDependencyRelations.c)
 *     PipVisitDeviceObjectListEntry @ 0x1405CA38C (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x1405CC078 (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14063B97C (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14023A524 (PiListEntryToDependencyEdge.c)
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
