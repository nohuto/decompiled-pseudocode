/*
 * XREFs of UserAddAtomEx @ 0x1C0006F20
 * Callers:
 *     <none>
 * Callees:
 *     UserAddAtomToAtomTableEx @ 0x1C0006F50 (UserAddAtomToAtomTableEx.c)
 */

__int64 UserAddAtomEx()
{
  return UserAddAtomToAtomTableEx(UserAtomTableHandle);
}
