/*
 * XREFs of ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x180046530
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x180046478 (--1CDXGIEnumeration@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CDXGIEnumeration *__fastcall CDXGIEnumeration::`vector deleting destructor'(CDXGIEnumeration *this, char a2)
{
  CDXGIEnumeration::~CDXGIEnumeration(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
