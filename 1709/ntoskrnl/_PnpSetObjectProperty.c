/*
 * XREFs of _PnpSetObjectProperty @ 0x14052F8B4
 * Callers:
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x14052F53C (PiPnpRtlSetObjectProperty.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140553144 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14055CF88 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x14058C660 (PipDmgSaveDeviceDmarPolicy.c)
 *     PnpInitializeSessionId @ 0x140592D5C (PnpInitializeSessionId.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1405C5FBC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405C60D8 (PiDcContainerRequiresConfiguration.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405D37B8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     _CmDeleteDeviceWorker @ 0x14077F7C4 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14078340C (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x14086A740 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x14052FA38 (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
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
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _QWORD SecurityDescriptorLength[10]; // [rsp+58h] [rbp-39h] BYREF

  LODWORD(SecurityDescriptorLength[0]) = 0;
  memset(&SecurityDescriptorLength[1], 0, 0x48uLL);
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 312);
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
          SecurityDescriptorLength[3],
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SecurityDescriptorLength[6],
          SecurityDescriptorLength[7],
          SHIDWORD(SecurityDescriptorLength[7]));
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
