/*
 * XREFs of ExIsSoftBoot @ 0x1401346F0
 * Callers:
 *     PoClearTransitionMarker @ 0x1405ABF50 (PoClearTransitionMarker.c)
 *     EtwInitialize @ 0x1405C6814 (EtwInitialize.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_14035E698 & 4) != 0;
}
