/*
 * XREFs of ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x180021730
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x1800216E0 (--1CD3DConstantBuffer@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::`vector deleting destructor'(CD3DConstantBuffer *this, char a2)
{
  CD3DConstantBuffer::~CD3DConstantBuffer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
