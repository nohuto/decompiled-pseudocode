/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C00016C0
 * Callers:
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00306D8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C0030F1C (RegisterKernelPlatformStates.c)
 *     ProcLibGlobalInit @ 0x1C00354C0 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
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
