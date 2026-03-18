/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x1408B31E8
 * Callers:
 *     KiIntSteerInit @ 0x1408B3130 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

bool KiIntSteerDetermineSteeringEnabled()
{
  char v0; // r8

  if ( !KiInterruptSteeringDisabled
    && (unsigned __int16)KiActiveGroups <= 1u
    && KeQueryActiveProcessorCountEx(0) >= 2
    && !(_BYTE)dword_14044B190 )
  {
    v0 = byte_14039B800;
    if ( byte_14039B800 == -1 )
    {
      _RAX = 1LL;
      __asm { cpuid }
      v0 = 0;
      if ( (int)_RCX < 0 )
      {
        _RAX = 1073741825LL;
        __asm { cpuid }
        v0 = (_DWORD)_RAX == 1986945624;
      }
      byte_14039B800 = v0;
    }
    if ( !v0 )
    {
      if ( HvlHypervisorConnected )
      {
        if ( (HvlpFlags & 2) != 0 )
          return KeQueryActiveProcessorCountEx(0) <= 0x10;
      }
      else if ( !HviIsAnyHypervisorPresent() )
      {
        return KeQueryActiveProcessorCountEx(0) <= 0x10;
      }
    }
  }
  return 0;
}
