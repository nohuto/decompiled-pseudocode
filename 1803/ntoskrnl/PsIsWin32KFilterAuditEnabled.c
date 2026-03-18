/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x1400C6B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PsIsWin32KFilterAuditEnabled()
{
  return (KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase & 0x8000) != 0;
}
