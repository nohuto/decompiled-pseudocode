/*
 * XREFs of ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062404
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18005968C (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x180062C0C (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18005F0B4 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x18005F2C4 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180061BF4 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800646FC (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800962D0 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
const WCHAR *__fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
        const WCHAR *a1,
        __int64 a2)
{
  int v4; // eax
  int v5; // eax
  char *StringRawBuffer; // rax
  void **v7; // rbx
  const WCHAR *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  volatile signed __int32 *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // r9
  __int64 Container; // rax
  volatile signed __int32 *v18; // rbx
  int v19; // eax
  char *v20; // rax
  void **v21; // rbx
  const WCHAR *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  volatile signed __int32 *v27; // rbx
  HSTRING v29; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+30h] [rbp-D8h] BYREF
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  const WCHAR *v34; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v35[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v37; // [rsp+78h] [rbp-90h]
  _BYTE v38[8]; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v39; // [rsp+88h] [rbp-80h]
  _BYTE v40[8]; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v41; // [rsp+98h] [rbp-70h]
  void *v42[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-50h]
  void *Src[4]; // [rsp+C0h] [rbp-48h] BYREF
  void *v46[4]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v47[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v48[32]; // [rsp+120h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v35[1] = (const WCHAR *)-2LL;
  v35[2] = a1;
  LODWORD(v33) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v30);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(a1, v30);
  LODWORD(v33) = 1;
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, &string);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xBA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v44 = 7LL;
  v43 = 0LL;
  LOWORD(v42[0]) = 0;
  if ( !WindowsIsStringEmpty(string) )
  {
    StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
    v7 = Windows::Services::TargetedContent::Internal::NormalizedString(Src, StringRawBuffer);
    if ( v42 != v7 )
    {
      if ( v44 >= 8 )
        operator delete(v42[0]);
      v44 = 7LL;
      v43 = 0LL;
      LOWORD(v42[0]) = 0;
      std::wstring::_Assign_rv(v42, v7);
    }
    if ( Src[3] >= (void *)8 )
      operator delete(Src[0]);
    v8 = (const WCHAR *)v42;
    if ( v44 >= 8 )
      v8 = (const WCHAR *)v42[0];
    v34 = v8;
    v9 = *(_QWORD *)a1;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v47, &v34);
    LOBYTE(v11) = 1;
    v12 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
            v9,
            &v36,
            *(_QWORD *)(v10 + 24),
            v11,
            (_DWORD)v29);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, v12);
    v13 = v37;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      }
    }
  }
  WindowsDeleteString(0LL);
  v29 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &v29);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  if ( (Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v30) & 0x10) != 0 )
  {
    v32 = 0LL;
    WindowsDeleteString(0LL);
    v32 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL))(a2, &v32);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    LOBYTE(v16) = 1;
    Container = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
                  *(_QWORD *)a1,
                  v38,
                  v32,
                  v16,
                  (_DWORD)v29);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, Container);
    v18 = v39;
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      }
    }
    if ( WindowsIsStringEmpty(v29) )
    {
      WindowsDeleteString(v29);
      v29 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &v29);
      if ( v19 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xCF,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v19);
    }
    WindowsDeleteString(v32);
  }
  if ( !WindowsIsStringEmpty(v29) )
  {
    v20 = (char *)WindowsGetStringRawBuffer(v29, 0LL);
    v21 = Windows::Services::TargetedContent::Internal::NormalizedString(v46, v20);
    if ( v42 != v21 )
    {
      if ( v44 >= 8 )
        operator delete(v42[0]);
      v44 = 7LL;
      v43 = 0LL;
      LOWORD(v42[0]) = 0;
      std::wstring::_Assign_rv(v42, v21);
    }
    if ( v46[3] >= (void *)8 )
      operator delete(v46[0]);
    v22 = (const WCHAR *)v42;
    if ( v44 >= 8 )
      v22 = (const WCHAR *)v42[0];
    v35[0] = v22;
    v23 = *(_QWORD *)a1;
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v48, v35);
    LOBYTE(v25) = 1;
    v26 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
            v23,
            v40,
            *(_QWORD *)(v24 + 24),
            v25,
            (_DWORD)v29);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, v26);
    v27 = v41;
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
      }
    }
  }
  WindowsDeleteString(v29);
  v29 = 0LL;
  if ( v44 >= 8 )
    operator delete(v42[0]);
  v44 = 7LL;
  v43 = 0LL;
  LOWORD(v42[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
