/*
 * XREFs of PsIsSystemThread @ 0x140123E60
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
