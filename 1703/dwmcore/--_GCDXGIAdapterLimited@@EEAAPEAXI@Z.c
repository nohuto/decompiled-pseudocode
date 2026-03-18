/*
 * XREFs of ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x1800B53A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x1800B59A4 (--1CDXGIAdapterLimited@@EEAA@XZ.c)
 */

CDXGIAdapterLimited *__fastcall CDXGIAdapterLimited::`scalar deleting destructor'(CDXGIAdapterLimited *this, char a2)
{
  CDXGIAdapterLimited::~CDXGIAdapterLimited(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
