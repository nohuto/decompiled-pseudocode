/*
 * XREFs of ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006B440
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006BFA4 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VIS_ea_18006BFA4.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18006C050 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006C4F0 (-RemoveRegisteredTrigger@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsC.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006F13C (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800169AC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ??$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z @ 0x18006B7F0 (--$Set@PEB_W@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEB_WUDummy@Details@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::CreateTriggerKey(HSTRING *a1, __int64 a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  HSTRING v11; // rbx
  HSTRING v12; // rsi
  PCWSTR StringRawBuffer; // rdi
  PCWSTR v14; // rbx
  PCWSTR v15; // rax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  HSTRING v18; // rbx
  HSTRING v19; // rsi
  HSTRING v20; // r15
  PCWSTR v21; // r14
  PCWSTR v22; // rdi
  PCWSTR v23; // rbx
  PCWSTR v24; // rax
  int v25; // eax
  void *v26; // rbx
  int v27; // eax
  HSTRING v29[3]; // [rsp+38h] [rbp-40h] BYREF
  LPVOID pv[5]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  HSTRING v32; // [rsp+C8h] [rbp+50h] BYREF
  HSTRING string; // [rsp+D0h] [rbp+58h] BYREF
  HSTRING v34; // [rsp+D8h] [rbp+60h] BYREF

  v29[2] = (HSTRING)-2LL;
  WindowsDeleteString(0LL);
  v29[0] = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL))(a2, v29);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  v34 = 0LL;
  WindowsDeleteString(0LL);
  v34 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &v34);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x24E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_15;
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL))(a2, &string);
  v8 = retaddr;
  if ( v7 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x250,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_16;
  }
  v32 = 0LL;
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, &v32);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x252,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_17;
  }
  memset(pv, 0, 24);
  if ( WindowsIsStringEmpty(string) )
  {
    v11 = v34;
    v12 = v29[0];
    StringRawBuffer = WindowsGetStringRawBuffer(v32, 0LL);
    v14 = WindowsGetStringRawBuffer(v11, 0LL);
    v15 = WindowsGetStringRawBuffer(v12, 0LL);
    v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)pv,
            L"%s_%s_%s",
            v15,
            v14,
            StringRawBuffer);
    v17 = retaddr;
    if ( v16 >= 0 )
      goto LABEL_9;
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x25B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v18 = v32;
  v19 = v34;
  v20 = v29[0];
  v21 = WindowsGetStringRawBuffer(string, 0LL);
  v22 = WindowsGetStringRawBuffer(v18, 0LL);
  v23 = WindowsGetStringRawBuffer(v19, 0LL);
  v24 = WindowsGetStringRawBuffer(v20, 0LL);
  v25 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s_%s_%s_%s",
          v24,
          v23,
          v22,
          v21,
          0);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x263,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v25);
    __debugbreak();
  }
LABEL_9:
  *a1 = 0LL;
  v26 = pv[0];
  v29[1] = (HSTRING)pv[0];
  v27 = Microsoft::WRL::Wrappers::HString::Set<wchar_t const *>(a1);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x267,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v27);
    JUMPOUT(0x18006B726LL);
  }
  if ( v26 )
    CoTaskMemFree(v26);
  WindowsDeleteString(v32);
  v32 = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v34);
  v34 = 0LL;
  WindowsDeleteString(v29[0]);
  return a1;
}
