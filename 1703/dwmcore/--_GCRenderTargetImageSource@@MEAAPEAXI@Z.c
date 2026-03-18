/*
 * XREFs of ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x1800166DC
 * Callers:
 *     ??_ECRenderTargetImageSource@@O7EAAPEAXI@Z @ 0x1800D5950 (--_ECRenderTargetImageSource@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180016690 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::`scalar deleting destructor'(
        CRenderTargetImageSource *this,
        char a2)
{
  CRenderTargetImageSource::~CRenderTargetImageSource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
