/*
 * XREFs of UserFindAtom @ 0x1C007DF00
 * Callers:
 *     <none>
 * Callees:
 *     UserFindAtomFromAtomTable @ 0x1C007DF20 (UserFindAtomFromAtomTable.c)
 */

__int64 __fastcall UserFindAtom(__int64 a1)
{
  return UserFindAtomFromAtomTable(UserAtomTableHandle, a1);
}
