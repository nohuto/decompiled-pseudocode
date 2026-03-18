/*
 * XREFs of PiSwDeviceDereference @ 0x1405C53A0
 * Callers:
 *     PiSwProcessRemove @ 0x1405C3D0C (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x1405C3DC8 (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1405C3E5C (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x1405C4518 (PiSwCloseDevice.c)
 *     PiSwDispatch @ 0x1405C6040 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1405C6A7C (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiSwDeviceFree @ 0x1405C41F8 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)P);
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
