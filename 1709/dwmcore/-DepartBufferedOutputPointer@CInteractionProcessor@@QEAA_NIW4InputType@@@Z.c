/*
 * XREFs of ?DepartBufferedOutputPointer@CInteractionProcessor@@QEAA_NIW4InputType@@@Z @ 0x18019C274
 * Callers:
 *     ?DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z @ 0x180169330 (-DepartBufferedOutputPointer@CInteraction@@UEAA_NI@Z.c)
 *     ?DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z @ 0x1801A1990 (-DepartBufferedOutputPointer@CInteractionRoot@@UEAA_NI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B7B24 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrapper@@@Z @ 0x18019C390 (-GetInteractionContext@CInteractionProcessor@@QEBAJW4InputType@@PEAPEAUIInteractionContextWrappe.c)
 */

char __fastcall CInteractionProcessor::DepartBufferedOutputPointer(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  char v4; // si
  CNaturalAnimationScalarForceAdapater *v7; // [rsp+48h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 596);
  v4 = 0;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v7);
  CInteractionProcessor::GetInteractionContext(a1, v2);
  if ( v7 )
    v4 = (*(__int64 (__fastcall **)(CNaturalAnimationScalarForceAdapater *, _QWORD))(*(_QWORD *)v7 + 104LL))(v7, a2);
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v7);
  return v4;
}
