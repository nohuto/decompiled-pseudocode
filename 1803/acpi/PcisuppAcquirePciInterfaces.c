/*
 * XREFs of PcisuppAcquirePciInterfaces @ 0x1C008C180
 * Callers:
 *     ACPIBusIrpStartDevice @ 0x1C0078610 (ACPIBusIrpStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C002A604 (ACPIInternalSetFlags.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C0041654 (ACPIWakeInitializePmeRouting.c)
 *     PcisuppInitializePciRouting @ 0x1C008C690 (PcisuppInitializePciRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C008C970 (PcisuppReleasePciRouting.c)
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
