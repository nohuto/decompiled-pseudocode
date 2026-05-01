/*
 * XREFs of ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x18014A450
 * Callers:
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAKXZ @ 0x18014A050 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAK.c)
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAKXZ @ 0x18014A0A0 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAK.c)
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x18014A1C0 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAK.c)
 *     ?__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x18014A210 (-__abi_Release@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_Release(__int64 a1)
{
  Platform::Details::ControlBlock **v1; // r14
  unsigned int v3; // edi
  void (__fastcall ***v4)(void *, _QWORD); // rsi
  Platform::Details::ControlBlock *v5; // rbx

  v1 = (Platform::Details::ControlBlock **)(a1 + 40);
  v3 = __abi_FTMWeakRefData::Decrement(a1 + 40);
  if ( !v3 )
  {
    v4 = *(void (__fastcall ****)(void *, _QWORD))(a1 + 312);
    (**v4)(v4, 0LL);
    if ( v4 != (void (__fastcall ***)(void *, _QWORD))(a1 + 56) )
      Platform::Details::Heap::Free(v4);
    v5 = *v1;
    Platform::Details::ControlBlock::ReleaseTarget(*v1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
    {
      if ( *((_BYTE *)v5 + 25) )
        Platform::Details::Heap::AlignedFree(v5);
      else
        Platform::Details::Heap::Free(v5);
    }
  }
  return v3;
}
