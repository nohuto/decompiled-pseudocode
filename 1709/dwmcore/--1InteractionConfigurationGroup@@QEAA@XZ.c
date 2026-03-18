/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800BC9FC
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x180092160 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x180199E84 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 1);
}
