/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x14060AA9C
 * Callers:
 *     MiSessionCreate @ 0x14060A560 (MiSessionCreate.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x1408AC9D0 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = 0LL;
  result = 1LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_UNKNOWN *)a1 == &unk_1403CB5C0 )
    return MiInitializePteInfo((unsigned int)&unk_1403CC1F8, 12, 0, 3, qword_1403CD160, 0x8000000000LL, 16);
  return result;
}
