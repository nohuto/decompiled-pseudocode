/*
 * XREFs of ??_GCPolygon@@UEAAPEAXI@Z @ 0x18017DCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CPolygon@@UEAA@XZ @ 0x18017DBF0 (--1CPolygon@@UEAA@XZ.c)
 */

CPolygon *__fastcall CPolygon::`scalar deleting destructor'(CPolygon *this, char a2)
{
  CPolygon::~CPolygon(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
