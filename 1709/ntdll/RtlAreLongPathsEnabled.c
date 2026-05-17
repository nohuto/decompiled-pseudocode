/*
 * XREFs of RtlAreLongPathsEnabled @ 0x18007C460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
