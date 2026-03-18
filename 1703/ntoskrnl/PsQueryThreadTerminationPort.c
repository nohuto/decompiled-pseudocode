/*
 * XREFs of PsQueryThreadTerminationPort @ 0x14041C3A8
 * Callers:
 *     sub_140261AD0 @ 0x140261AD0 (sub_140261AD0.c)
 * Callees:
 *     <none>
 */

void *volatile *PsQueryThreadTerminationPort()
{
  return &KeGetCurrentThread()[1].StackLimit;
}
