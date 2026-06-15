/*
 * XREFs of ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x14005A96C
 * Callers:
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x140059E17 (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--CComObject_CSpatialCrossProcessServer.c)
 *     ??1?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14005A328 (--1-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14005A390 (--1-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14005A44C (--1-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::_CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x14005A4E3 (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--_CComObject_CSpatialCrossProcessServe.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005AAB0 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14005A790 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(this);
  if ( *((_BYTE *)this + 1144) )
  {
    *((_BYTE *)this + 1144) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 1104));
  }
}
