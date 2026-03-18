/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1401F7AC0
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1404D9E84 (PipNotifyDeviceDependencyList.c)
 *     IoDuplicateDependency @ 0x140692840 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x140692AAC (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140692AE0 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140692D00 (PipCheckValidNewDependencyEdge.c)
 *     PipDeleteAllDependencyRelations @ 0x140692E3C (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1406931B0 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
