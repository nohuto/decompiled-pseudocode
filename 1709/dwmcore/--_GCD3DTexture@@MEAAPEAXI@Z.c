/*
 * XREFs of ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x1801A8AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x180082194 (--1CD3DTexture@@MEAA@XZ.c)
 */

CD3DTexture *__fastcall CD3DTexture::`scalar deleting destructor'(CD3DTexture *this, char a2)
{
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
