/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140134970
 * Callers:
 *     HviIsHypervisorVendorMicrosoft @ 0x140134870 (HviIsHypervisorVendorMicrosoft.c)
 *     HviGetHypervisorInterface @ 0x140134930 (HviGetHypervisorInterface.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14017B798 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiRestoreFeatureBits @ 0x140208B60 (KiRestoreFeatureBits.c)
 *     PopIsRunningInVm @ 0x14023D330 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x14028B530 (HviGetHypervisorVendorAndMaxFunction.c)
 *     KiSetFeatureBits @ 0x140427A44 (KiSetFeatureBits.c)
 *     HvlPhase0Initialize @ 0x1405ABC98 (HvlPhase0Initialize.c)
 *     ViFilterIsDeviceExcluded @ 0x1407C3048 (ViFilterIsDeviceExcluded.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140838BF8 (KiIntSteerInit.c)
 *     InitializeDynamicPartitioningPolicy @ 0x14084A22C (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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
