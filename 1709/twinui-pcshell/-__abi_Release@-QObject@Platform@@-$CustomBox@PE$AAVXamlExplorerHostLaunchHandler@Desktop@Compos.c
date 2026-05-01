/*
 * XREFs of ?__abi_Release@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@UE$AAAKXZ @ 0x18014E330
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@WBI@E$AAAKXZ @ 0x18014EC10 (-__abi_Release@-QObject@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@D_ea_18014EC10.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@WCA@E$AAAKXZ @ 0x18014ED80 (-__abi_Release@-QObject@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@D_ea_18014ED80.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@W7E$AAAKXZ @ 0x18014EEC0 (-__abi_Release@-QObject@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@D_ea_18014EEC0.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@WCI@E$AAAKXZ @ 0x18014EF00 (-__abi_Release@-QObject@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@D_ea_18014EF00.c)
 *     ?__abi_Release@?QObject@Platform@@?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@2@WBA@E$AAAKXZ @ 0x18014F080 (-__abi_Release@-QObject@Platform@@-$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@D_ea_18014F080.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform____CustomBox_PE_AAVXamlExplorerHostLaunchHandler_Desktop_ComposableShell_WindowsInternal___Details_2_UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 56));
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = *(_QWORD *)(a1 + 56);
    Platform::Details::ControlBlock::ReleaseTarget((Platform::Details::ControlBlock *)v4);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
    {
      if ( *(_BYTE *)(v4 + 25) )
        Platform::Details::Heap::AlignedFree((void *)v4);
      else
        Platform::Details::Heap::Free((void *)v4);
    }
  }
  return v2;
}
