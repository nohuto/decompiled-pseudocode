/*
 * XREFs of ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@W4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@@Z @ 0x1801A47DC
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18019BA5C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x18019CC38 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(
        __int64 a1,
        __m128i *a2,
        unsigned int a3)
{
  __m128i v4; // xmm1
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  HRESULT ApartmentType; // eax
  int v12; // ecx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD v22[2]; // [rsp+30h] [rbp-20h] BYREF
  float v23[4]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  _QWORD *pAptType; // [rsp+90h] [rbp+40h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+98h] [rbp+48h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+58h] BYREF

  v22[1] = -2LL;
  v22[0] = 0LL;
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v23[0] = (float)(int)v5;
  v23[1] = (float)SHIDWORD(v5);
  v4.m128i_i64[0] = _mm_srli_si128(v4, 8).m128i_u64[0];
  v23[2] = (float)(v4.m128i_i32[0] - v5 + 1);
  v23[3] = (float)(v4.m128i_i32[1] - HIDWORD(v5) + 1);
  v6 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 32) + 64LL))(
         *(_QWORD *)(a1 + 32),
         v23,
         a3,
         v22);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2E3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_29;
  }
  v27 = 0LL;
  v8 = 0LL;
  pAptType = 0LL;
  v9 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    v14 = 2147942414LL;
    v15 = 742LL;
    goto LABEL_24;
  }
  v9[4] = 1LL;
  *v9 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::IIterable<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::`vftable';
  v9[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::IIterable<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::`vftable'{for `IWeakReferenceSource'};
  v9[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::IIterable<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v10 = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::`vftable';
  v10[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::`vftable'{for `IWeakReferenceSource'};
  v10[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>'};
  v10[5] = 0LL;
  *((_DWORD *)v10 + 12) = 0;
  v10[7] = 0LL;
  ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
  v12 = (int)pAptType;
  if ( ApartmentType < 0 )
    v12 = 1;
  LODWORD(pAptType) = v12;
  if ( v12 == 3 || !v12 )
  {
    *((_DWORD *)v10 + 18) = 1;
    if ( v10 != (_QWORD *)-80LL )
      *((_DWORD *)v10 + 20) = 0;
  }
  else
  {
    *((_DWORD *)v10 + 18) = 0;
    if ( v10 != (_QWORD *)-80LL )
      InitializeSRWLock((PSRWLOCK)v10 + 10);
  }
  *((_DWORD *)v10 + 22) = 0;
  *((_DWORD *)v10 + 24) = 0;
  v8 = v10;
  pAptType = v10;
  v13 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v10 + 104LL))(v10, v22[0]);
  v7 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v15 = 743LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)v14);
    goto LABEL_25;
  }
  v16 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v10 + 64LL))(v10, &v27);
  v7 = v17;
  if ( v17 < 0 )
  {
    v14 = (unsigned int)v17;
    v15 = 744LL;
    goto LABEL_24;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 72LL))(*(_QWORD *)(a1 + 32), v27);
  v7 = v18;
  if ( v18 < 0 )
  {
    v14 = (unsigned int)v18;
    v15 = 745LL;
    goto LABEL_24;
  }
  v7 = 0;
LABEL_25:
  v19 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
LABEL_29:
  v20 = v22[0];
  if ( v22[0] )
  {
    v22[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v7;
}
