/*
 * XREFs of ??_GCInteraction@@MEAAPEAXI@Z @ 0x180091AD4
 * Callers:
 *     ??_ECInteraction@@O7EAAPEAXI@Z @ 0x1800C6640 (--_ECInteraction@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x1800919C8 (--1CInteraction@@MEAA@XZ.c)
 */

CInteraction *__fastcall CInteraction::`scalar deleting destructor'(CInteraction *this, char a2)
{
  CInteraction::~CInteraction(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
