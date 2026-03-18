/*
 * XREFs of ExpDeleteMutant @ 0x14013E450
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 */

LONG __fastcall ExpDeleteMutant(struct _KMUTANT *a1)
{
  return KeReleaseMutant(a1, 1, 1u, 0);
}
