/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140171850
 * Callers:
 *     HvipApertureDetectParameters @ 0x140294278 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x1402C0B20 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x1408A5194 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
