/*
 * XREFs of ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180076D90
 * Callers:
 *     ??_ECDecodeBitmap@@WFI@EAAPEAXI@Z @ 0x1800C6240 (--_ECDecodeBitmap@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18008B5D4 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::`vector deleting destructor'(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
