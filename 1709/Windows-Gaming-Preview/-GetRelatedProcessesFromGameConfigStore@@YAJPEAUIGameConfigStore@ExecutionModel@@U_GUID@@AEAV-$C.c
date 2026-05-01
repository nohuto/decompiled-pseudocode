/*
 * XREFs of ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800152B4
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800373A8 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
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
__int64 __fastcall GetRelatedProcessesFromGameConfigStore(__int64 a1, __int128 *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  void *v9; // rbx
  HRESULT ApartmentType; // eax
  APTTYPE v11; // ecx
  __int64 v13; // rdx
  WCHAR *v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int128 v19; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v21; // [rsp+A0h] [rbp+40h] BYREF
  APTTYPE pAptType; // [rsp+A8h] [rbp+48h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+B8h] [rbp+58h] BYREF

  v21 = 0;
  v18 = *a2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, int *))(*(_QWORD *)a1 + 64LL))(
         a1,
         &v18,
         22LL,
         0LL,
         &v21);
  if ( (_WORD)v6 != 2 )
  {
    if ( (v6 & 0x80000000) != 0 )
    {
      v13 = 499LL;
      goto LABEL_17;
    }
    v14 = (WCHAR *)operator new[]((unsigned int)v21 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v14 )
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_28;
    }
    v19 = *a2;
    v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, WCHAR *, int *))(*(_QWORD *)a1 + 64LL))(
            a1,
            &v19,
            22LL,
            v14,
            &v21);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v16 = DeserializeRelatedProcessArray(v14, v21, a3);
      v6 = v16;
      if ( v16 >= 0 )
      {
        v6 = 0;
LABEL_28:
        if ( v14 )
          operator delete(v14, v15);
        return v6;
      }
      v17 = 507LL;
    }
    else
    {
      v17 = 506LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_28;
  }
  v7 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *a3 = 0LL;
  v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
    v13 = 494LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v6);
    return v6;
  }
  v8[4] = 1LL;
  *v8 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
  v8[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
  v8[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  *v8 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
  v8[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
  v8[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
  v8[5] = 0LL;
  *((_DWORD *)v8 + 12) = 0;
  v8[7] = 0LL;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v11 = pAptType;
  if ( ApartmentType < 0 )
    v11 = APTTYPE_MTA;
  pAptType = v11;
  if ( v11 == APTTYPE_MAINSTA || v11 == APTTYPE_STA )
  {
    *((_DWORD *)v9 + 18) = 1;
    if ( v9 != (void *)-80LL )
      *((_DWORD *)v9 + 20) = 0;
  }
  else
  {
    *((_DWORD *)v9 + 18) = 0;
    if ( v9 != (void *)-80LL )
      InitializeSRWLock((PSRWLOCK)v9 + 10);
  }
  *((_DWORD *)v9 + 22) = 0;
  *((_DWORD *)v9 + 24) = 0;
  *a3 = (__int64)v9;
  return 0LL;
}
