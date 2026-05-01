/*
 * XREFs of ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1801AC970
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1801AB48C (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_OverlayHandWritingPanel@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801AD08C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_OverlayHandWritingPanel@@@wi.c)
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@I@Z @ 0x1801AF35C (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  HRESULT ApartmentType; // eax
  APTTYPE v8; // ecx
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // r9
  __int64 v15; // rdx
  __int128 v16; // xmm6
  __int128 v17; // xmm7
  int v18; // r15d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // esi
  int v23; // r15d
  __int128 v24; // xmm6
  __int128 v25; // xmm7
  int v26; // r14d
  int v27; // eax
  int v28; // eax
  __int128 v29; // xmm6
  __int128 v30; // xmm7
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int128 v35; // [rsp+38h] [rbp-89h] BYREF
  __int128 v36; // [rsp+48h] [rbp-79h]
  int v37; // [rsp+58h] [rbp-69h]
  _BYTE v38[36]; // [rsp+68h] [rbp-59h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+90h] [rbp-31h] BYREF
  __int16 v40; // [rsp+94h] [rbp-2Dh]
  __int128 v41; // [rsp+98h] [rbp-29h] BYREF
  _QWORD *v42; // [rsp+A8h] [rbp-19h]
  __int64 v43; // [rsp+B0h] [rbp-11h]
  __int128 v44[3]; // [rsp+B8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]
  APTTYPE pAptType; // [rsp+140h] [rbp+7Fh] BYREF
  int v48; // [rsp+144h] [rbp+83h]

  v43 = -2LL;
  v4 = 0LL;
  v42 = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5[4] = 1LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable';
    v5[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `IWeakReferenceSource'};
    v5[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable';
    v6[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption,KeyboardHosting::CoreKeyboardPositionAndSizeOptionEquality,KeyboardHosting::CoreKeyboardPositionAndSizeOptionLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>'};
    v6[5] = 0LL;
    *((_DWORD *)v6 + 12) = 0;
    v6[7] = 0LL;
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    v8 = pAptType;
    if ( ApartmentType < 0 )
      v8 = APTTYPE_MTA;
    pAptType = v8;
    if ( v8 == APTTYPE_MAINSTA || v8 == APTTYPE_STA )
    {
      *((_DWORD *)v6 + 18) = 1;
      if ( v6 != (_QWORD *)-80LL )
        *((_DWORD *)v6 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v6 + 18) = 0;
      if ( v6 != (_QWORD *)-80LL )
        InitializeSRWLock((PSRWLOCK)v6 + 10);
    }
    *((_DWORD *)v6 + 22) = 0;
    *((_DWORD *)v6 + 24) = 0;
    v4 = v6;
    v42 = v6;
    v9 = (int)*(float *)(a1 + 48);
    v10 = (int)(float)(*(float *)(a1 + 52) * 0.5);
    v41 = *(_OWORD *)(a1 + 40);
    KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
      a1 + 16,
      &pAptType,
      *(_QWORD *)(a1 + 32),
      &v41,
      *(_DWORD *)(a1 + 80),
      *(_DWORD *)(a1 + 76));
    memset(v38, 0, sizeof(v38));
    *(_QWORD *)v38 = 0xE00000001LL;
    *(_DWORD *)&v38[16] = v9;
    *(_DWORD *)&v38[12] = v10;
    *(_DWORD *)&v38[24] = v9;
    v11 = v48;
    *(_DWORD *)&v38[20] = v48;
    *(_WORD *)&v38[8] = 0;
    v35 = *(_OWORD *)v38;
    v36 = *(_OWORD *)&v38[16];
    v37 = *(_DWORD *)&v38[32];
    v12 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v6 + 104LL))(v6, &v35);
    v13 = v12;
    if ( v12 >= 0 )
    {
      memset(v38, 0, sizeof(v38));
      *(_QWORD *)v38 = 0x200000001LL;
      *(_DWORD *)&v38[16] = v9;
      *(_DWORD *)&v38[12] = v10;
      *(_DWORD *)&v38[24] = pAptType;
      *(_DWORD *)&v38[20] = v11;
      *(_WORD *)&v38[8] = 257;
      v16 = *(_OWORD *)v38;
      v35 = *(_OWORD *)v38;
      v17 = *(_OWORD *)&v38[16];
      v36 = *(_OWORD *)&v38[16];
      v18 = *(_DWORD *)&v38[32];
      v37 = *(_DWORD *)&v38[32];
      v19 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v6 + 104LL))(v6, &v35);
      v13 = v19;
      if ( v19 >= 0 )
      {
        v35 = v16;
        DWORD1(v35) = 10;
        v36 = v17;
        v37 = v18;
        v20 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v6 + 104LL))(v6, &v35);
        v13 = v20;
        if ( v20 >= 0 )
        {
          v35 = v16;
          DWORD1(v35) = 6;
          v36 = v17;
          v37 = v18;
          v21 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v6 + 104LL))(v6, &v35);
          v13 = v21;
          if ( v21 >= 0 )
          {
            v22 = (int)*(float *)(a1 + 104);
            v23 = (int)(*(float *)(a1 + 108) * 0.5);
            v44[0] = *(_OWORD *)(a1 + 96);
            KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
              a1 + 16,
              &v41,
              *(_QWORD *)(a1 + 88),
              v44,
              *(_DWORD *)(a1 + 136),
              *(_DWORD *)(a1 + 132));
            if ( (`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
              wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetCachedFeatureEnabledState();
            pAptType = APTTYPE_STA;
            LOBYTE(v48) = 0;
            pAptQualifier = APTTYPEQUALIFIER_NONE;
            v40 = v48;
            wil_details_FeaturePropertyCache_ReportUsageToService(
              &`wil::Feature<__WilFeatureTraits_Feature_OverlayHandWritingPanel>::GetFeaturePropertyCache'::`2'::data,
              0xAB2AA0u,
              (const struct FEATURE_LOGGED_TRAITS *)&pAptQualifier,
              0,
              3);
            memset(v38, 0, sizeof(v38));
            *(_QWORD *)v38 = 2LL;
            *(_DWORD *)&v38[16] = v22;
            *(_DWORD *)&v38[12] = v23;
            *(_DWORD *)&v38[20] = DWORD1(v41);
            *(_DWORD *)&v38[24] = v41;
            *(_WORD *)&v38[8] = 257;
            v24 = *(_OWORD *)v38;
            v35 = *(_OWORD *)v38;
            v25 = *(_OWORD *)&v38[16];
            v36 = *(_OWORD *)&v38[16];
            v26 = *(_DWORD *)&v38[32];
            v37 = *(_DWORD *)&v38[32];
            v27 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v6 + 104LL))(v6, &v35);
            v13 = v27;
            if ( v27 >= 0 )
            {
              v35 = v24;
              WORD4(v35) = 0;
              v36 = v25;
              v37 = v26;
              v28 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v6 + 104LL))(v6, &v35);
              v13 = v28;
              if ( v28 >= 0 )
              {
                v35 = v24;
                v29 = v25;
                DWORD1(v35) = 1;
                v30 = v35;
                v36 = v29;
                v37 = v26;
                v31 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v6 + 104LL))(v6, &v35);
                v13 = v31;
                if ( v31 >= 0 )
                {
                  v35 = v30;
                  WORD4(v35) = 0;
                  v36 = v29;
                  v37 = v26;
                  v32 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v6 + 104LL))(v6, &v35);
                  v13 = v32;
                  if ( v32 >= 0 )
                  {
                    v33 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 64LL))(v6, a3);
                    v13 = v33;
                    if ( v33 >= 0 )
                    {
                      v13 = 0;
                      goto LABEL_35;
                    }
                    v14 = (unsigned int)v33;
                    v15 = 119LL;
                  }
                  else
                  {
                    v14 = (unsigned int)v32;
                    v15 = 117LL;
                  }
                }
                else
                {
                  v14 = (unsigned int)v31;
                  v15 = 112LL;
                }
              }
              else
              {
                v14 = (unsigned int)v28;
                v15 = 108LL;
              }
            }
            else
            {
              v14 = (unsigned int)v27;
              v15 = 103LL;
            }
          }
          else
          {
            v14 = (unsigned int)v21;
            v15 = 71LL;
          }
        }
        else
        {
          v14 = (unsigned int)v20;
          v15 = 66LL;
        }
      }
      else
      {
        v14 = (unsigned int)v19;
        v15 = 61LL;
      }
    }
    else
    {
      v14 = (unsigned int)v12;
      v15 = 49LL;
    }
  }
  else
  {
    v13 = -2147024882;
    v14 = 2147942414LL;
    v15 = 31LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)v14);
LABEL_35:
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v13;
}
