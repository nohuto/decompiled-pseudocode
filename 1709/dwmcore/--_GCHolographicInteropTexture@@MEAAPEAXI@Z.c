/*
 * XREFs of ??_GCHolographicInteropTexture@@MEAAPEAXI@Z @ 0x1801BE310
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1801BDF1C (--1CHolographicInteropTexture@@MEAA@XZ.c)
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::`scalar deleting destructor'(
        CHolographicInteropTexture *this,
        char a2)
{
  CHolographicInteropTexture::~CHolographicInteropTexture(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
