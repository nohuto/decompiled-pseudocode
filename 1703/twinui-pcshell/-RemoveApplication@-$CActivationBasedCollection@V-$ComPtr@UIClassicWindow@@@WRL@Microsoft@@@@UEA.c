/*
 * XREFs of ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x180037B80
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180034A10 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x1800354E8 (-_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOpti.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::RemoveApplication(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( a2 < *(_QWORD *)(a1 + 16) )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v5 = *(_QWORD *)(v4 + 8 * a2);
    if ( v5 )
    {
      *(_QWORD *)(v4 + 8 * a2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( a2 != v6 - 1 )
      memmove(
        (void *)(*(_QWORD *)(a1 + 8) + 8 * a2),
        (const void *)(*(_QWORD *)(a1 + 8) + 8 * a2 + 8),
        8 * (v6 - a2) - 8);
    --*(_QWORD *)(a1 + 16);
  }
}
