/*
 * XREFs of ?GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180015648
 * Callers:
 *     ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x180038FE0 (-get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180015128 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041970 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180041990 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetGlobalRelatedProcessesFromGameConfigStore(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *v7; // rbx
  HRESULT ApartmentType; // eax
  APTTYPE v9; // ecx
  __int64 v11; // rdx
  WCHAR *v12; // rax
  WCHAR *v13; // rdi
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+80h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, 5LL, 0LL, &v18);
  if ( (_WORD)v4 != 2 )
  {
    if ( (v4 & 0x80000000) != 0 )
    {
      v11 = 551LL;
      goto LABEL_17;
    }
    v12 = (WCHAR *)operator new[](v18 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( !v12 )
    {
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_28;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, WCHAR *, unsigned int *))(*(_QWORD *)a1 + 80LL))(
            a1,
            5LL,
            v12,
            &v18);
    v4 = v15;
    if ( v15 >= 0 )
    {
      v15 = DeserializeRelatedProcessArray(v13, v18, a2);
      v4 = v15;
      if ( v15 >= 0 )
      {
        v4 = 0;
LABEL_28:
        if ( v13 )
          operator delete(v13, v14);
        return v4;
      }
      v16 = 559LL;
    }
    else
    {
      v16 = 558LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_28;
  }
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *a2 = 0LL;
  v6 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( !v6 )
  {
    v4 = -2147024882;
    v11 = 546LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v4);
    return v4;
  }
  v6[4] = 1LL;
  *v6 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
  v6[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
  v6[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  *v6 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
  v6[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
  v6[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
  v6[5] = 0LL;
  *((_DWORD *)v6 + 12) = 0;
  v6[7] = 0LL;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v9 = pAptType;
  if ( ApartmentType < 0 )
    v9 = APTTYPE_MTA;
  pAptType = v9;
  if ( v9 == APTTYPE_MAINSTA || v9 == APTTYPE_STA )
  {
    *((_DWORD *)v7 + 18) = 1;
    if ( v7 != (void *)-80LL )
      *((_DWORD *)v7 + 20) = 0;
  }
  else
  {
    *((_DWORD *)v7 + 18) = 0;
    if ( v7 != (void *)-80LL )
      InitializeSRWLock((PSRWLOCK)v7 + 10);
  }
  *((_DWORD *)v7 + 22) = 0;
  *((_DWORD *)v7 + 24) = 0;
  *a2 = (__int64)v7;
  return 0LL;
}
