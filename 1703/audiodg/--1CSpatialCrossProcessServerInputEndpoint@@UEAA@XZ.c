/*
 * XREFs of ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x140058248
 * Callers:
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x1400576EB (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--CComObject_CSpatialCrossProcessServer.c)
 *     ??1?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140057BFC (--1-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140057C64 (--1-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140057D20 (--1-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::_CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x140057DB7 (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--_CComObject_CSpatialCrossProcessServe.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140058370 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14005806C (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
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
