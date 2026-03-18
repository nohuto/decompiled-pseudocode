/*
 * XREFs of _PnpSetObjectProperty @ 0x1404DDABC
 * Callers:
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140468A10 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 *     PnpInitializeSessionId @ 0x1404A648C (PnpInitializeSessionId.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404DB7F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404DD774 (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiDcContainerRequiresConfiguration @ 0x140594944 (PiDcContainerRequiresConfiguration.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405C4248 (PnpSetDeviceInterfacePropertyData.c)
 *     _CmDeleteDeviceWorker @ 0x14073B0CC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14073EEB8 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x140833620 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x1404DB9FC (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 (__fastcall *v14)(__int64 *, __int64, _QWORD, __int64, int, __int64 *); // rdi
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  __int64 SecurityDescriptorLength[10]; // [rsp+58h] [rbp-39h] BYREF

  LODWORD(SecurityDescriptorLength[0]) = 0;
  memset(&SecurityDescriptorLength[1], 0, 0x48uLL);
  v14 = (__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64, int, __int64 *))a1[39];
  SecurityDescriptorLength[3] = a5;
  SecurityDescriptorLength[4] = a6;
  LODWORD(SecurityDescriptorLength[5]) = a7;
  SecurityDescriptorLength[6] = a8;
  SecurityDescriptorLength[7] = __PAIR64__(a10, a9);
  SecurityDescriptorLength[2] = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 9LL, 1, SecurityDescriptorLength);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v18 = PnpSetObjectPropertyWorker(
          a1,
          a2,
          a3,
          SecurityDescriptorLength[2],
          (const wchar_t *)SecurityDescriptorLength[3],
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SecurityDescriptorLength[6],
          SecurityDescriptorLength[7],
          HIDWORD(SecurityDescriptorLength[7]));
  v16 = v18;
  if ( v14 )
  {
    LODWORD(SecurityDescriptorLength[0]) = v18;
    v19 = v14(a1, a2, a3, 9LL, 2, SecurityDescriptorLength);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      v21 = v16;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v16;
}
