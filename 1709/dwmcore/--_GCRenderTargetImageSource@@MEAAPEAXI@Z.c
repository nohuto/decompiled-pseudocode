/*
 * XREFs of ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x18009040C
 * Callers:
 *     ??_ECRenderTargetImageSource@@O7EAAPEAXI@Z @ 0x1800C6250 (--_ECRenderTargetImageSource@@O7EAAPEAXI@Z.c)
 *     ??_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z @ 0x1800C6260 (--_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x1800903BC (--1CRenderTargetImageSource@@MEAA@XZ.c)
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
