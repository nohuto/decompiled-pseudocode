/*
 * XREFs of _PnpSetObjectProperty @ 0x1405D2000
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     _CmUpdateDevicePanel @ 0x1405CB46C (_CmUpdateDevicePanel.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1405D1C74 (PiPnpRtlSetObjectProperty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1405D39C8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405D5428 (PiDcContainerRequiresConfiguration.c)
 *     PnpStartDeviceNode @ 0x1405D5A08 (PnpStartDeviceNode.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x1405E4D74 (PipDmgSaveDeviceDmarPolicy.c)
 *     PnpInitializeSessionId @ 0x1405E6A14 (PnpInitializeSessionId.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140601D88 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1407E8498 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x1407EDAF4 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PipInitComputerIds @ 0x1408B3A10 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x1408DEF30 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x1405D2178 (_PnpSetObjectPropertyWorker.c)
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
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD SecurityDescriptorLength[10]; // [rsp+58h] [rbp-39h] BYREF

  memset(SecurityDescriptorLength, 0, sizeof(SecurityDescriptorLength));
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 488);
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
  v16 = PnpSetObjectPropertyWorker(
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
  v17 = v16;
  if ( !v14 )
    return v17;
  LODWORD(SecurityDescriptorLength[0]) = v16;
  v18 = v14(a1, a2, a3, 9LL, 2, SecurityDescriptorLength);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v17;
  if ( v18 == -1073741536 )
    return LODWORD(SecurityDescriptorLength[0]);
  v20 = v17;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
