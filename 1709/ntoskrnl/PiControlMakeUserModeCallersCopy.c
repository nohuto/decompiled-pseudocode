/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x140525AE4
 * Callers:
 *     NtReplacePartitionUnit @ 0x140295730 (NtReplacePartitionUnit.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14044B788 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140518984 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1405256A4 (PiCMCapturePropertyInputData.c)
 *     NtPlugPlayControl @ 0x1405259B8 (NtPlugPlayControl.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140526658 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x140526EE0 (PiControlGetSetDeviceStatus.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140527DE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     PiControlGetRelatedDevice @ 0x140556960 (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x140556C60 (PiControlGetPropertyData.c)
 *     PiCMCaptureRegistryInputData @ 0x14057436C (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x140587164 (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x14058B520 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1406CE894 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1406CED18 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x1406D2EC0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1406D3010 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1406D3230 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1406D3370 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x140525BA8 (PiControlCopyUserModeCallersBuffer.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  PVOID PoolWithQuotaTag; // rax
  int v12; // esi

  if ( !a5 )
  {
    *a1 = a2;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( a6 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x20207050u);
    *a1 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return 3221225626LL;
  }
  v12 = 0;
  if ( *a1 )
  {
    v12 = PiControlCopyUserModeCallersBuffer(*a1, a2, a3, a4, a5, a6);
    if ( v12 < 0 )
    {
      if ( a6 )
      {
        ExFreePoolWithTag(*a1, 0);
        *a1 = 0LL;
      }
    }
  }
  return (unsigned int)v12;
}
