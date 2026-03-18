/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x14016D110
 * Callers:
 *     KiRestoreFeatureBits @ 0x14014EBA8 (KiRestoreFeatureBits.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140171850 (HviIsHypervisorVendorMicrosoft.c)
 *     HviGetHypervisorInterface @ 0x140172340 (HviGetHypervisorInterface.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1401A5EB8 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x1402747D0 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1402C0C20 (HviGetHypervisorVendorAndMaxFunction.c)
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 *     HvlPhase0Initialize @ 0x140628830 (HvlPhase0Initialize.c)
 *     ExGetVMType @ 0x1407BDE9C (ExGetVMType.c)
 *     ViFilterIsDeviceExcluded @ 0x1408305C8 (ViFilterIsDeviceExcluded.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x1408B31E8 (KiIntSteerDetermineSteeringEnabled.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1408C98F4 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
