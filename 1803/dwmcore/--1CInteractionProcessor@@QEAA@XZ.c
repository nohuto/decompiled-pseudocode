/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x180028CB0
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800285B0 (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1801D9BAC (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180025008 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800C39F0 (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CNaturalAnimationScalarForceAdapater **this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup((InteractionConfigurationGroup *)(this + 81));
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 71);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(this + 60);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 51);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(this + 40);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 31);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(this + 20);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 11);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(this);
}
