/*
 * XREFs of PiSwDeviceDereference @ 0x140576020
 * Callers:
 *     PiSwDispatch @ 0x14045FBB0 (PiSwDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x14045FDC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x14056D530 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x14056D5EC (PiSwBusRelationRemove.c)
 *     PiSwUnassociateDeviceObject @ 0x14056D680 (PiSwUnassociateDeviceObject.c)
 *     PiSwCloseDevice @ 0x14056E1C4 (PiSwCloseDevice.c)
 * Callees:
 *     PiSwDeviceFree @ 0x14056DDEC (PiSwDeviceFree.c)
 */

void __fastcall PiSwDeviceDereference(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    PiSwDeviceFree((__int64)a1);
    ExFreePoolWithTag(a1, 0x57706E50u);
  }
}
