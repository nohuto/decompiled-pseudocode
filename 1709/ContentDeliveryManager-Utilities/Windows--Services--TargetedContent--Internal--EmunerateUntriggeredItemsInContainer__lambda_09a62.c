/*
 * XREFs of Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf___ @ 0x180066488
 * Callers:
 *     ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x180063788 (-GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettings.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001AE18 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@QEAA@XZ @ 0x18003BCB0 (--1-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$shared_ptr@VIS.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x1800617CC (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800618C4 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062E60 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800647A0 (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180066F5C (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$s.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x180067968 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64_ @ 0x180068848 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180068848.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800964F0 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x180096650 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 *     ??0?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@1@@Z @ 0x180096C2C (--0-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$s.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
char __fastcall Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  int v7; // eax
  char v8; // r14
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  unsigned __int64 v13; // r9
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v16; // rdx
  __int64 (__fastcall ***v17)(__int64, GUID *, __int64 *); // rsi
  __int64 (__fastcall **v18)(__int64, GUID *, __int64 *); // rbx
  __int64 *v19; // rax
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  int HasKey; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v23; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v25; // r9
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 *v37; // rsi
  __int64 *v38; // rbx
  _QWORD *v39; // rax
  __int64 **v40; // rcx
  __int64 *j; // rax
  __int64 *i; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  void (__fastcall ***v45)(_QWORD, GUID *, _QWORD *); // rcx
  volatile signed __int32 *v46; // rbx
  int v48[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+30h] [rbp-D8h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v50; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-C0h] BYREF
  void (__fastcall ***v53)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v54)(__int64, GUID *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h]
  __int64 v56; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+70h] [rbp-98h] BYREF
  __int64 v58; // [rsp+78h] [rbp-90h]
  __int64 v59; // [rsp+88h] [rbp-80h]
  __int64 *v60; // [rsp+90h] [rbp-78h] BYREF
  __int64 v61; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v62[5]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v63[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v64; // [rsp+D0h] [rbp-38h]
  __int64 v65; // [rsp+D8h] [rbp-30h] BYREF
  void *v66[4]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v67[2]; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v62[2] = -2LL;
  v62[3] = a1;
  v4 = **(_QWORD **)CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, v63);
  v59 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = v64;
  if ( v64 )
  {
    if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    v4 = v59;
  }
  v53 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v4)(v4, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v53);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v52 = 0LL;
  (**v53)(v53, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v52);
  v49 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 48LL))(v52, &v49);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = 1;
  LOBYTE(v48[0]) = 1;
  while ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 56LL))(v49, v48) >= 0 && LOBYTE(v48[0]) )
  {
    v51 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 48LL))(v49, &v51);
    v10 = retaddr;
    if ( v9 < 0 )
      goto LABEL_64;
    v54 = 0LL;
    LODWORD(v55) = 0;
    v60 = (__int64 *)&v54;
    v61 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v51 + 56LL))(v51, &v61);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_63;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v60);
    v13 = (unsigned int)v55;
    if ( (int)v55 >= 0 )
    {
      if ( (_DWORD)v55 )
      {
        if ( (_DWORD)v55 == 1 || (_DWORD)v55 == 3 )
        {
          v48[1] = 13;
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), int *))(*v54)[6])(
                  v54,
                  &v48[1]);
          v13 = (unsigned int)v14;
          if ( v14 < 0 )
            goto LABEL_26;
        }
      }
      else
      {
        v48[1] = 0;
      }
      v13 = 0LL;
    }
LABEL_26:
    v15 = retaddr;
    if ( (v13 & 0x80000000) != 0LL )
      goto LABEL_62;
    v16 = 0LL;
    v50 = 0LL;
    if ( v48[1] == 13 )
    {
      v17 = v54;
      v18 = *v54;
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>((__int64 *)&v50);
      v20 = (*v18)((__int64)v17, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, v19);
      v16 = v50;
    }
    else
    {
      v20 = -2147418113;
    }
    v21 = retaddr;
    if ( v20 < 0 )
      goto LABEL_61;
    CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
      (CreativeFramework::Triggers::PropertySetHelper *)&v57,
      v16);
    BYTE1(v48[0]) = 0;
    HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
               &v57,
               L"executed",
               (bool *)v48 + 1);
    if ( HasKey < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)HasKey);
LABEL_61:
      wil::details::in1diag3::_Throw_Hr(
        v21,
        (void *)0x94,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v20);
LABEL_62:
      wil::details::in1diag3::_Throw_Hr(
        v15,
        (void *)0x92,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)v13);
LABEL_63:
      wil::details::in1diag3::_Throw_Hr(
        v12,
        (void *)0x90,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v11);
LABEL_64:
      wil::details::in1diag3::_Throw_Hr(
        v10,
        (void *)0x8D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v9);
      break;
    }
    if ( !BYTE1(v48[0]) )
    {
      v56 = 0LL;
      TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                         (Windows::Services::TargetedContent::Internal *)&v57,
                                         (struct CreativeFramework::Triggers::PropertySetHelper *)&v56,
                                         v23);
      if ( TriggerRegistrationFromSetting < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x161,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)TriggerRegistrationFromSetting);
LABEL_49:
        if ( v29 )
        {
          v58 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        v33 = v57;
        if ( v57 )
        {
          v57 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        v34 = (__int64)v50;
        if ( v50 )
        {
          v50 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        if ( v54 && (((_DWORD)v55 - 3) & 0xFFFFFFFB) == 0 )
          ((void (*)(void))(*v54)[2])();
        v35 = v51;
        if ( v51 )
        {
          v51 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
        break;
      }
      v26 = v56;
      v56 = 0LL;
      LOBYTE(v25) = 1;
      v27 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::InsertAtInternal(
              *a2,
              0LL,
              v26,
              v25);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x162,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v27);
        __debugbreak();
      }
    }
    v28 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 64LL))(v49, v48);
    v29 = v58;
    if ( v28 < 0 )
      goto LABEL_49;
    if ( v58 )
    {
      v58 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = v57;
    if ( v57 )
    {
      v57 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = (__int64)v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    if ( v54 && (((_DWORD)v55 - 3) & 0xFFFFFFFB) == 0 )
      ((void (*)(void))(*v54)[2])();
    v32 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
  }
  v36 = *a1;
  CreativeFramework::CommonHelper::SettingsContainer::ResolveContainers((CreativeFramework::CommonHelper::SettingsContainer *)*a1);
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(
    v62,
    v36 + 16);
  v37 = (__int64 *)v62[0];
  v38 = *(__int64 **)v62[0];
  while ( v38 != v37 )
  {
    v66[3] = (void *)7;
    v66[2] = 0LL;
    LOWORD(v66[0]) = 0;
    std::wstring::assign(v66, (void **)v38 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
      v67,
      v38 + 8);
    v39 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
            &v65,
            v67);
    v8 = Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf______ptr64_(
           v39,
           a2);
    if ( !v8 )
    {
      std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>::~pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>((__int64)v66);
      break;
    }
    std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>::~pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>((__int64)v66);
    if ( !*((_BYTE *)v38 + 25) )
    {
      v40 = (__int64 **)v38[2];
      if ( *((_BYTE *)v40 + 25) )
      {
        for ( i = (__int64 *)v38[1]; !*((_BYTE *)i + 25) && v38 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v38 = i;
        v38 = i;
      }
      else
      {
        v38 = (__int64 *)v38[2];
        for ( j = *v40; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v38 = j;
      }
    }
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>(v62);
  v43 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v44 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  v45 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v45)[2])(v45);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v46 = (volatile signed __int32 *)a1[1];
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
      if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
    }
  }
  return v8;
}
