/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1405093A8
 * Callers:
 *     NtReplacePartitionUnit @ 0x1402CAD70 (NtReplacePartitionUnit.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140490BD8 (PiCMCaptureInterfaceListInputData.c)
 *     NtPlugPlayControl @ 0x14050927C (NtPlugPlayControl.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140509520 (PiControlGetDeviceInterfaceEnabled.c)
 *     PiCMCapturePropertyInputData @ 0x140509D80 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14050B234 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x14050B870 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x14050CA48 (PiCMCaptureObjectInputData.c)
 *     PiControlGetPropertyData @ 0x140525790 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x1405259C0 (PiControlGetRelatedDevice.c)
 *     PiCMCaptureDeviceListInputData @ 0x140575634 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1405C2338 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlGetDeviceDepth @ 0x1405E53C0 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1407357F0 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140735C7C (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x14073ADA0 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x14073AF00 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x14073B120 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x14073B260 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x14050946C (PiControlCopyUserModeCallersBuffer.c)
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
