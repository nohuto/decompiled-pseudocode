/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C00247F0
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C001B600 (TopologyProcessProcessUnit.c)
 *     TopologyProcessExtensionUnit @ 0x1C001B700 (TopologyProcessExtensionUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C0024770 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(__int64 a1, __int64 a2, UCHAR a3, void *a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1u);
}
