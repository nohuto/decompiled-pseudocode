/*
 * XREFs of ?__abi_Release@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x180135920
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x180135570 (-__abi_Release@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Common@Multitasking@Exper.c)
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x180135720 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@Composab.c)
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WBI@E$AAAKXZ @ 0x180135760 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experie_ea_180135760.c)
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@WCA@E$AAAKXZ @ 0x1801359A0 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Common@Multitasking@Experie_ea_1801359A0.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x180120258 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__SwitchItemCollectionChangedEventArgs_Common_Multitasking_Experiences_ComposableShell_WindowsInternal__UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 56));
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 40);
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
