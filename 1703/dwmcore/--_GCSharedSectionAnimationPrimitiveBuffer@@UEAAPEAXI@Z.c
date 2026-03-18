/*
 * XREFs of ??_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x1800BD7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ @ 0x1800BD77C (--1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ.c)
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
