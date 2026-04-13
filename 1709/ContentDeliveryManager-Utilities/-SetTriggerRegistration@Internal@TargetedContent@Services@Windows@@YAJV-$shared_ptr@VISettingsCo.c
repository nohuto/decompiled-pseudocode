/*
 * XREFs of ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180063984
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180037B5C (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18005F1FC (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800610B4 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800618C4 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x180063930 (-SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@Cre.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800648AC (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetInt64@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_W_J@Z @ 0x180064A48 (-SetInt64@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?SetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_WH@Z @ 0x180064C08 (-SetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800964F0 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Services::TargetedContent::Internal::SetTriggerRegistration(_QWORD *a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  wchar_t *v8; // rbx
  HSTRING v9; // r9
  int v10; // eax
  wchar_t *v11; // rbx
  HSTRING v12; // r9
  int v13; // eax
  wchar_t *v14; // rbx
  HSTRING v15; // r9
  int v16; // eax
  wchar_t *v17; // rbx
  HSTRING v18; // r9
  int v19; // eax
  wchar_t *v20; // rbx
  HSTRING v21; // r9
  int v22; // eax
  wchar_t *v23; // rbx
  HSTRING v24; // r9
  int v25; // eax
  wchar_t *v26; // rbx
  HSTRING v27; // r9
  int v28; // eax
  wchar_t *v29; // rbx
  HSTRING v30; // r9
  int v31; // eax
  wchar_t *v32; // rbx
  HSTRING v33; // r9
  int v34; // eax
  wchar_t *v35; // rbx
  HSTRING v36; // r9
  int v37; // eax
  wchar_t *v38; // rbx
  HSTRING v39; // r9
  int v40; // eax
  wchar_t *v41; // rbx
  HSTRING v42; // r9
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  int v51; // ebx
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // eax
  volatile signed __int32 *v62; // rsi
  const char *v63; // r9
  __int64 v64; // rcx
  __int64 (__fastcall ***v65)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v66; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v67; // rcx
  volatile signed __int32 *v68; // rsi
  volatile signed __int32 *v70; // rsi
  HSTRING string; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v72[8]; // [rsp+38h] [rbp-120h] BYREF
  __int64 v73; // [rsp+40h] [rbp-118h] BYREF
  __int64 v74; // [rsp+48h] [rbp-110h] BYREF
  __int64 (__fastcall ***v75)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-108h] BYREF
  __int64 v76; // [rsp+58h] [rbp-100h]
  char *v77; // [rsp+60h] [rbp-F8h]
  __int64 v78; // [rsp+68h] [rbp-F0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v79; // [rsp+70h] [rbp-E8h] BYREF
  int v80; // [rsp+78h] [rbp-E0h] BYREF
  unsigned int v81; // [rsp+7Ch] [rbp-DCh] BYREF
  unsigned int v82; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v83; // [rsp+84h] [rbp-D4h]
  HSTRING v84; // [rsp+88h] [rbp-D0h] BYREF
  wchar_t *v85; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+98h] [rbp-C0h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-B8h] BYREF
  const WCHAR *v88; // [rsp+A8h] [rbp-B0h] BYREF
  _QWORD *v89; // [rsp+B0h] [rbp-A8h]
  __int64 v90; // [rsp+B8h] [rbp-A0h] BYREF
  volatile signed __int32 *v91; // [rsp+C0h] [rbp-98h]
  __int64 v92; // [rsp+C8h] [rbp-90h]
  HSTRING_HEADER v93; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v94; // [rsp+E8h] [rbp-70h] BYREF
  _BYTE v95[24]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v96; // [rsp+108h] [rbp-50h]
  _BYTE v97[32]; // [rsp+110h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v92 = -2LL;
  v89 = a1;
  try
  {
    v79 = 0LL;
    v78 = 0LL;
    v94 = 0LL;
    v4 = WindowsCreateStringReference(L"Windows.Storage.ApplicationDataCompositeValue", 0x2Du, &v93, (HSTRING *)&v94);
    if ( v4 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
           v94,
           (__int64 *)&v79);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x178,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v5);
    v6 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))v79)(
           v79,
           &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
           &v78);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x179,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v6);
    CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
      (CreativeFramework::Triggers::PropertySetHelper *)&v75,
      v79);
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL))(a2, &string);
    if ( v7 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x17D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v7);
    v8 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"Action",
        v8,
        v9);
    WindowsDeleteString(string);
    string = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL))(a2, &string);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x17F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v10);
    v11 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"CreativeId",
        v11,
        v12);
    WindowsDeleteString(string);
    string = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 192LL))(a2, &string);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x181,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v13);
    v14 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"Placement",
        v14,
        v15);
    WindowsDeleteString(string);
    string = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, &string);
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x183,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v16);
    v17 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"Id",
        v17,
        v18);
    WindowsDeleteString(string);
    string = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &string);
    if ( v19 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x185,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v19);
    v20 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"Predicate",
        v20,
        v21);
    WindowsDeleteString(string);
    string = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 160LL))(a2, &string);
    if ( v22 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x187,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v22);
    v23 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"Intent",
        v23,
        v24);
    WindowsDeleteString(string);
    string = 0LL;
    v25 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL))(a2, &string);
    if ( v25 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x189,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v25);
    v26 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"Predecessor",
        v26,
        v27);
    WindowsDeleteString(string);
    string = 0LL;
    v28 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &string);
    if ( v28 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x18B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v28);
    v29 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"Path",
        v29,
        v30);
    WindowsDeleteString(string);
    string = 0LL;
    v31 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 208LL))(a2, &string);
    if ( v31 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x18D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v31);
    v32 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"ruleFilePath",
        v32,
        v33);
    WindowsDeleteString(string);
    string = 0LL;
    v34 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 224LL))(a2, &string);
    if ( v34 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x18F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v34);
    v35 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"event",
        v35,
        v36);
    v37 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v80);
    if ( v37 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x192,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v37);
    v85 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v80);
    v38 = *(wchar_t **)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v97, (const WCHAR **)&v85)
                      + 24);
    if ( !WindowsIsStringEmpty((HSTRING)v38) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"Trigger",
        v38,
        v39);
    WindowsDeleteString(string);
    string = 0LL;
    v40 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 272LL))(a2, &string);
    if ( v40 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x194,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v40);
    v41 = (wchar_t *)string;
    if ( !WindowsIsStringEmpty(string) )
      Windows::Services::TargetedContent::Internal::SetStringValue(
        (Windows::Services::TargetedContent::Internal *)&v75,
        L"scoreName",
        v41,
        v42);
    v43 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 240LL))(a2, &v86);
    if ( v43 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x198,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v43);
    if ( v86 > 0 )
    {
      v44 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt64(&v75);
      if ( v44 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x19B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v44);
    }
    v45 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 256LL))(a2, &v81);
    if ( v45 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x19F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v45);
    v46 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
            &v75,
            L"options",
            v81);
    if ( v46 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1A0,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v46);
    v47 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 112LL))(a2, &v82);
    if ( v47 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1A3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v47);
    v48 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
            &v75,
            L"predicateKind",
            v82);
    if ( v48 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1A4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v48);
    v49 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 288LL))(a2, &v87);
    if ( v49 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1A7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v49);
    v88 = L"scoreValue";
    v51 = (int)v77;
    if ( (int)v77 >= 0 )
    {
      v73 = 0LL;
      v52 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v76 + 120LL))(v76, v50, &v73);
      v51 = v52;
      if ( v52 >= 0 )
      {
        v72[0] = 0;
        v74 = 0LL;
        v54 = (**v75)(v75, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v74);
        v51 = v54;
        if ( v54 >= 0 )
        {
          v57 = v74;
          v58 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v95, &v88);
          v54 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v57 + 80LL))(
                  v57,
                  *(_QWORD *)(v58 + 24),
                  v73,
                  v72);
          v51 = v54;
          v96 = 0LL;
          if ( v54 >= 0 )
          {
            v59 = v74;
            if ( v74 )
            {
              v74 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
            }
            v60 = v73;
            if ( v73 )
            {
              v73 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
            }
            v51 = 0;
            goto LABEL_88;
          }
          v55 = 353LL;
        }
        else
        {
          v55 = 352LL;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v55,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
          (const char *)(unsigned int)v54);
        v56 = v74;
        if ( v74 )
        {
          v74 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x15C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
          (const char *)(unsigned int)v52);
      }
      v53 = v73;
      if ( v73 )
      {
        v73 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x159,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
        (const char *)(unsigned int)v77);
    }
LABEL_88:
    if ( v51 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1A8,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v51);
    CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v90);
    Windows::Services::TargetedContent::Internal::CreateTriggerKey(&v84, a2);
    v61 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
            v90,
            v84,
            v75);
    if ( v61 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1AC,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v61);
    WindowsDeleteString(v84);
    v84 = 0LL;
    v62 = v91;
    if ( v91 )
    {
      if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v62)(v62);
        if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    v64 = v76;
    if ( v76 )
    {
      v76 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    }
    v65 = v75;
    if ( v75 )
    {
      v75 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v65)[2])(v65);
    }
    v66 = v78;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    v67 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v67 + 16LL))(v67);
    }
  }
  catch ( ... )
  {
    v83 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1B0,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            v63);
    v70 = (volatile signed __int32 *)v89[1];
    if ( v70 && _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v70)(v70);
      if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
    }
    return v83;
  }
  v68 = (volatile signed __int32 *)a1[1];
  if ( v68 )
  {
    if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v68)(v68);
      if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
    }
  }
  return 0LL;
}
