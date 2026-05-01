/*
 * XREFs of ??0EvaluateItemEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUISwitchItem@12345@W4SwitchItemInclusion@12345@@Z @ 0x180135A7C
 * Callers:
 *     ?InternalEvaluateItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAA?AW4SwitchItemInclusion@23456@PE$AAUISwitchItem@23456@@Z @ 0x180135F94 (-InternalEvaluateItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Multitasking::Common::EvaluateItemEventArgs::EvaluateItemEventArgs(
        __int64 a1,
        __int64 a2)
{
  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::EvaluateItemEventArgs::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::__IEvaluateItemEventArgsPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::EvaluateItemEventArgs::`vftable'{for `WindowsInternal::ComposableShell::Experiences::Multitasking::Common::IEvaluateItemEventArgs'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::EvaluateItemEventArgs::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::EvaluateItemEventArgs::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &WindowsInternal::ComposableShell::Experiences::Multitasking::Common::EvaluateItemEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 64) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 2;
  return a1;
}
