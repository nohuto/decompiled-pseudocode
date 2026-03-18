/*
 * XREFs of ??_ECHolographicViewerContent@@MEAAPEAXI@Z @ 0x1801A4F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHolographicViewerContent@@MEAA@XZ @ 0x1801A4E7C (--1CHolographicViewerContent@@MEAA@XZ.c)
 */

CHolographicViewerContent *__fastcall CHolographicViewerContent::`vector deleting destructor'(
        CHolographicViewerContent *this,
        char a2)
{
  CHolographicViewerContent::~CHolographicViewerContent(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
