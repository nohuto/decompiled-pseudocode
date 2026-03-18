/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x140123EF0
 * Callers:
 *     PpmAllocWmiEvent @ 0x140249934 (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x1405DF154 (WmipSetTraceNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x1401240B0 (WmipDoFindRegEntryByDevice.c)
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
