/*
 * XREFs of ??$?0VSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@P801234@E$AAAXPE$AAUISwitchItemDataSource@1234@PE$AAUISwitchItemCollectionChangedEventArgs@1234@@Z@?$TypedEventHandler@PE$AAUISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemCollectionChangedEventArgs@2345@@Foundation@Windows@@QE$AAA@PE$AAVSwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@2@P834562@E$AAAXPE$AAUISwitchItemDataSource@4562@PE$AAUISwitchItemCollectionChangedEventArgs@4562@@ZW4CallbackContext@Platform@@_N@Z @ 0x1801699BC
 * Callers:
 *     ?SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$AAUISwitchItemDataSource@2345@@Z @ 0x18016C710 (-SetDataSource@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAXPE$A.c)
 * Callees:
 *     ?GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18016A67C (-GetWeakReference@IWeakReferenceSource@Details@Platform@@UE$AAAPE$AAUIWeakReference@23@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>(
        __int64 a1,
        __int64 a2,
        __int128 *a3)
{
  _QWORD *v6; // rbx
  __int128 v7; // xmm6
  __int64 WeakReference; // rax
  __int64 v9; // rdi

  Platform::Delegate::Delegate(a1 + 16);
  *(_QWORD *)a1 = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::TypedEventHandler<Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource __gc *,Windows::Internal::ComposableShell::Multitasking::ISwitchItemCollectionChangedEventArgs __gc *>::`vftable';
  *(_QWORD *)(a1 + 32) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  v6 = (_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 296) = a1 + 40;
  if ( a1 != -40 )
  {
    v7 = *a3;
    *v6 = &off_1802B4988;
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
