/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x14004D524
 * Callers:
 *     PiCMReleaseRegistryInputData @ 0x14043E104 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14043E1C0 (PiCMCaptureRegistryInputData.c)
 *     PiControlGetDeviceDepth @ 0x14044CA50 (PiControlGetDeviceDepth.c)
 *     NtPlugPlayControl @ 0x14047F260 (NtPlugPlayControl.c)
 *     PiCMCapturePropertyInputData @ 0x140482B6C (PiCMCapturePropertyInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14048A794 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x14048A7E8 (PiCMReleasePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x14048AA64 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14048ADE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404E34FC (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404E36C4 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404E850C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404E8E44 (PiCMCaptureObjectInputData.c)
 *     PiCMGetDeviceIdList @ 0x140558CB8 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x14055909C (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetRelatedDevice @ 0x14055A990 (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x14055AC30 (PiControlGetPropertyData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14056BBEC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14056C268 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1406A35B4 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1406A3A40 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x1406A595C (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x1406A8200 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1406A8350 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1406A8570 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1406A86B0 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
