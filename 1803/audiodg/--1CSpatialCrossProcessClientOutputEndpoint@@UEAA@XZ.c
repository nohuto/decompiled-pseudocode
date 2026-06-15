/*
 * XREFs of ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x14005837C
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessClientOutputEndpoint_::CComAggObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x140057837 (_ATL--CComAggObject_CSpatialCrossProcessClientOutputEndpoint_--CComAggObject_CSpati_ea_140057837.c)
 *     _ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint_::CComObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x1400579CD (_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint_--CComObject_CSpatialCrossProcessClien.c)
 * Callees:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x1400582F4 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(
        struct _RTL_CRITICAL_SECTION *this)
{
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint((CSpatialCrossProcessClientEndpoint *)this);
  if ( LOBYTE(this[26].DebugInfo) )
  {
    LOBYTE(this[26].DebugInfo) = 0;
    DeleteCriticalSection(this + 25);
  }
}
