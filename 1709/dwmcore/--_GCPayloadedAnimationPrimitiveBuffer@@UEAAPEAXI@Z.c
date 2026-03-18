/*
 * XREFs of ??_GCPayloadedAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x1801874E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ @ 0x1801874B4 (--1CPayloadedAnimationPrimitiveBuffer@@UEAA@XZ.c)
 */

void **__fastcall CPayloadedAnimationPrimitiveBuffer::`scalar deleting destructor'(void **this, char a2)
{
  CPayloadedAnimationPrimitiveBuffer::~CPayloadedAnimationPrimitiveBuffer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
