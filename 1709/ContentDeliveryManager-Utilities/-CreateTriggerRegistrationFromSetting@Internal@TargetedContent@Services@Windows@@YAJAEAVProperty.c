/*
 * XREFs of ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062E60
 * Callers:
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf___ @ 0x180066488 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_09a62.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_09a627d8f7b18fb7ca4e97484222e6bf__&___ptr64_ @ 0x180068848 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__ea_180068848.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005598C (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 *     ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x18005F24C (-ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentKnownTri.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180062DD0 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800647A0 (-HasKey@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     ?GetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAH_NH@Z @ 0x180064EB8 (-GetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 *     ?Lookup@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAPEAUIPropertyValue@Foundation@Windows@@@Z @ 0x180067088 (-Lookup@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **a3)
{
  HSTRING *v5; // r9
  HSTRING *v6; // r9
  HSTRING *v7; // r9
  HSTRING *v8; // r9
  HSTRING *v9; // r9
  HSTRING *v10; // r9
  const WCHAR *StringRawBuffer; // rax
  int v12; // ecx
  int v13; // eax
  HSTRING *v14; // r9
  char StringValue; // al
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v16; // rbx
  int v17; // eax
  HSTRING *v18; // r9
  int v19; // eax
  HSTRING *v20; // r9
  int v21; // eax
  HSTRING *v22; // r9
  int v23; // eax
  HSTRING *v24; // r9
  int v25; // eax
  HSTRING *v26; // r9
  int v27; // eax
  int v28; // esi
  unsigned __int64 v29; // r9
  __int64 v30; // rdx
  int HasKey; // eax
  int v32; // eax
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int Int32; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // esi
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  int v46; // eax
  int v47; // eax
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  const char *v54; // r9
  __int64 result; // rax
  HSTRING v56; // [rsp+40h] [rbp-88h] BYREF
  HSTRING string; // [rsp+48h] [rbp-80h] BYREF
  HSTRING v58; // [rsp+50h] [rbp-78h] BYREF
  HSTRING v59; // [rsp+58h] [rbp-70h] BYREF
  HSTRING v60; // [rsp+60h] [rbp-68h] BYREF
  HSTRING v61; // [rsp+68h] [rbp-60h] BYREF
  HSTRING v62; // [rsp+70h] [rbp-58h] BYREF
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v63; // [rsp+78h] [rbp-50h] BYREF
  __int64 v64; // [rsp+80h] [rbp-48h] BYREF
  _QWORD v65[8]; // [rsp+88h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  __int64 v67; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v68; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v69; // [rsp+E8h] [rbp+20h] BYREF

  v65[1] = -2LL;
  try
  {
    *(_QWORD *)a2 = 0LL;
    WindowsDeleteString(0LL);
    v62 = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"CreativeId",
            (const wchar_t *)&v62,
            v5) )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x119,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL);
    }
    WindowsDeleteString(0LL);
    v61 = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Placement",
            (const wchar_t *)&v61,
            v6) )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x11B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL);
    }
    WindowsDeleteString(0LL);
    v60 = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Path",
            (const wchar_t *)&v60,
            v7) )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x11D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL);
    }
    WindowsDeleteString(0LL);
    v59 = 0LL;
    Windows::Services::TargetedContent::Internal::GetStringValue(
      this,
      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Action",
      (const wchar_t *)&v59,
      v8);
    WindowsDeleteString(0LL);
    v58 = 0LL;
    Windows::Services::TargetedContent::Internal::GetStringValue(
      this,
      (struct CreativeFramework::Triggers::PropertySetHelper *)L"Intent",
      (const wchar_t *)&v58,
      v9);
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"Trigger",
            (const wchar_t *)&string,
            v10) )
    {
      wil::details::OriginateError();
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x123,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v12 = Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(StringRawBuffer);
    v63 = 0LL;
    v13 = Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
            v12,
            v62,
            (char *)v61,
            v60,
            v59,
            v58,
            &v63);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x126,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v13);
    WindowsDeleteString(0LL);
    v56 = 0LL;
    StringValue = Windows::Services::TargetedContent::Internal::GetStringValue(
                    this,
                    (struct CreativeFramework::Triggers::PropertySetHelper *)L"Id",
                    (const wchar_t *)&v56,
                    v14);
    v16 = v63;
    if ( StringValue )
    {
      v17 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v63 + 72LL))(
              v63,
              v56);
      if ( v17 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x12B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v17);
    }
    WindowsDeleteString(v56);
    v56 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predicate",
           (const wchar_t *)&v56,
           v18) )
    {
      v19 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v16 + 104LL))(
              v16,
              v56);
      if ( v19 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x12F,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v19);
    }
    WindowsDeleteString(v56);
    v56 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predecessor",
           (const wchar_t *)&v56,
           v20) )
    {
      v21 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v16 + 152LL))(
              v16,
              v56);
      if ( v21 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x133,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v21);
    }
    WindowsDeleteString(v56);
    v56 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"ruleFilePath",
           (const wchar_t *)&v56,
           v22) )
    {
      v23 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v16 + 216LL))(
              v16,
              v56);
      if ( v23 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x137,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v23);
    }
    WindowsDeleteString(v56);
    v56 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"event",
           (const wchar_t *)&v56,
           v24) )
    {
      v25 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v16 + 232LL))(
              v16,
              v56);
      if ( v25 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x13B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v25);
    }
    WindowsDeleteString(v56);
    v56 = 0LL;
    if ( Windows::Services::TargetedContent::Internal::GetStringValue(
           this,
           (struct CreativeFramework::Triggers::PropertySetHelper *)L"scoreName",
           (const wchar_t *)&v56,
           v26) )
    {
      v27 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v16 + 280LL))(
              v16,
              v56);
      if ( v27 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x13F,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v27);
    }
    v28 = *((_DWORD *)this + 4);
    if ( v28 < 0 )
    {
      v29 = (unsigned int)v28;
      v30 = 361LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v30,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
        (const char *)v29);
      goto LABEL_46;
    }
    HasKey = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
               this,
               L"delay",
               &v67);
    v28 = HasKey;
    if ( HasKey < 0 )
    {
      v29 = (unsigned int)HasKey;
      v30 = 366LL;
      goto LABEL_32;
    }
    if ( (_BYTE)v67 )
    {
      v67 = 0LL;
      v32 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
              this,
              L"delay",
              &v67);
      v28 = v32;
      if ( v32 < 0 )
      {
        v33 = (unsigned int)v32;
        v34 = 376LL;
        goto LABEL_38;
      }
      v36 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v67 + 104LL))(v67, &v64);
      v28 = v36;
      if ( v36 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x69,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
          (const char *)(unsigned int)v36);
        v33 = (unsigned int)v28;
        v34 = 377LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v34,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
          (const char *)v33);
        v35 = v67;
        if ( v67 )
        {
          v67 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
LABEL_46:
        if ( v28 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x143,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v28);
        v38 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, __int64))(*(_QWORD *)v16 + 248LL))(
                v16,
                v64);
        if ( v38 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x144,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v38);
        Int32 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                  this,
                  L"options",
                  &v68);
        if ( Int32 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x147,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)Int32);
        v40 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, _QWORD))(*(_QWORD *)v16 + 264LL))(
                v16,
                v68);
        if ( v40 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x148,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v40);
        v41 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::GetInt32(
                this,
                L"predicateKind",
                &v69);
        if ( v41 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x14B,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v41);
        v42 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, _QWORD))(*(_QWORD *)v16 + 120LL))(
                v16,
                v69);
        if ( v42 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x14C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            (const char *)(unsigned int)v42);
        v43 = *((_DWORD *)this + 4);
        if ( v43 < 0 )
        {
          v44 = (unsigned int)v43;
          v45 = 361LL;
LABEL_60:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v45,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
            (const char *)v44);
LABEL_74:
          if ( v43 < 0 )
            wil::details::in1diag3::_Throw_Hr(
              retaddr,
              (void *)0x14F,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v43);
          v53 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *))(*(_QWORD *)v16 + 296LL))(v16);
          if ( v53 < 0 )
            wil::details::in1diag3::_Throw_Hr(
              retaddr,
              (void *)0x150,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
              (const char *)(unsigned int)v53);
          *(_QWORD *)a2 = v16;
          WindowsDeleteString(v56);
          v56 = 0LL;
          WindowsDeleteString(string);
          string = 0LL;
          WindowsDeleteString(v58);
          v58 = 0LL;
          WindowsDeleteString(v59);
          v59 = 0LL;
          WindowsDeleteString(v60);
          v60 = 0LL;
          WindowsDeleteString(v61);
          v61 = 0LL;
          WindowsDeleteString(v62);
          return 0LL;
        }
        v46 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
                this,
                L"scoreValue",
                &v67);
        v43 = v46;
        if ( v46 < 0 )
        {
          v44 = (unsigned int)v46;
          v45 = 366LL;
          goto LABEL_60;
        }
        if ( (_BYTE)v67 )
        {
          v67 = 0LL;
          v47 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::Lookup(
                  this,
                  L"scoreValue",
                  &v67);
          v43 = v47;
          if ( v47 < 0 )
          {
            v48 = (unsigned int)v47;
            v49 = 376LL;
            goto LABEL_66;
          }
          v51 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v67 + 128LL))(v67, v65);
          v43 = v51;
          if ( v51 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x77,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
              (const char *)(unsigned int)v51);
            v48 = (unsigned int)v43;
            v49 = 377LL;
LABEL_66:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)v49,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
              (const char *)v48);
            v50 = v67;
            if ( v67 )
            {
              v67 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
            }
            goto LABEL_74;
          }
          v52 = v67;
          if ( v67 )
          {
            v67 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
          }
        }
        else
        {
          v65[0] = 0LL;
        }
        v43 = 0;
        goto LABEL_74;
      }
      v37 = v67;
      if ( v67 )
      {
        v67 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
    }
    else
    {
      v64 = 0LL;
    }
    v28 = 0;
    goto LABEL_46;
  }
  catch ( ... )
  {
    LODWORD(v67) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x155,
                     (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                     v54);
    return (unsigned int)v67;
  }
  return result;
}
