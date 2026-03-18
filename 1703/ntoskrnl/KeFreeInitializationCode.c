/*
 * XREFs of KeFreeInitializationCode @ 0x1407DCB08
 * Callers:
 *     KeInitSystem @ 0x140817034 (KeInitSystem.c)
 * Callees:
 *     MmDiscardDriverSection @ 0x140825DE0 (MmDiscardDriverSection.c)
 *     KiSwInterruptPresent @ 0x1408265EC (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140826844 (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 )
      return MmDiscardDriverSection(sub_140283780);
  }
  return result;
}
