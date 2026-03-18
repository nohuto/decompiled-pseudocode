/*
 * XREFs of ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180199E84
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180199F6C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x1801A50CC (RemoveCountFromEndOfArrayAndFree.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800BC9FC (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 */

void **__fastcall InteractionConfigurationGroup::`scalar deleting destructor'(void **this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup(this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
