/*
 * XREFs of ??$?0VSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8012345@E$AAAXPE$AAUISwitchItemDataSource@12345@PE$AAUISwitchItemCollectionChangedEventArgs@12345@@Z@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8345678@E$AAAXPE$AAUISwitchItemDataSource@45678@PE$AAUISwitchItemCollectionChangedEventArgs@45678@@ZW4CallbackContext@Platform@@_N@Z @ 0x18013397C
 * Callers:
 *     ?SetDataSource@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAXPE$AAUISwitchItemDataSource@23456@@Z @ 0x180135108 (-SetDataSource@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 * Callees:
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18013431C (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs __gc *>::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs __gc *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  _QWORD *v6; // rbx
  __int128 v7; // xmm6
  __int64 WeakReference; // rax
  __int64 v9; // rdi

  Platform::Delegate::Delegate(a1 + 16);
  *(_QWORD *)a1 = &Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataSource __gc *,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable';
  *(_QWORD *)(a1 + 32) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v6 = (_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 296) = a1 + 40;
  if ( a1 != -40 )
  {
    v7 = *a3;
    *v6 = &off_180241048;
    WeakReference = Platform::Details::IWeakReferenceSource::GetWeakReference((a2 + 32) & -(__int64)(a2 != 0));
    v9 = WeakReference;
    if ( WeakReference )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
    *(_QWORD *)(a1 + 48) = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *(_OWORD *)(a1 + 56) = v7;
  }
  *(_QWORD *)(a1 + 296) = v6;
  return a1;
}
