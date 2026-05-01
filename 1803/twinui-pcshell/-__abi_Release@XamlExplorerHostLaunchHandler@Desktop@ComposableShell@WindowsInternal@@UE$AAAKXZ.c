/*
 * XREFs of ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1801FB7E0
 * Callers:
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x1800A92B0 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ.c)
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x1800A92C0 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAK.c)
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAKXZ @ 0x1800A92D0 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAK.c)
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAKXZ @ 0x1800A92E0 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAK.c)
 * Callees:
 *     ??_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z @ 0x1801FA92C (--_G__abi_CapturePtr@Details@Platform@@QEAAPEAXI@Z.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1801FAB7C (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1801FB7AC (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_Release(__int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 40));
  if ( !v2 )
  {
    Platform::Details::__abi_CapturePtr::`scalar deleting destructor'((struct Platform::Details::__abi_CaptureBase **)(a1 + 56));
    v3 = *(Platform::Details::ControlBlock **)(a1 + 40);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
