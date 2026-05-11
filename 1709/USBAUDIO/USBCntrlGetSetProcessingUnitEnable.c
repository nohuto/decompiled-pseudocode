/*
 * XREFs of USBCntrlGetSetProcessingUnitEnable @ 0x1C001FC90
 * Callers:
 *     TopologyProcessProcessUnit @ 0x1C0017190 (TopologyProcessProcessUnit.c)
 *     TopologyProcessExtensionUnit @ 0x1C0017290 (TopologyProcessExtensionUnit.c)
 * Callees:
 *     USBCntrlGetSetProcessingUnitValue @ 0x1C001FC10 (USBCntrlGetSetProcessingUnitValue.c)
 */

__int64 __fastcall USBCntrlGetSetProcessingUnitEnable(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  return USBCntrlGetSetProcessingUnitValue(a1, a2, a3, 1, a4, 1);
}
