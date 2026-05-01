/*
 * XREFs of ??0?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@1234@Upermission@01234@@Z @ 0x1801622B8
 * Callers:
 *     ??$Make@V?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@5678@@Z @ 0x1801623A4 (--$Make@V-$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInterna.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  HRESULT ApartmentType; // eax
  APTTYPE v5; // ecx
  __int64 result; // rax
  __int64 pAptQualifier; // [rsp+38h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp+18h] BYREF

  LOBYTE(pAptType) = a3;
  pAptQualifier = a2;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::IIterable<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *(_QWORD *)(a1 + 32) = 1LL;
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::IIterable<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::IIterable<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = &Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::`vftable';
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(a1 + 16) = &Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::Collections::IIterable<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Microsoft::WRL::Details::Nil>,1,0>'};
  ApartmentType = CoGetApartmentType(&pAptType, (APTTYPEQUALIFIER *)&pAptQualifier);
  v5 = pAptType;
  if ( ApartmentType < 0 )
    v5 = APTTYPE_MTA;
  pAptType = v5;
  if ( v5 == APTTYPE_MAINSTA || v5 == APTTYPE_STA )
  {
    *(_DWORD *)(a1 + 72) = 1;
    if ( a1 != -80 )
      *(_DWORD *)(a1 + 80) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
    if ( a1 != -80 )
      InitializeSRWLock((PSRWLOCK)(a1 + 80));
  }
  *(_DWORD *)(a1 + 88) = 0;
  result = a1;
  *(_DWORD *)(a1 + 96) = 0;
  return result;
}
