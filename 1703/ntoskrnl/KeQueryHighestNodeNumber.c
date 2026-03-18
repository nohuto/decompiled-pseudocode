/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140080310
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1404DA698 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x1405D3100 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x140710EC4 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
