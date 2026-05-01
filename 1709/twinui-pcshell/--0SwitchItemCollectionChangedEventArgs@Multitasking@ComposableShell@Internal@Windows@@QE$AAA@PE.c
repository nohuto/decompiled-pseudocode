/*
 * XREFs of ??0SwitchItemCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemCollectionChangedEventType@1234@@Z @ 0x18016C2DC
 * Callers:
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x180169FB0 (-RemoveSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXP.c)
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItemDataSource@2345@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Z @ 0x18016A0E0 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPEAUDataViewItemState@12345@@Z @ 0x18016A7FC (-UpdateItemState@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$AAUISwitchItem@2345@@Z @ 0x18016C39C (-AddSwitchItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAAXPE$A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
        __int64 a1,
        __int64 a2,
        int a3)
{
  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::__ISwitchItemCollectionChangedEventArgsPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs'};
  *(_QWORD *)(a1 + 16) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemCollectionChangedEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 64) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = a3;
  return a1;
}
