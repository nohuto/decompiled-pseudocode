/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140159430
 * Callers:
 *     HviGetDebugDeviceOptions @ 0x140261850 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x140811798 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
