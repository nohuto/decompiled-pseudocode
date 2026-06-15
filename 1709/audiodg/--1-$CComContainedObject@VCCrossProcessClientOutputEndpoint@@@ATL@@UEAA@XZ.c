/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x1400514B0
 * Callers:
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$1 @ 0x140050C27 (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--CComAggObject_CCrossProcessC_ea_140050C27.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x140050D13 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--CComAggObject_CCrossProcess_ea_140050D13.c)
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::_CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x14005137F (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--_CComAggObject_CCrossProcessClientInputEn.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::_CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x1400513DF (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--_CComAggObject_CCrossProcessClientOutput.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::~CComContainedObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessClientInputEndpoint *a1)
{
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(a1);
}
