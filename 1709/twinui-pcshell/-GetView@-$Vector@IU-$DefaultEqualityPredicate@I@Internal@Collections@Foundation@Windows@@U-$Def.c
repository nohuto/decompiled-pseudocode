/*
 * XREFs of ?GetView@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@I@345@@Z @ 0x1801C7AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@567@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180195EA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVectorView@PEA.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::GetView(
        _DWORD *a1,
        volatile signed __int64 **a2)
{
  unsigned int v2; // edi
  volatile signed __int64 *v5; // rax
  volatile signed __int64 *v6; // rbx

  v2 = 0;
  *a2 = 0LL;
  v5 = (volatile signed __int64 *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 4) = 1LL;
    *v5 = (volatile signed __int64)&Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<unsigned int>,Windows::Foundation::Collections::IIterable<unsigned int>>::`vftable';
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<unsigned int>,Windows::Foundation::Collections::IIterable<unsigned int>>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v5 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVectorView<unsigned int>,Windows::Foundation::Collections::IIterable<unsigned int>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<unsigned int>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = (volatile signed __int64)&Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,0>::`vftable';
    *((_QWORD *)v6 + 1) = &Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,0>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v6 + 2) = &Windows::Foundation::Collections::Internal::SimpleVectorView<unsigned int,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,XWinRT::IntVersionTag,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<unsigned int>>'};
    *((_QWORD *)v6 + 5) = a1;
    if ( a1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    *((_DWORD *)v6 + 12) = 0;
    *((_DWORD *)v6 + 13) = a1[22];
    (*(void (__fastcall **)(volatile signed __int64 *))(*v6 + 8))(v6);
    *a2 = v6;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::IIterable<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
