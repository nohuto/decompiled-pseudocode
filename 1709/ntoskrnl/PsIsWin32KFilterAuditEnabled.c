/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x14012B000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterAuditEnabled()
{
  return (KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase & 0x8000) != 0;
}
