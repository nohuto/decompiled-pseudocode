/*
 * XREFs of KeQueryHighestNodeNumber @ 0x14007ED40
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x14052C2C8 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140652370 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1407AF830 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
