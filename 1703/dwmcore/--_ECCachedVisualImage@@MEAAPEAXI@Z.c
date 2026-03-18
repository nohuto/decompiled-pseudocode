/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x180048310
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x1800D5DD0 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18004827C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::`vector deleting destructor'(CCachedVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
