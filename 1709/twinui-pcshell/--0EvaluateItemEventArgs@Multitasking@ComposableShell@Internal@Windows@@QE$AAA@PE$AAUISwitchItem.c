/*
 * XREFs of ??0EvaluateItemEventArgs@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@PE$AAUISwitchItem@1234@W4SwitchItemInclusion@1234@@Z @ 0x18016AE3C
 * Callers:
 *     ?InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$AAA?AW4SwitchItemInclusion@2345@PE$AAUISwitchItem@2345@@Z @ 0x18016B334 (-InternalEvaluateItem@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@AE$A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::EvaluateItemEventArgs(
        __int64 a1,
        __int64 a2)
{
  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::__IEvaluateItemEventArgsPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs'};
  *(_QWORD *)(a1 + 16) = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &Windows::Internal::ComposableShell::Multitasking::EvaluateItemEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 64) = -1LL;
  if ( __abi_module )
    (**(void (__fastcall ***)(struct __abi_Module *))__abi_module)(__abi_module);
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 2;
  return a1;
}
