/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14023A524
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x1405CC14C (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x14064F6FC (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140723570 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x1407237C8 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x1407237FC (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140723A14 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x140723C40 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x140723F90 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
