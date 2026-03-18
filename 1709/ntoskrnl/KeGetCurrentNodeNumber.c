/*
 * XREFs of KeGetCurrentNodeNumber @ 0x140109670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT KeGetCurrentNodeNumber(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
