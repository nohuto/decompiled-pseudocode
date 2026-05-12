/*
 * XREFs of RaidAdapterFindUnitAtDirql @ 0x1C0006328
 * Callers:
 *     RaidAdapterFindUnit @ 0x1C0006170 (RaidAdapterFindUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0014530 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     StorFindDictionary @ 0x1C000637C (StorFindDictionary.c)
 */

__int64 __fastcall RaidAdapterFindUnitAtDirql(__int64 a1, int a2)
{
  int Dictionary; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  Dictionary = StorFindDictionary(
                 a1 + 144,
                 ((((unsigned __int64)(unsigned __int8)a2 << 8) | BYTE1(a2)) << 8) | BYTE2(a2),
                 &v5);
  v3 = 0LL;
  if ( Dictionary >= 0 )
    return v5 - 64;
  return v3;
}
