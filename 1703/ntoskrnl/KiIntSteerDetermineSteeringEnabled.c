/*
 * XREFs of KiIntSteerDetermineSteeringEnabled @ 0x140817C90
 * Callers:
 *     KiIntSteerInit @ 0x140817BD8 (KiIntSteerInit.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140089140 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

bool KiIntSteerDetermineSteeringEnabled()
{
  ULONG ActiveProcessorCount; // eax
  char v2; // r8

  if ( KiInterruptSteeringDisabled )
    return 0;
  if ( (unsigned __int16)KiActiveGroups > 1u )
    return 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  if ( (_BYTE)dword_1403E3134 || ActiveProcessorCount < 2 )
    return 0;
  v2 = byte_14033FD50;
  if ( byte_14033FD50 == -1 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    v2 = 0;
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v2 = (_DWORD)_RAX == 1986945624;
    }
    byte_14033FD50 = v2;
  }
  if ( v2 )
    return 0;
  if ( HvlHypervisorConnected )
  {
    if ( (HvlpFlags & 2) != 0 )
      return KeQueryActiveProcessorCountEx(0) <= 0x10;
    return 0;
  }
  if ( HviIsAnyHypervisorPresent() )
    return 0;
  return KeQueryActiveProcessorCountEx(0) <= 0x10;
}
