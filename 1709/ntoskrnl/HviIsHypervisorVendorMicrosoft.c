/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140134870
 * Callers:
 *     HviGetDebugDeviceOptions @ 0x14028B430 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x1408288A4 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !(unsigned __int8)HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
