/*
 * XREFs of HvlGetQpcBias @ 0x140132BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlGetQpcBias()
{
  return *(_QWORD *)(HvlpReferenceTscPage + 24);
}
