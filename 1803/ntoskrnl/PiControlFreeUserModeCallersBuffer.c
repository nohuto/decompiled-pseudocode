/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x14006E290
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x14048FFD8 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140490BD8 (PiCMCaptureInterfaceListInputData.c)
 *     NtPlugPlayControl @ 0x14050927C (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140509520 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMReleasePropertyInputData @ 0x140509D2C (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140509D80 (PiCMCapturePropertyInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x14050B204 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14050B234 (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14050B81C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x14050B870 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x14050C488 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14050CA48 (PiCMCaptureObjectInputData.c)
 *     PiControlGetPropertyData @ 0x140525790 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1405259C0 (PiControlGetRelatedDevice.c)
 *     PiCMGetDeviceIdList @ 0x140575248 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140575634 (PiCMCaptureDeviceListInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1405C1C98 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1405C2338 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetDeviceDepth @ 0x1405E53C0 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1407357F0 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140735C7C (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x14073823C (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x14073ADA0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14073AF00 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14073B120 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14073B260 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
