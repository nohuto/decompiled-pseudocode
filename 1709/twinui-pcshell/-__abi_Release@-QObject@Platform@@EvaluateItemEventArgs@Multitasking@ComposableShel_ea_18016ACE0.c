/*
 * XREFs of ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x18016ACE0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAKXZ @ 0x18016A930 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Wi.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAKXZ @ 0x18016AAE0 (-__abi_Release@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableSh.c)
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAKXZ @ 0x18016AB20 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShel_ea_18016AB20.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAKXZ @ 0x18016AD60 (-__abi_Release@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking_ea_18016AD60.c)
 * Callees:
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x18014A798 (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__EvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAKXZ(
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
