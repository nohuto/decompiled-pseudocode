/*
 * XREFs of ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180154F78
 * Callers:
 *     ??$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801530D0 (--$MakeAndInitialize@VCActionCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EFB90 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F5DF4 (--1-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ.c)
 *     wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___ @ 0x1801534F4 (wil--details--ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___--_ScopeExitFn__lambda_d721.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x1801548CC (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ @ 0x180156390 (-SubscribeToShellReadyWnf@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180306F94 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180307E30 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1803092EC (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CActionCenterExperienceManager::RuntimeClassInitialize(
        CActionCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rbx
  int ready; // eax
  __int64 v9; // rdx
  _QWORD *v10; // r14
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v12; // rax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v13; // r8
  __int64 v14; // rax
  UAPViewWrapper *v16; // [rsp+38h] [rbp-29h] BYREF
  __int64 v17[2]; // [rsp+40h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-11h] BYREF
  HSTRING v19; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER v20; // [rsp+70h] [rbp+Fh] BYREF
  HSTRING v21; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v17[1] = -2LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ActionCenter",
    0x2Eu,
    0x2Du);
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v20,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CActionCenterExperienceManager *)((char *)this + 120),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v21,
         v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    hstringHeader.Reserved.Reserved1 = this;
    hstringHeader.Reserved.Reserved2[8] = 1;
    v17[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
    v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           v17);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
LABEL_36:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(v17);
      wil::details::ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___::_ScopeExitFn__lambda_d72167afb87ac1c2994ac41ac0cc6b0f___(&hstringHeader);
      return v5;
    }
    v16 = 0LL;
    v7 = v17[0];
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v20,
      L"Windows.Internal.ShellExperience.ToastCenter",
      0x2Du,
      0x2Cu);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v16);
    ready = (*(__int64 (__fastcall **)(__int64, HSTRING, UAPViewWrapper **))(*(_QWORD *)v7 + 48LL))(v7, v21, &v16);
    v5 = ready;
    if ( ready >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
      ready = (**(__int64 (__fastcall ***)(UAPViewWrapper *, GUID *, char *))v16)(
                v16,
                &GUID_8b6ebc6f_30f2_401b_a050_9f0b7f35f35d,
                (char *)this + 528);
      v5 = ready;
      if ( ready >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 54);
        ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                  a2,
                  &IID_IImmersiveSessionIdleDetector,
                  &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                  (char *)this + 432);
        v5 = ready;
        if ( ready >= 0 )
        {
          ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 54) + 32LL))(
                    *((_QWORD *)this + 54),
                    ((unsigned __int64)this + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
                    (char *)this + 440);
          v5 = ready;
          if ( ready >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 61);
            ready = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                      a2,
                      &SID_IImmersiveMonitorService,
                      &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                      (char *)this + 488);
            v5 = ready;
            if ( ready >= 0 )
            {
              ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 61) + 24LL))(
                        *((_QWORD *)this + 61),
                        ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
                        (char *)this + 472);
              v5 = ready;
              if ( ready >= 0 )
              {
                v10 = (_QWORD *)((char *)this + 480);
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 60);
                ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                          a2,
                          &IID_IImmersiveWindowMessageService,
                          &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                          (char *)this + 480);
                v5 = ready;
                if ( ready >= 0 )
                {
                  ready = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v10 + 24LL))(
                            *v10,
                            0LL,
                            ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
                            (char *)this + 464);
                  v5 = ready;
                  if ( ready >= 0 )
                  {
                    ready = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v10 + 24LL))(
                              *v10,
                              26LL,
                              ((unsigned __int64)this + 64) & -(__int64)(this != 0LL),
                              (char *)this + 468);
                    v5 = ready;
                    if ( ready >= 0 )
                    {
                      lpVtbl = a2->lpVtbl;
                      v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>((__int64 *)this + 62);
                      ready = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
                                a2,
                                &IID_IRealmActivationHistory,
                                &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
                                v12);
                      v5 = ready;
                      if ( ready >= 0 )
                      {
                        ready = CActionCenterExperienceManager::SubscribeToShellReadyWnf(this);
                        v5 = ready;
                        if ( ready >= 0 )
                        {
                          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
                          ready = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                    (ExperienceManagerUtils *)a2,
                                    (struct IServiceProvider *)this + 14,
                                    v13);
                          v5 = ready;
                          if ( ready >= 0 )
                          {
                            ready = CActionCenterExperienceManager::OnDpiOrHighContrastChanged(this);
                            v5 = ready;
                            if ( ready >= 0 )
                            {
                              v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                                      (__int64)&v20,
                                      (const WCHAR **)&off_180322B38);
                              ready = CSingleViewShellExperience::AddTestAumid(
                                        (CActionCenterExperienceManager *)((char *)this + 120),
                                        *(HSTRING *)(v14 + 24));
                              v5 = ready;
                              if ( ready >= 0 )
                              {
                                hstringHeader.Reserved.Reserved2[8] = 0;
                                v5 = 0;
                                goto LABEL_35;
                              }
                              v9 = 248LL;
                            }
                            else
                            {
                              v9 = 247LL;
                            }
                          }
                          else
                          {
                            v9 = 246LL;
                          }
                        }
                        else
                        {
                          v9 = 245LL;
                        }
                      }
                      else
                      {
                        v9 = 243LL;
                      }
                    }
                    else
                    {
                      v9 = 241LL;
                    }
                  }
                  else
                  {
                    v9 = 240LL;
                  }
                }
                else
                {
                  v9 = 238LL;
                }
              }
              else
              {
                v9 = 234LL;
              }
            }
            else
            {
              v9 = 233LL;
            }
          }
          else
          {
            v9 = 231LL;
          }
        }
        else
        {
          v9 = 230LL;
        }
      }
      else
      {
        v9 = 228LL;
      }
    }
    else
    {
      v9 = 226LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready);
LABEL_35:
    Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>(&v16);
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
