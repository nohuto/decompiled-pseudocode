/*
 * XREFs of MxConsumeLargePageSlush @ 0x140898030
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MxConsumeImageSlush @ 0x140897E90 (MxConsumeImageSlush.c)
 */

__int64 MxConsumeLargePageSlush()
{
  __int64 result; // rax

  if ( (MiFlags & 4) == 0 )
    goto LABEL_5;
  if ( !dword_14044B170 )
    dword_14044B170 = 0x80000;
  result = MxConsumeImageSlush((__int128 *)qword_1408F25D8);
  if ( !(_DWORD)result )
  {
LABEL_5:
    result = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)PsHalImageBase);
    if ( (_DWORD)result )
      return MxConsumeImageSlush((__int128 *)MxHalDataTableEntry);
  }
  return result;
}
