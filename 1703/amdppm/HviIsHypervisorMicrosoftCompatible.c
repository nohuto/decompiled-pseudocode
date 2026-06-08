/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C000BA7C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C002D3E4 (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C000BA20 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  if ( HviIsAnyHypervisorPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  else
  {
    LODWORD(_RAX) = 0;
  }
  return (_DWORD)_RAX == 824407624;
}
