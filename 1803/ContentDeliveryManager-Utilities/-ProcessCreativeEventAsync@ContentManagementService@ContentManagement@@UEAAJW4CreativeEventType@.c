/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002E840
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002EC90 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180026D90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProce.c)
 *     _lambda_7d65644bff1a7e1849e627588e917516_::__lambda_7d65644bff1a7e1849e627588e917516_ @ 0x18002EBEC (_lambda_7d65644bff1a7e1849e627588e917516_--__lambda_7d65644bff1a7e1849e627588e917516_.c)
 *     ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x18003A838 (--$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_7d65644bff1a7e1849e627588e917516___ @ 0x18003A9E4 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_-.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        const WCHAR *a7,
        __int64 a8,
        __int64 a9)
{
  HSTRING v10; // rbx
  HRESULT v11; // eax
  int v12; // esi
  HSTRING v13; // r13
  HRESULT v14; // eax
  HSTRING v15; // r12
  HRESULT v16; // eax
  HSTRING v17; // r15
  HRESULT v18; // eax
  int v19; // eax
  __int64 v20; // r8
  HSTRING v21; // rdi
  volatile signed __int64 *v22; // rbx
  HSTRING newString; // [rsp+28h] [rbp-D9h] BYREF
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp-D1h] BYREF
  int v26; // [rsp+38h] [rbp-C9h] BYREF
  __int64 v27; // [rsp+3Ch] [rbp-C5h]
  HSTRING v28; // [rsp+48h] [rbp-B9h]
  __int64 v29; // [rsp+50h] [rbp-B1h]
  HSTRING v30; // [rsp+58h] [rbp-A9h]
  __int64 v31; // [rsp+60h] [rbp-A1h]
  HSTRING v32; // [rsp+68h] [rbp-99h]
  __int64 v33; // [rsp+70h] [rbp-91h]
  HSTRING v34; // [rsp+78h] [rbp-89h]
  char v35; // [rsp+80h] [rbp-81h]
  _QWORD v36[2]; // [rsp+88h] [rbp-79h] BYREF
  int v37; // [rsp+98h] [rbp-69h]
  HSTRING v38; // [rsp+A0h] [rbp-61h]
  char v39; // [rsp+A8h] [rbp-59h]
  HSTRING v40; // [rsp+B0h] [rbp-51h]
  char v41; // [rsp+B8h] [rbp-49h]
  HSTRING v42; // [rsp+C0h] [rbp-41h]
  char v43; // [rsp+C8h] [rbp-39h]
  HSTRING v44; // [rsp+D0h] [rbp-31h]
  char v45; // [rsp+D8h] [rbp-29h]
  const WCHAR *v46; // [rsp+E0h] [rbp-21h]
  HSTRING v47; // [rsp+E8h] [rbp-19h]
  __int64 v48; // [rsp+F0h] [rbp-11h]
  __int64 v49; // [rsp+F8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+3Fh]
  HSTRING v53; // [rsp+158h] [rbp+57h]

  v48 = -2LL;
  v10 = 0LL;
  LOBYTE(v33) = 0;
  v11 = WindowsDuplicateString(a3, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_43;
  }
  v10 = newString;
  v53 = newString;
  v32 = newString;
  WindowsDeleteString(0LL);
  v13 = 0LL;
  v35 = 0;
  v14 = WindowsDuplicateString(a4, &newString);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v13 = newString;
    v34 = newString;
    WindowsDeleteString(0LL);
    v15 = 0LL;
    v28 = 0LL;
    LOBYTE(v29) = 0;
    if ( string )
    {
      v16 = WindowsDuplicateString(string, &newString);
      v12 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x158,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v16);
LABEL_37:
        if ( v15 )
          WindowsDeleteString(v15);
        goto LABEL_40;
      }
      v15 = newString;
      v28 = newString;
      WindowsDeleteString(0LL);
    }
    v17 = 0LL;
    v30 = 0LL;
    LOBYTE(v31) = 0;
    if ( a6 )
    {
      v18 = WindowsDuplicateString(a6, &newString);
      v12 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x15E,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v18);
LABEL_35:
        if ( v17 )
          WindowsDeleteString(v17);
        goto LABEL_37;
      }
      v17 = newString;
      v30 = newString;
      WindowsDeleteString(0LL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v13, 0LL);
    newString = 0LL;
    v19 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::CreativeEventReportedCache,ContentManagement::ICreativeEventReportedCache,unsigned short const * &>(
            &newString,
            &StringRawBuffer);
    v12 = v19;
    if ( v19 >= 0 )
      v12 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v19);
    v21 = newString;
    if ( v12 >= 0 )
    {
      StringRawBuffer = a7;
      if ( a7 )
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)a7 + 8LL))(a7);
      v22 = (volatile signed __int64 *)(a1 - 48);
      v49 = a1 - 48;
      if ( a1 != 48 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef(a1 - 48);
      v36[0] = a1 - 48;
      v36[1] = a1 - 48;
      if ( a1 != 48 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef((__int64)v22);
      v37 = a2;
      v38 = v53;
      v32 = 0LL;
      v39 = 0;
      LOBYTE(v33) = 1;
      v40 = v13;
      v13 = 0LL;
      v34 = 0LL;
      v41 = 0;
      v35 = 1;
      v42 = v15;
      v15 = 0LL;
      v28 = 0LL;
      v43 = 0;
      LOBYTE(v29) = 1;
      v44 = v17;
      v17 = 0LL;
      v30 = 0LL;
      v45 = 0;
      LOBYTE(v31) = 1;
      v46 = a7;
      if ( a7 )
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)a7 + 8LL))(a7);
      v47 = v21;
      if ( v21 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 8LL))(v21);
      v26 = 3;
      v27 = 130LL;
      v12 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_7d65644bff1a7e1849e627588e917516___(
              &v26,
              a9,
              v20,
              v36);
      lambda_7d65644bff1a7e1849e627588e917516_::__lambda_7d65644bff1a7e1849e627588e917516_(v36);
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x176,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v12);
      if ( a1 != 48 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v22);
      if ( a7 )
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)a7 + 16LL))(a7);
      v10 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v12);
    }
    if ( v21 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x153,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v14);
LABEL_40:
  if ( v13 )
    WindowsDeleteString(v13);
LABEL_43:
  if ( v10 )
    WindowsDeleteString(v10);
  return (unsigned int)v12;
}
