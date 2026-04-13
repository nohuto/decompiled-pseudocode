/*
 * XREFs of ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002CCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180023AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d0249701552e980dd27d25ea59751cd6___ @ 0x1800375FC (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymou_ea_1800375FC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::ResolveLayoutBindingsAsync(
        ContentManagement::ContentManagementService *this,
        HSTRING a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  HRESULT v5; // eax
  int v6; // edi
  __int64 v7; // r8
  volatile signed __int64 *v8; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  signed __int64 v14; // [rsp+20h] [rbp-50h]
  signed __int64 v15; // [rsp+28h] [rbp-48h]
  _DWORD v16[4]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING v17; // [rsp+48h] [rbp-28h]
  char v18; // [rsp+50h] [rbp-20h]
  volatile signed __int64 *v19; // [rsp+58h] [rbp-18h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h]
  char v21; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  HSTRING newString; // [rsp+A8h] [rbp+38h] BYREF

  v17 = 0LL;
  v18 = 0;
  v5 = WindowsDuplicateString(a2, &newString);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1FE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    v17 = newString;
    WindowsDeleteString(0LL);
    v8 = (volatile signed __int64 *)((char *)this - 88);
    if ( v8 )
    {
      v9 = *((_QWORD *)v8 + 15);
      v14 = v9;
      while ( v9 >= 0 )
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange64(v8 + 15, v9 + 1, v9);
        if ( v10 == v9 )
          goto LABEL_7;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
    }
LABEL_7:
    v19 = v8;
    if ( v8 )
    {
      v11 = *((_QWORD *)v8 + 15);
      v15 = v11;
      while ( v11 >= 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v8 + 15, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_12;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
    }
LABEL_12:
    string = v17;
    v17 = 0LL;
    v21 = 0;
    v18 = 1;
    v16[0] = 3;
    v16[1] = 128;
    v16[2] = 0;
    v6 = ((__int64 (__fastcall *)(_DWORD *, struct Windows::Foundation::IAsyncAction **, __int64, volatile signed __int64 **, signed __int64, signed __int64, __int64))Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions___anonymous_namespace_::ResolveLayoutBindingsOperationName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d0249701552e980dd27d25ea59751cd6___)(
           v16,
           a3,
           v7,
           &v19,
           v14,
           v15,
           -2LL);
    if ( string )
      WindowsDeleteString(string);
    if ( v19 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v19);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x209,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v6);
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v8);
  }
  return (unsigned int)v6;
}
