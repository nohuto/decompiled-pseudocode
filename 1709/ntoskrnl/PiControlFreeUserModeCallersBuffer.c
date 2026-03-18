/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x1400DF360
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x14044B0D0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14044B788 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140518984 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x140518AB4 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCapturePropertyInputData @ 0x1405256A4 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140525964 (PiCMReleasePropertyInputData.c)
 *     NtPlugPlayControl @ 0x1405259B8 (NtPlugPlayControl.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x140526604 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140526658 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x140526EE0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140527DE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     PiControlGetRelatedDevice @ 0x140556960 (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x140556C60 (PiControlGetPropertyData.c)
 *     PiCMCaptureRegistryInputData @ 0x14057436C (PiCMCaptureRegistryInputData.c)
 *     PiCMGetDeviceIdList @ 0x140586D80 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140587164 (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x14058B520 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1406CE894 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1406CED18 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x1406D0A14 (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x1406D2EC0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1406D3010 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1406D3230 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1406D3370 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
