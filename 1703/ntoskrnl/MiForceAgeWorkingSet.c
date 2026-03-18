/*
 * XREFs of MiForceAgeWorkingSet @ 0x140214F58
 * Callers:
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     MiForcedTrim @ 0x140214F8C (MiForcedTrim.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           1,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a1 + 172))
                                           + 5544LL)
                               + 2354LL));
}
