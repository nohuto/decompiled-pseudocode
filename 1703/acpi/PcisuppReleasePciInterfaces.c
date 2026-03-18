/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1C00A505C
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x1C0045F80 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C00020E4 (ACPIInternalClearFlags.c)
 *     WPP_RECORDER_SF_qss @ 0x1C000F60C (WPP_RECORDER_SF_qss.c)
 *     ACPIWakeReleasePmeRouting @ 0x1C0059FD8 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1C00A5140 (PcisuppReleasePciRouting.c)
 */

void __fastcall PcisuppReleasePciInterfaces(_QWORD *a1)
{
  __int64 v2; // rdx
  const char *v3; // rax
  const char *v4; // rcx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  if ( (a1[119] & 2) != 0 )
  {
    ACPIInternalClearFlags(a1 + 119, 2LL);
    if ( _InterlockedExchangeAdd(&PciRoutingInterfaceCount, 0xFFFFFFFF) == 1 )
    {
      PcisuppReleasePciRouting();
      ACPIWakeReleasePmeRouting();
      v2 = a1[1];
      v3 = byte_1C0066CD0;
      v4 = byte_1C0066CD0;
      if ( (v2 & 0x200000000000LL) != 0 )
      {
        v3 = (const char *)a1[70];
        if ( (v2 & 0x400000000000LL) != 0 )
          v4 = (const char *)a1[71];
      }
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xAu,
        (__int64)&WPP_d2ef2d34120e31060e7e9f7c1ec9dc71_Traceguids,
        (char)a1,
        v3,
        v4);
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
}
