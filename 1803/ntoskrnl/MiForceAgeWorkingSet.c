/*
 * XREFs of MiForceAgeWorkingSet @ 0x1402598AC
 * Callers:
 *     MiPreUnlockWorkingSetShared @ 0x140083B98 (MiPreUnlockWorkingSetShared.c)
 *     MiForcedTrim @ 0x140084224 (MiForcedTrim.c)
 * Callees:
 *     MiAgeWorkingSet @ 0x14000BA50 (MiAgeWorkingSet.c)
 */

_BOOL8 __fastcall MiForceAgeWorkingSet(__int64 a1, char a2)
{
  return MiAgeWorkingSet(
           a1,
           a2,
           5,
           *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8LL * *(unsigned __int16 *)(a1 + 174))
                                           + 6768LL)
                               + 2354LL));
}
