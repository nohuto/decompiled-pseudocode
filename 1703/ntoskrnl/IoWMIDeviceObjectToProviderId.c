/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x140144180
 * Callers:
 *     PpmAllocWmiEvent @ 0x140234404 (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x1405A0034 (WmipSetTraceNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x1401441D8 (WmipDoFindRegEntryByDevice.c)
 */

ULONG __stdcall IoWMIDeviceObjectToProviderId(PDEVICE_OBJECT DeviceObject)
{
  KIRQL v2; // di
  __int64 RegEntryByDevice; // rax
  ULONG v4; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByDevice = WmipDoFindRegEntryByDevice(DeviceObject);
  v4 = 0;
  if ( RegEntryByDevice )
    v4 = *(_DWORD *)(RegEntryByDevice + 56);
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  __writecr8(v2);
  return v4;
}
