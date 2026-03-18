/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x14014A450
 * Callers:
 *     KiRestoreFeatureBits @ 0x140137DC8 (KiRestoreFeatureBits.c)
 *     HviGetHypervisorInterface @ 0x140155D90 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x140159430 (HviIsHypervisorVendorMicrosoft.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14017C084 (KiDetectAmdNonArchSsbdSupport.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140261950 (HviGetHypervisorVendorAndMaxFunction.c)
 *     KiSetFeatureBits @ 0x14040FD30 (KiSetFeatureBits.c)
 *     HvlPhase0Initialize @ 0x1405A8F40 (HvlPhase0Initialize.c)
 *     ViFilterIsDeviceExcluded @ 0x140780E98 (ViFilterIsDeviceExcluded.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140817C90 (KiIntSteerDetermineSteeringEnabled.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1408259C0 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
