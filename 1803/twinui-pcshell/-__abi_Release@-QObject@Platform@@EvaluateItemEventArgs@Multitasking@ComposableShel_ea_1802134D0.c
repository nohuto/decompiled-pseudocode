/*
 * XREFs of ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@UE$AAAKXZ @ 0x1802134D0
 * Callers:
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@W7E$AAAKXZ @ 0x1800AB030 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Wi.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBA@E$AAAKXZ @ 0x1800AB040 (-__abi_Release@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableSh.c)
 *     ?__abi_Release@?QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@WBI@E$AAAKXZ @ 0x1800AB050 (-__abi_Release@-QObject@Platform@@EvaluateItemEventArgs@Multitasking@ComposableShel_ea_1800AB050.c)
 *     ?__abi_Release@?QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAKXZ @ 0x1800AB060 (-__abi_Release@-QObject@Platform@@SwitchItemCollectionChangedEventArgs@Multitasking_ea_1800AB060.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?Decrement@__abi_FTMWeakRefData@@QECAKXZ @ 0x1801FAB7C (-Decrement@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ @ 0x1801FB7AC (-__abi_Release@ControlBlock@Details@Platform@@UEAAKXZ.c)
 */

__int64 __fastcall ___abi_Release__QObject_Platform__EvaluateItemEventArgs_Multitasking_ComposableShell_Internal_Windows__UE_AAAKXZ(
        __int64 a1)
{
  unsigned int v2; // edi
  Platform::Details::ControlBlock *v3; // rbx

  v2 = __abi_FTMWeakRefData::Decrement((int **)(a1 + 56));
  if ( !v2 )
  {
    __abi_winrt_ptr_dtor(*(_QWORD *)(a1 + 40));
    v3 = *(Platform::Details::ControlBlock **)(a1 + 56);
    Platform::Details::ControlBlock::ReleaseTarget(v3);
    Platform::Details::ControlBlock::__abi_Release(v3);
  }
  return v2;
}
