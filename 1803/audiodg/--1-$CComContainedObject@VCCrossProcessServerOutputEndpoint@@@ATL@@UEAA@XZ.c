/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14002E9EC
 * Callers:
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$4 @ 0x140020A40 (_privateCreateCrossProcessEndpoint_--_1_--dtor$4.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x14002E9DF (_ATL--CComObject_CCrossProcessServerInputEndpoint_--CComObject_CCrossProcessServerInputEndpoint_.c)
 *     _ATL::CComAggObject_CCrossProcessServerInputEndpoint_::CComAggObject_CCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x14004F555 (_ATL--CComAggObject_CCrossProcessServerInputEndpoint_--CComAggObject_CCrossProcessS_ea_14004F555.c)
 *     _ATL::CComAggObject_CCrossProcessServerOutputEndpoint_::CComAggObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$1 @ 0x14004F619 (_ATL--CComAggObject_CCrossProcessServerOutputEndpoint_--CComAggObject_CCrossProcess_ea_14004F619.c)
 *     _ATL::CComObject_CCrossProcessServerOutputEndpoint_::CComObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$0 @ 0x14004F7DF (_ATL--CComObject_CCrossProcessServerOutputEndpoint_--CComObject_CCrossProcessServerOutputEndpoin.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x1400176F0 (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::~CComContainedObject<CCrossProcessServerOutputEndpoint>(
        __int64 a1)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)a1);
  if ( *(_BYTE *)(a1 + 512) )
  {
    *(_BYTE *)(a1 + 512) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 472));
  }
}
