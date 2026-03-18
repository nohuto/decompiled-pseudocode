/*
 * XREFs of ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x180147E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180027524 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::`vector deleting destructor'(
        COffScreenRenderTarget *this,
        char a2)
{
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
