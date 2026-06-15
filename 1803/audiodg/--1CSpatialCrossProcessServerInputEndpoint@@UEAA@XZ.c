/*
 * XREFs of ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x140057FDC
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessServerInputEndpoint_::CComAggObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x14005791D (_ATL--CComAggObject_CSpatialCrossProcessServerInputEndpoint_--CComAggObject_CSpatia_ea_14005791D.c)
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x140057A6B (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--CComObject_CSpatialCrossProcessServer.c)
 * Callees:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x1400583A8 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(this);
  if ( *((_BYTE *)this + 1152) )
  {
    *((_BYTE *)this + 1152) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 1112));
  }
}
