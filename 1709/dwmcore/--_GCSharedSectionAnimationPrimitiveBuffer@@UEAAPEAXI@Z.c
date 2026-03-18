/*
 * XREFs of ??_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x18002D900
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ @ 0x18002D8C0 (--1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSharedSectionAnimationPrimitiveBuffer *__fastcall CSharedSectionAnimationPrimitiveBuffer::`scalar deleting destructor'(
        CSharedSectionAnimationPrimitiveBuffer *this,
        char a2)
{
  CSharedSectionAnimationPrimitiveBuffer::~CSharedSectionAnimationPrimitiveBuffer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
