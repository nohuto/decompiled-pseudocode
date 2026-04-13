/*
 * XREFs of ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180061DD4
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18005968C (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001AE18 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x180030A74 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800610B4 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x1800617CC (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800618C4 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180061CD8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800648AC (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800964F0 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
HRESULT __fastcall Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  PCWSTR StringRawBuffer; // rax
  HSTRING v5; // rsi
  struct Windows::Foundation::Collections::IPropertySet *v6; // rbx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(__int64, GUID *, __int64 *); // rsi
  __int64 (__fastcall **v14)(__int64, GUID *, __int64 *); // rdi
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  volatile signed __int32 *v22; // rbx
  HRESULT result; // eax
  volatile signed __int32 *v24; // rbx
  __int64 (__fastcall ***v25)(__int64, GUID *, __int64 *); // [rsp+28h] [rbp-49h] BYREF
  int v26; // [rsp+30h] [rbp-41h]
  __int64 v27; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string; // [rsp+40h] [rbp-31h] BYREF
  __int64 v29; // [rsp+48h] [rbp-29h] BYREF
  __int64 v30; // [rsp+50h] [rbp-21h]
  __int64 v31; // [rsp+60h] [rbp-11h]
  __int64 *v32; // [rsp+68h] [rbp-9h] BYREF
  __int64 v33; // [rsp+70h] [rbp-1h] BYREF
  _QWORD *v34; // [rsp+78h] [rbp+7h] BYREF
  volatile signed __int32 *v35; // [rsp+80h] [rbp+Fh]
  __int64 v36; // [rsp+88h] [rbp+17h]
  _QWORD v37[7]; // [rsp+90h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v39; // [rsp+E8h] [rbp+77h] BYREF
  __int64 v40; // [rsp+F0h] [rbp+7Fh] BYREF

  v36 = -2LL;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  v3 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         v37,
         a1);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v3, (__int64)StringRawBuffer) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v34);
  v5 = string;
  v6 = 0LL;
  v31 = 0LL;
  v40 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v34)(
         *v34,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v40);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v7);
LABEL_5:
    v9 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_37;
  }
  v25 = 0LL;
  v26 = 0;
  v32 = (__int64 *)&v25;
  v33 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v40 + 48LL))(v40, v5, &v33);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v32);
  if ( v8 < 0 )
  {
    v10 = 175LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v8);
LABEL_10:
    if ( v25 && ((v26 - 3) & 0xFFFFFFFB) == 0 )
      ((void (*)(void))(*v25)[2])();
    goto LABEL_5;
  }
  v11 = v26;
  if ( v26 < 0 )
  {
    v8 = v26;
    goto LABEL_23;
  }
  if ( v26 )
  {
    if ( v26 == 1 || v26 == 3 )
    {
      v39 = 13;
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), int *))(*v25)[6])(v25, &v39);
      v11 = v26;
      if ( v8 < 0 )
        goto LABEL_23;
    }
  }
  else
  {
    v39 = 0;
  }
  v8 = 0;
LABEL_23:
  if ( v8 < 0 )
  {
    v10 = 177LL;
    goto LABEL_9;
  }
  v12 = 0LL;
  v27 = 0LL;
  if ( v39 == 13 )
  {
    v13 = v25;
    v14 = *v25;
    v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v27);
    v8 = (*v14)((__int64)v13, &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c, v15);
    v11 = v26;
    v12 = v27;
  }
  else
  {
    v8 = -2147418113;
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v8);
    v16 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    goto LABEL_10;
  }
  v6 = (struct Windows::Foundation::Collections::IPropertySet *)v12;
  v27 = 0LL;
  v31 = v12;
  if ( v25 && ((v11 - 3) & 0xFFFFFFFB) == 0 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v25)[2])(v25);
  v17 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v8 = 0;
LABEL_37:
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)&v29,
    v6);
  v18 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
          (__int64)&v29,
          L"executed",
          L"true");
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          v34,
          string,
          v29);
  if ( v19 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v19);
  v20 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 16LL))(v6);
  v22 = v35;
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  result = WindowsDeleteString(string);
  string = 0LL;
  v24 = (volatile signed __int32 *)a1[1];
  if ( v24 )
  {
    result = _InterlockedDecrement(v24 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      result = _InterlockedDecrement(v24 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  return result;
}
