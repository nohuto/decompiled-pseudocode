/*
 * XREFs of ??0VectorChangedEventArgs@Details@Collections@Platform@@QE$AAA@W4CollectionChange@2Foundation@Windows@@I@Z @ 0x18013A45C
 * Callers:
 *     ?Notify@?$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x18013AB4C (-Notify@-$Vector@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsIntern.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Platform::Collections::Details::VectorChangedEventArgs::VectorChangedEventArgs(
        __int64 a1,
        int a2,
        int a3)
{
  struct __abi_Module *v6; // rcx
  __int64 result; // rax

  Platform::Object::Object(a1 + 16);
  v6 = __abi_module;
  *(_QWORD *)a1 = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Windows::Foundation::Collections::IVectorChangedEventArgs'};
  *(_QWORD *)(a1 + 8) = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Collections::Details::__IVectorChangedEventArgsPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &Platform::Collections::Details::VectorChangedEventArgs::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  *(_QWORD *)(a1 + 56) = -1LL;
  if ( v6 )
    (**(void (__fastcall ***)(struct __abi_Module *))v6)(v6);
  result = a1;
  *(_DWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 44) = a3;
  return result;
}
