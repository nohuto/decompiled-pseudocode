/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140050280
 * Callers:
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$1 @ 0x14004F9F7 (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--CComAggObject_CCrossProcessC_ea_14004F9F7.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x14004FAE3 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--CComAggObject_CCrossProcess_ea_14004FAE3.c)
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::_CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x14005014F (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--_CComAggObject_CCrossProcessClientInputEn.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::_CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x1400501AF (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--_CComAggObject_CCrossProcessClientOutput.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::~CComContainedObject<CCrossProcessClientOutputEndpoint>(
        CCrossProcessClientInputEndpoint *a1)
{
  CCrossProcessClientInputEndpoint::~CCrossProcessClientInputEndpoint(a1);
}
