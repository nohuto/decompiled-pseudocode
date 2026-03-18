/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x14028B664
 * Callers:
 *     KiIntSteerInit @ 0x140838BF8 (KiIntSteerInit.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140356719;
  if ( byte_140356719 == -1 )
  {
    _RAX = 1LL;
    v0 = 0;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140356719 = v0;
  }
  return v0;
}
