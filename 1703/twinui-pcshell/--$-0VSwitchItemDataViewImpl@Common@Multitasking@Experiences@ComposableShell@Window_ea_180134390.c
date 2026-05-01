/*
 * XREFs of ??$?0VSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8012345@E$AAAXPE$AAUISwitchItem@12345@W4SwitchItemProperty@12345@@Z@?$TypedEventHandler@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@P8345678@E$AAAXPE$AAUISwitchItem@45678@W4SwitchItemProperty@45678@@ZW4CallbackContext@Platform@@_N@Z @ 0x180134390
 * Callers:
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180134DE8 (-AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 * Callees:
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18013431C (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty>::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  _QWORD *v6; // rbx
  __int128 v7; // xmm6
  __int64 WeakReference; // rax
  __int64 v9; // rdi

  Platform::Delegate::Delegate(a1 + 16);
  *(_QWORD *)a1 = &Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty>::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty>::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::TypedEventHandler<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,enum WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemProperty>::`vftable';
  *(_QWORD *)(a1 + 32) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v6 = (_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 296) = a1 + 40;
  if ( a1 != -40 )
  {
    v7 = *a3;
    *v6 = &off_1802410E0;
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
