/*
 * XREFs of ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18006C050
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180060AF0 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     _lambda_4d8c3aefd165ae46a39c8fe585e6dd35_::operator() @ 0x18006FF10 (_lambda_4d8c3aefd165ae46a39c8fe585e6dd35_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x180033CC4 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006B440 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x18006B728 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18006BA24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006BB30 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18006BEA4 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180070480 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800A3930 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
HRESULT __fastcall Windows::Services::TargetedContent::Internal::SetTriggerState(__int64 *a1, __int64 a2, int a3)
{
  _QWORD *v5; // rbx
  int v6; // edi
  PCWSTR StringRawBuffer; // rax
  HSTRING v8; // rsi
  struct Windows::Foundation::Collections::IPropertySet *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // ecx
  struct Windows::Foundation::Collections::IPropertySet *v13; // rax
  struct Windows::Foundation::Collections::IPropertySet *v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *v16; // rcx
  wchar_t *v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  volatile signed __int32 *v23; // rbx
  HRESULT result; // eax
  volatile signed __int32 *v25; // rbx
  __int64 v26; // [rsp+28h] [rbp-49h] BYREF
  __int64 v27; // [rsp+30h] [rbp-41h] BYREF
  char *v28; // [rsp+38h] [rbp-39h]
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+40h] [rbp-31h] BYREF
  HSTRING string; // [rsp+48h] [rbp-29h] BYREF
  __int64 v31; // [rsp+50h] [rbp-21h] BYREF
  __int64 v32; // [rsp+58h] [rbp-19h]
  struct Windows::Foundation::Collections::IPropertySet *v33; // [rsp+68h] [rbp-9h]
  __int64 *v34; // [rsp+70h] [rbp-1h] BYREF
  __int64 v35; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v36; // [rsp+80h] [rbp+Fh] BYREF
  volatile signed __int32 *v37; // [rsp+88h] [rbp+17h]
  __int64 v38; // [rsp+90h] [rbp+1Fh]
  __int64 v39; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v41; // [rsp+F0h] [rbp+7Fh] BYREF

  v38 = -2LL;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  v5 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v39,
         a1);
  v6 = (int)retaddr;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v5, (__int64)StringRawBuffer) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    goto LABEL_61;
  }
  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v36);
  v8 = string;
  v9 = 0LL;
  v33 = 0LL;
  v26 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v36)(
          *v36,
          &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
          &v26);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v10);
LABEL_4:
    v11 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_42;
  }
  v27 = 0LL;
  LODWORD(v28) = 0;
  v34 = &v27;
  v35 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, v8, &v35);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v34);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v6);
    if ( v27 && (((_DWORD)v28 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v27 + 16LL))();
    goto LABEL_4;
  }
  v12 = (int)v28;
  if ( (int)v28 < 0 )
  {
    v6 = (int)v28;
    goto LABEL_21;
  }
  if ( (_DWORD)v28 )
  {
    if ( (_DWORD)v28 == 1 || (_DWORD)v28 == 3 )
    {
      v41 = 13;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 48LL))(v27, &v41);
      v12 = (int)v28;
      if ( v6 < 0 )
        goto LABEL_21;
    }
  }
  else
  {
    v41 = 0;
  }
  v6 = 0;
LABEL_21:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v6);
    if ( v27 && (((_DWORD)v28 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v27 + 16LL))();
    goto LABEL_4;
  }
  v13 = 0LL;
  v29 = 0LL;
  if ( v41 == 13 )
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v27)(
           v27,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v29);
    v12 = (int)v28;
    v13 = v29;
  }
  else
  {
    v6 = -2147418113;
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v6);
    v14 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v27 && (((_DWORD)v28 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v27 + 16LL))();
    goto LABEL_4;
  }
  v9 = v13;
  v29 = 0LL;
  v33 = v13;
  if ( v27 && ((v12 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v15 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v6 = 0;
LABEL_42:
  v16 = retaddr;
  if ( v6 < 0 )
  {
LABEL_61:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x72,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
LABEL_62:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x74,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)&v31,
    v9);
  v17 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(a3);
  v18 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
          (__int64)&v31,
          L"triggerState",
          v17);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_62;
  v20 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          v36,
          string,
          v31);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v20);
    JUMPOUT(0x18006C4EDLL);
  }
  v21 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 16LL))(v9);
  v23 = v37;
  if ( v37 )
  {
    if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  result = WindowsDeleteString(string);
  string = 0LL;
  v25 = (volatile signed __int32 *)a1[1];
  if ( v25 )
  {
    result = _InterlockedDecrement(v25 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      result = _InterlockedDecrement(v25 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  return result;
}
