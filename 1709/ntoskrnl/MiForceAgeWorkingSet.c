/*
 * XREFs of MiForceAgeWorkingSet @ 0x14021D508
 * Callers:
 *     MiGetVadWakeList @ 0x140038190 (MiGetVadWakeList.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiForcedTrim @ 0x14021D544 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14009C900 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           1,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172))
                                           + 5680LL)
                               + 2354LL));
}
