/*
 * XREFs of PcisuppAcquirePciInterfaces @ 0x1C0093F98
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C008B5D0 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C0002104 (ACPIInternalSetFlags.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C002A210 (ACPIWakeInitializePmeRouting.c)
 *     PcisuppInitializePciRouting @ 0x1C0094034 (PcisuppInitializePciRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C00A5140 (PcisuppReleasePciRouting.c)
 */

__int64 __fastcall PcisuppAcquirePciInterfaces(PDEVICE_OBJECT DeviceObject)
{
  __int64 DeviceExtension; // rsi
  int v3; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  v3 = PcisuppInitializePciRouting(DeviceObject);
  if ( v3 >= 0 )
  {
    v3 = ACPIWakeInitializePmeRouting(DeviceObject);
    if ( v3 >= 0 )
    {
      if ( (*(_BYTE *)(DeviceExtension + 952) & 2) != 0 )
      {
        PcisuppReleasePciRouting();
      }
      else
      {
        ACPIInternalSetFlags((void *)(DeviceExtension + 952), 2uLL);
        _InterlockedIncrement(&PciRoutingInterfaceCount);
      }
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
