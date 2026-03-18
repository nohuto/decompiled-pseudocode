/*
 * XREFs of PiSwDeviceDereference @ 0x1405F2D74
 * Callers:
 *     PiSwDispatch @ 0x1405749C0 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationRemove @ 0x1406CD984 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1406CDA04 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x1406CE2EC (PiSwProcessRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x1406CE854 (PiSwUnassociateDeviceObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiSwDeviceFree @ 0x1406CDAD4 (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(PVOID P)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree();
    ExFreePoolWithTag(P, 0x57706E50u);
  }
}
