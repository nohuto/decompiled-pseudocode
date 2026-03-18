/*
 * XREFs of HvlGetQpcBias @ 0x140140570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlGetQpcBias()
{
  return *(_QWORD *)(HvlpReferenceTscPage + 24);
}
