/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1400FC850
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1405533C0 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x14059EB10 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x14074E58C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
