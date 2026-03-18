/*
 * XREFs of HvlGetQpcBias @ 0x14012FE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 HvlGetQpcBias()
{
  return *(_QWORD *)(HvlpReferenceTscPage + 24);
}
