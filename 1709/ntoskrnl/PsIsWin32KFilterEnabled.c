/*
 * XREFs of PsIsWin32KFilterEnabled @ 0x1401217A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterEnabled()
{
  return (KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase & 0x4000) != 0;
}
