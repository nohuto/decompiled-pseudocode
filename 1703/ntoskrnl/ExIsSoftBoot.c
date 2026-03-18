/*
 * XREFs of ExIsSoftBoot @ 0x140159410
 * Callers:
 *     EtwInitialize @ 0x14059E53C (EtwInitialize.c)
 *     PoClearTransitionMarker @ 0x1405B8BC8 (PoClearTransitionMarker.c)
 * Callees:
 *     <none>
 */

__int64 ExIsSoftBoot()
{
  return ((unsigned __int8)qword_140344B38 >> 2) & 1;
}
