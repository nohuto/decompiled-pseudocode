/*
 * XREFs of ??0SwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItem@12345@W4SwitchItemCollectionChangedEventType@12345@@Z @ 0x1801363FC
 * Callers:
 *     ?RemoveSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180133AFC (-RemoveSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Windows.c)
 *     ?OnSourceCollectionChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItemDataSource@23456@PE$AAUISwitchItemCollectionChangedEventArgs@23456@@Z @ 0x180133C10 (-OnSourceCollectionChanged@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShel.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180134DE8 (-AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     ?UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPEAUDataViewItemState@123456@@Z @ 0x1801368D0 (-UpdateItemState@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::SwitchItemCollectionChangedEventArgs(
        __int64 a1,
        __int64 a2,
        int a3)
{
  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::__ISwitchItemCollectionChangedEventArgsPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemCollectionChangedEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 64) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = a3;
  return a1;
}
