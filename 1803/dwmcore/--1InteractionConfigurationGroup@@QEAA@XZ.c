/*
 * XREFs of ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800C39F0
 * Callers:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x180028CB0 (--1CInteractionProcessor@@QEAA@XZ.c)
 *     ??_GInteractionConfigurationGroup@@QEAAPEAXI@Z @ 0x1801D2688 (--_GInteractionConfigurationGroup@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall InteractionConfigurationGroup::~InteractionConfigurationGroup(InteractionConfigurationGroup *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 72);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 8);
}
