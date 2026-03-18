/*
 * XREFs of ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x180148F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800B4C74 (--1CRenderTarget@@MEAA@XZ.c)
 */

CRenderTarget *__fastcall CRenderTarget::`scalar deleting destructor'(CRenderTarget *this, char a2)
{
  CRenderTarget::~CRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
