/*
 * XREFs of ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180021AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x180021AAC (--1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CPayloadedAnimationPrimitiveBuffer *__fastcall CPayloadedAnimationPrimitiveBuffer::`scalar deleting destructor'(
        CPayloadedAnimationPrimitiveBuffer *this,
        char a2)
{
  CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
