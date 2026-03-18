/*
 * XREFs of ??_GCInteraction@@MEAAPEAXI@Z @ 0x18004B53C
 * Callers:
 *     ??_ECInteraction@@O7EAAPEAXI@Z @ 0x1800D5E50 (--_ECInteraction@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteraction@@MEAA@XZ @ 0x18004B464 (--1CInteraction@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CInteraction *__fastcall CInteraction::`scalar deleting destructor'(CInteraction *this, char a2)
{
  CInteraction::~CInteraction(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
