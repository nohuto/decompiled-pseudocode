/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18008EB60
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x1800C6530 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 *     ??_ECCachedVisualImage@@OEI@EAAPEAXI@Z @ 0x1800C6540 (--_ECCachedVisualImage@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18008EA8C (--1CCachedVisualImage@@MEAA@XZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::`vector deleting destructor'(CCachedVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
