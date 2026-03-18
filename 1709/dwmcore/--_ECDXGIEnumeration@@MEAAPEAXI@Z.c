/*
 * XREFs of ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x18008C260
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDXGIEnumeration@@MEAA@XZ @ 0x18008C1A0 (--1CDXGIEnumeration@@MEAA@XZ.c)
 */

CDXGIEnumeration *__fastcall CDXGIEnumeration::`vector deleting destructor'(CDXGIEnumeration *this, char a2)
{
  CDXGIEnumeration::~CDXGIEnumeration(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
