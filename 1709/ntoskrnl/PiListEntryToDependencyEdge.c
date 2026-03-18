/*
 * XREFs of PiListEntryToDependencyEdge @ 0x1401FDADC
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14055293C (PipNotifyDeviceDependencyList.c)
 *     IoDuplicateDependency @ 0x1406BE4F0 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x1406BE75C (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x1406BE790 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x1406BE9B0 (PipCheckValidNewDependencyEdge.c)
 *     PipDeleteAllDependencyRelations @ 0x1406BEAEC (PipDeleteAllDependencyRelations.c)
 *     PipMergeDependencyEdgeList @ 0x1406BEE64 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
