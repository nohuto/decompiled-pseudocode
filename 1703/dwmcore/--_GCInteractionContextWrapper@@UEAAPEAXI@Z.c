/*
 * XREFs of ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x1800B3BD0
 * Callers:
 *     ??_ECInteractionContextWrapper@@W7EAAPEAXI@Z @ 0x1800D5EE0 (--_ECInteractionContextWrapper@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800B3B14 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::`scalar deleting destructor'(
        CInteractionContextWrapper *this,
        char a2)
{
  CInteractionContextWrapper::~CInteractionContextWrapper(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
