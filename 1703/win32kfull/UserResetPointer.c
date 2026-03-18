/*
 * XREFs of UserResetPointer @ 0x1C00B9B70
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 */

void UserResetPointer()
{
  SetPointer(0);
  SetPointer(1);
}
