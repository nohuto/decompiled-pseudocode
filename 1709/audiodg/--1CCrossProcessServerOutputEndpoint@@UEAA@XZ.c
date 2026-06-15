/*
 * XREFs of ??1CCrossProcessServerOutputEndpoint@@UEAA@XZ @ 0x14002FA5C
 * Callers:
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1400219A3 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$4 @ 0x140021A6C (_privateCreateCrossProcessEndpoint_--_1_--dtor$4.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x14002FA4F (_ATL--CComObject_CCrossProcessServerInputEndpoint_--CComObject_CCrossProcessServerInputEndpoint_.c)
 *     _ATL::CComObject_CCrossProcessServerOutputEndpoint_::CComObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$0 @ 0x14005105F (_ATL--CComObject_CCrossProcessServerOutputEndpoint_--CComObject_CCrossProcessServerOutputEndpoin.c)
 *     ??1?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x1400513F0 (--1-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140051450 (--1-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x1400514B8 (--1-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140051618 (--1-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CCrossProcessServerOutputEndpoint_::_CComObject_CCrossProcessServerOutputEndpoint__::_1_::dtor$0 @ 0x14005168B (_ATL--CComObject_CCrossProcessServerOutputEndpoint_--_CComObject_CCrossProcessServerOutputEndpoi.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140051970 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400519C0 (--_G-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140016FAC (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CCrossProcessServerOutputEndpoint::~CCrossProcessServerOutputEndpoint(
        CCrossProcessServerOutputEndpoint *this)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( *((_BYTE *)this + 512) )
  {
    *((_BYTE *)this + 512) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  }
}
