/*
 * XREFs of ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800610B4
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180061DD4 (-SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsCont.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800621FC (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180063984 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180061440 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::CreateTriggerKey(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  HSTRING v8; // rbx
  HSTRING v9; // rsi
  PCWSTR StringRawBuffer; // rdi
  PCWSTR v11; // rbx
  PCWSTR v12; // rax
  int v13; // eax
  HSTRING v14; // rbx
  HSTRING v15; // rsi
  HSTRING v16; // r15
  PCWSTR v17; // r14
  PCWSTR v18; // rdi
  PCWSTR v19; // rbx
  PCWSTR v20; // rax
  int v21; // eax
  unsigned __int64 v22; // r9
  WCHAR *v23; // rbx
  unsigned __int64 v24; // rax
  UINT32 v25; // edi
  HSTRING v27[2]; // [rsp+38h] [rbp-30h] BYREF
  PCNZWCH sourceString[4]; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  HSTRING v30; // [rsp+B8h] [rbp+50h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+58h] BYREF
  HSTRING v32; // [rsp+C8h] [rbp+60h] BYREF

  v27[1] = (HSTRING)-2LL;
  WindowsDeleteString(0LL);
  v27[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL))(a2, v27);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x22B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v32 = 0LL;
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &v32);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x22D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL))(a2, &string);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x22F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v30 = 0LL;
  WindowsDeleteString(0LL);
  v30 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, &v30);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x231,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  memset(sourceString, 0, 24);
  if ( WindowsIsStringEmpty(string) )
  {
    v8 = v32;
    v9 = v27[0];
    StringRawBuffer = WindowsGetStringRawBuffer(v30, 0LL);
    v11 = WindowsGetStringRawBuffer(v8, 0LL);
    v12 = WindowsGetStringRawBuffer(v9, 0LL);
    v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            sourceString,
            L"%s_%s_%s",
            v12,
            v11,
            StringRawBuffer);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x23A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
  }
  else
  {
    v14 = v30;
    v15 = v32;
    v16 = v27[0];
    v17 = WindowsGetStringRawBuffer(string, 0LL);
    v18 = WindowsGetStringRawBuffer(v14, 0LL);
    v19 = WindowsGetStringRawBuffer(v15, 0LL);
    v20 = WindowsGetStringRawBuffer(v16, 0LL);
    v21 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            sourceString,
            L"%s_%s_%s_%s",
            v20,
            v19,
            v18,
            v17,
            0);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x242,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
  }
  *a1 = 0LL;
  v22 = 0LL;
  v23 = (WCHAR *)sourceString[0];
  if ( sourceString[0] )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( sourceString[0][v24] );
    v25 = -1;
    if ( v24 <= 0xFFFFFFFF )
      v25 = v24;
    v22 = v24 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v24 <= 0xFFFFFFFF )
    {
      WindowsDeleteString(0LL);
      *a1 = 0LL;
      v22 = (unsigned int)WindowsCreateString(v23, v25, a1);
    }
  }
  if ( (v22 & 0x80000000) != 0LL )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x246,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)v22);
  if ( v23 )
    CoTaskMemFree(v23);
  WindowsDeleteString(v30);
  v30 = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v32);
  v32 = 0LL;
  WindowsDeleteString(v27[0]);
  return a1;
}
