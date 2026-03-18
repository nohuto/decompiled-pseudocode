/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x14047FBFC
 * Callers:
 *     NtReplacePartitionUnit @ 0x14026B1C0 (NtReplacePartitionUnit.c)
 *     PiCMCaptureRegistryInputData @ 0x14043E1C0 (PiCMCaptureRegistryInputData.c)
 *     PiControlGetDeviceDepth @ 0x14044CA50 (PiControlGetDeviceDepth.c)
 *     NtPlugPlayControl @ 0x14047F260 (NtPlugPlayControl.c)
 *     PiCMCapturePropertyInputData @ 0x140482B6C (PiCMCapturePropertyInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x14048AA64 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x14048ADE0 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1404E36C4 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404E8E44 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x14055909C (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetRelatedDevice @ 0x14055A990 (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x14055AC30 (PiControlGetPropertyData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14056C268 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1406A35B4 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1406A3A40 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x1406A8200 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1406A8350 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1406A8570 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1406A86B0 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x14047FCC0 (PiControlCopyUserModeCallersBuffer.c)
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
