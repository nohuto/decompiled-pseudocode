/*
 * XREFs of ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x140058020
 * Callers:
 *     _ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint_::CComObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x14005764D (_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint_--CComObject_CSpatialCrossProcessClien.c)
 *     ??1?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140057B9C (--1-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140057C5C (--1-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140057C6C (--1-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint_::_CComObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x140057D11 (_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint_--_CComObject_CSpatialCrossProcessClie.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140058320 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140057F88 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(this);
  if ( *((_BYTE *)this + 1032) )
  {
    *((_BYTE *)this + 1032) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 992));
  }
}
