/*
 * XREFs of IopFreeRelationList @ 0x14055D79C
 * Callers:
 *     PnpBuildRemovalRelationList @ 0x14055C134 (PnpBuildRemovalRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     IopAllocateRelationList @ 0x14055D6D8 (IopAllocateRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1405E42E4 (PnpInvalidateRelationsInList.c)
 *     PipRemoveDevicesInRelationList @ 0x1405E46E0 (PipRemoveDevicesInRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405EAA48 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1406C1A88 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x1406C1CC0 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x14055D7EC (PiClearDeviceObjectList.c)
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
