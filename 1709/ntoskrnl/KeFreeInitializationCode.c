/*
 * XREFs of KeFreeInitializationCode @ 0x14080CB64
 * Callers:
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     MmDiscardDriverSection @ 0x140857448 (MmDiscardDriverSection.c)
 *     KiSwInterruptPresent @ 0x140857940 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140857B7C (MmStrongCodeGuaranteesEnforced.c)
 */

__int64 KeFreeInitializationCode()
{
  __int64 result; // rax

  result = MmStrongCodeGuaranteesEnforced();
  if ( !(_DWORD)result )
  {
    result = KiSwInterruptPresent();
    if ( (int)result < 0 && !__30 )
      return MmDiscardDriverSection(sub_1402AFF20);
  }
  return result;
}
