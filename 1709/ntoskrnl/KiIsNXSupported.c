/*
 * XREFs of KiIsNXSupported @ 0x140428618
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x140843C4C (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x14042855C (KiGetCpuVendor.c)
 */

char KiIsNXSupported()
{
  bool v5; // bl
  char result; // al
  bool v7; // zf

  _RAX = 2147483649LL;
  __asm { cpuid }
  LODWORD(_RDX) = _RDX & 0x100000;
  v5 = (_DWORD)_RDX != 0;
  if ( (_DWORD)_RDX )
    return v5;
  v7 = (unsigned int)KiGetCpuVendor() == 1;
  result = 1;
  if ( !v7 )
    return v5;
  return result;
}
