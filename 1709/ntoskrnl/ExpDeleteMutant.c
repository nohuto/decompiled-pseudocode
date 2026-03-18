/*
 * XREFs of ExpDeleteMutant @ 0x1400DB740
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 */

LONG __fastcall ExpDeleteMutant(struct _KMUTANT *a1)
{
  return KeReleaseMutant(a1, 1, 1u, 0);
}
