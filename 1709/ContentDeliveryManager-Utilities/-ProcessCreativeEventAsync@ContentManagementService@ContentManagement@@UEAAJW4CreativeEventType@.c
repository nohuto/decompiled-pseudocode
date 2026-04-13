/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002B6F0
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18002BB90 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180023AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     _lambda_71cc456d2cb9e9e1279ecfc076754c25_::__lambda_71cc456d2cb9e9e1279ecfc076754c25_ @ 0x18002BAF0 (_lambda_71cc456d2cb9e9e1279ecfc076754c25_--__lambda_71cc456d2cb9e9e1279ecfc076754c25_.c)
 *     ??$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache@2@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICreativeEventReportedCache@ContentManagement@@AEAPEBG@Z @ 0x180036FC0 (--$MakeAndInitialize@VCreativeEventReportedCache@ContentManagement@@UICreativeEventReportedCache.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_71cc456d2cb9e9e1279ecfc076754c25___ @ 0x18003716C (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_-.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  HSTRING v12; // r12
  HRESULT v13; // eax
  int v14; // esi
  HSTRING v15; // r14
  HRESULT v16; // eax
  HRESULT v17; // eax
  HRESULT v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rdx
  volatile signed __int64 *v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  signed __int64 v26; // rax
  signed __int64 v27; // rtt
  int v29[2]; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  HSTRING v32; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+48h] [rbp-C0h]
  HSTRING v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h]
  HSTRING v36; // [rsp+60h] [rbp-A8h]
  int v37; // [rsp+68h] [rbp-A0h]
  HSTRING v38[2]; // [rsp+6Ch] [rbp-9Ch] BYREF
  HSTRING newString; // [rsp+80h] [rbp-88h] BYREF
  HSTRING v40; // [rsp+88h] [rbp-80h] BYREF
  HSTRING v41; // [rsp+90h] [rbp-78h] BYREF
  HSTRING v42; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v43[3]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v44[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v45; // [rsp+C8h] [rbp-40h]
  HSTRING v46; // [rsp+D0h] [rbp-38h]
  char v47; // [rsp+D8h] [rbp-30h]
  HSTRING v48; // [rsp+E0h] [rbp-28h]
  char v49; // [rsp+E8h] [rbp-20h]
  HSTRING v50; // [rsp+F0h] [rbp-18h]
  char v51; // [rsp+F8h] [rbp-10h]
  HSTRING v52; // [rsp+100h] [rbp-8h]
  char v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  __int64 v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  __int64 v57; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v56 = -2LL;
  v12 = 0LL;
  LOBYTE(v31) = 0;
  v13 = WindowsDuplicateString(a3, &newString);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x151,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_50;
  }
  v12 = newString;
  v30 = newString;
  WindowsDeleteString(0LL);
  v15 = 0LL;
  LOBYTE(v33) = 0;
  v16 = WindowsDuplicateString(a4, &v40);
  v14 = v16;
  if ( v16 >= 0 )
  {
    v15 = v40;
    v32 = v40;
    WindowsDeleteString(0LL);
    v36 = 0LL;
    LOBYTE(v37) = 0;
    if ( string )
    {
      v17 = WindowsDuplicateString(string, &v41);
      v14 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x158,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v17);
LABEL_44:
        if ( v36 )
          WindowsDeleteString(v36);
        goto LABEL_47;
      }
      v36 = v41;
      WindowsDeleteString(0LL);
    }
    v34 = 0LL;
    LOBYTE(v35) = 0;
    if ( a6 )
    {
      v18 = WindowsDuplicateString(a6, &v42);
      v14 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x15E,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v18);
LABEL_42:
        if ( v34 )
          WindowsDeleteString(v34);
        goto LABEL_44;
      }
      v34 = v42;
      WindowsDeleteString(0LL);
    }
    v43[0] = WindowsGetStringRawBuffer(v15, 0LL);
    *(_QWORD *)v29 = 0LL;
    v19 = Microsoft::WRL::Details::MakeAndInitialize<ContentManagement::CreativeEventReportedCache,ContentManagement::ICreativeEventReportedCache,unsigned short const * &>(
            v29,
            v43);
    v14 = v19;
    if ( v19 >= 0 )
      v14 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x13F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v19);
    if ( v14 >= 0 )
    {
      v57 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v22 = a1 - 56;
      v23 = (volatile signed __int64 *)(a1 - 56);
      if ( a1 != 56 )
      {
        v24 = *(_QWORD *)(v22 + 120);
        v43[1] = v24;
        while ( v24 >= 0 )
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 120), v24 + 1, v24);
          if ( v25 == v24 )
            goto LABEL_23;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v24 + 16));
LABEL_23:
        v23 = (volatile signed __int64 *)(a1 - 56);
        v15 = v32;
        v12 = v30;
      }
      v44[0] = a1 - 56;
      v44[1] = v23;
      if ( v23 )
      {
        v26 = *((_QWORD *)v23 + 15);
        v43[2] = v26;
        while ( v26 >= 0 )
        {
          v27 = v26;
          v26 = _InterlockedCompareExchange64(v23 + 15, v26 + 1, v26);
          if ( v27 == v26 )
            goto LABEL_29;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v26 + 16));
LABEL_29:
        v23 = (volatile signed __int64 *)(a1 - 56);
        v15 = v32;
        v12 = v30;
      }
      v45 = a2;
      v46 = v12;
      v12 = 0LL;
      v30 = 0LL;
      v47 = 0;
      LOBYTE(v31) = 1;
      v48 = v15;
      v15 = 0LL;
      v32 = 0LL;
      v49 = 0;
      LOBYTE(v33) = 1;
      v50 = v36;
      v36 = 0LL;
      v51 = 0;
      LOBYTE(v37) = 1;
      v52 = v34;
      v34 = 0LL;
      v53 = 0;
      LOBYTE(v35) = 1;
      v54 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v21 = *(_QWORD *)v29;
      v55 = *(_QWORD *)v29;
      if ( *(_QWORD *)v29 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 8LL))(*(_QWORD *)v29);
      HIDWORD(v38[0]) = 3;
      v38[1] = (HSTRING)130;
      v14 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ProcessCreativeEventOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_71cc456d2cb9e9e1279ecfc076754c25___(
              (char *)v38 + 4,
              a9,
              v20,
              v44);
      lambda_71cc456d2cb9e9e1279ecfc076754c25_::__lambda_71cc456d2cb9e9e1279ecfc076754c25_(v44);
      if ( v14 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x175,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v14);
      if ( v23 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v23);
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x162,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v14);
      v21 = *(_QWORD *)v29;
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x153,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v16);
LABEL_47:
  if ( v15 )
    WindowsDeleteString(v15);
LABEL_50:
  if ( v12 )
    WindowsDeleteString(v12);
  return (unsigned int)v14;
}
