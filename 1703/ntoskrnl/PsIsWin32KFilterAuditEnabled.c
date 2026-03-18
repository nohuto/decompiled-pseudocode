/*
 * XREFs of PsIsWin32KFilterAuditEnabled @ 0x14002FB10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PsIsWin32KFilterAuditEnabled()
{
  return BYTE6(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]) & 1;
}
