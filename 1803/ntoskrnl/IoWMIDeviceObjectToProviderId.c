/*
 * XREFs of IoWMIDeviceObjectToProviderId @ 0x140161E70
 * Callers:
 *     PpmAllocWmiEvent @ 0x14027F8E0 (PpmAllocWmiEvent.c)
 *     WmipSetTraceNotify @ 0x140600BEC (WmipSetTraceNotify.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     WmipDoFindRegEntryByDevice @ 0x140161F4C (WmipDoFindRegEntryByDevice.c)
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
