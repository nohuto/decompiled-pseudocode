/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x180092160
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800919C8 (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1801A1064 (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B7B24 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1InteractionConfigurationGroup@@QEAA@XZ @ 0x1800BC9FC (--1InteractionConfigurationGroup@@QEAA@XZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(void **this)
{
  InteractionConfigurationGroup::~InteractionConfigurationGroup((InteractionConfigurationGroup *)(this + 61));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 51);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(this + 40);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 31);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(this + 20);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 11);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(this);
}
