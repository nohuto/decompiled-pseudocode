/*
 * XREFs of IopFreeRelationList @ 0x1405C8518
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1405C7188 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x1405C8040 (PnpBuildRemovalRelationList.c)
 *     IopAllocateRelationList @ 0x1405C8454 (IopAllocateRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405C91F4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1405C95F8 (PnpInvalidateRelationsInList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14072787C (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140727B00 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x1405C8568 (PiClearDeviceObjectList.c)
 */

void __fastcall IopFreeRelationList(_QWORD *P)
{
  void *v1; // rdi

  if ( P )
  {
    v1 = (void *)*P;
    if ( *P )
    {
      PiClearDeviceObjectList(*P);
      ExFreePoolWithTag(v1, 0);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
