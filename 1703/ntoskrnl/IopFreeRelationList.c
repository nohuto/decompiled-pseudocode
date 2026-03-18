/*
 * XREFs of IopFreeRelationList @ 0x1405702D8
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x14056D420 (PipRemoveDevicesInRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14056D958 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14056DCF8 (PnpInvalidateRelationsInList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x14056F2D8 (PnpBuildRemovalRelationList.c)
 *     IopAllocateRelationList @ 0x140570214 (IopAllocateRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140695E4C (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140696080 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiClearDeviceObjectList @ 0x140570328 (PiClearDeviceObjectList.c)
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
