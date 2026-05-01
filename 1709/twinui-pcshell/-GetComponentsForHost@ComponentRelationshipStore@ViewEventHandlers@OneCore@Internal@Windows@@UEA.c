/*
 * XREFs of ?GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@PEAPEAU?$IVectorView@I@Collections@Foundation@5@@Z @ 0x1801C6390
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x1801C71BC (-equal_range@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentsForHost(
        RTL_SRWLOCK *a1,
        int *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v3; // rsi
  __int64 *v6; // rdi
  unsigned int v7; // edi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  HRESULT ApartmentType; // eax
  APTTYPE v11; // ecx
  int v13[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v15; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  APTTYPE pAptType; // [rsp+60h] [rbp+8h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+68h] [rbp+10h] BYREF

  *a3 = 0LL;
  v3 = a1 + 10;
  v13[0] = *a2;
  v13[1] = a2[1];
  v13[2] = a2[2];
  AcquireSRWLockShared(a1 + 10);
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::equal_range(
    &a1[12],
    &v14,
    v13);
  v6 = v14;
  if ( v14 == v15 )
  {
    v7 = -2140667902;
  }
  else
  {
    v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      v8[4] = 1LL;
      *v8 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<unsigned int>,Windows::Foundation::Collections::IIterable<unsigned int>>::`vftable';
      v8[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<unsigned int>,Windows::Foundation::Collections::IIterable<unsigned int>>::`vftable'{for `IWeakReferenceSource'};
      v8[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<unsigned int>,Windows::Foundation::Collections::IIterable<unsigned int>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<unsigned int>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *((_DWORD *)v9 + 10) = 0;
      *((_DWORD *)v9 + 11) = 0;
      *((_DWORD *)v9 + 12) = 0;
      v9[7] = 0LL;
      *v9 = &Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::`vftable';
      v9[1] = &Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::`vftable'{for `IWeakReferenceSource'};
      v9[2] = &Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<unsigned int>>'};
      ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
      v11 = pAptType;
      if ( ApartmentType < 0 )
        v11 = APTTYPE_MTA;
      pAptType = v11;
      if ( v11 == APTTYPE_MAINSTA || v11 == APTTYPE_STA )
      {
        *((_DWORD *)v9 + 18) = 1;
        if ( v9 != (_QWORD *)-80LL )
          *((_DWORD *)v9 + 20) = 0;
      }
      else
      {
        *((_DWORD *)v9 + 18) = 0;
        if ( v9 != (_QWORD *)-80LL )
          InitializeSRWLock((PSRWLOCK)v9 + 10);
      }
      *((_DWORD *)v9 + 22) = 0;
      *((_DWORD *)v9 + 24) = 0;
      do
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v9 + 88LL))(v9, 0LL, *((unsigned int *)v6 + 7));
        v6 = (__int64 *)*v6;
      }
      while ( v6 != v15 );
      v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v9 + 64LL))(v9, a3);
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    }
    else
    {
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x213,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)0x8007000ELL);
    }
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v7;
}
