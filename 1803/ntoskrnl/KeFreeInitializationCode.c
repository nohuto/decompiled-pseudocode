/*
 * XREFs of KeFreeInitializationCode @ 0x14087CB70
 * Callers:
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     KiSwInterruptPresent @ 0x1408C90D8 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1408C951C (MmStrongCodeGuaranteesEnforced.c)
 *     MmDiscardDriverSection @ 0x1408E0DA4 (MmDiscardDriverSection.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !KpgApiRegistered )
      return MmDiscardDriverSection(sub_1402E8270);
  }
  return result;
}
