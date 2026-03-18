/*
 * XREFs of ExIsSoftBoot @ 0x140171830
 * Callers:
 *     EtwInitialize @ 0x1406224E0 (EtwInitialize.c)
 *     PoClearTransitionMarker @ 0x1406230BC (PoClearTransitionMarker.c)
 * Callees:
 *     <none>
 */

bool ExIsSoftBoot()
{
  return (qword_1403A1C58 & 4) != 0;
}
