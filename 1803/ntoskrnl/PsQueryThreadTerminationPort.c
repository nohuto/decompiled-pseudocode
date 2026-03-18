/*
 * XREFs of PsQueryThreadTerminationPort @ 0x14048938C
 * Callers:
 *     sub_1402C0DB0 @ 0x1402C0DB0 (sub_1402C0DB0.c)
 * Callees:
 *     <none>
 */

void **PsQueryThreadTerminationPort()
{
  return &KeGetCurrentThread()[1].InitialStack;
}
