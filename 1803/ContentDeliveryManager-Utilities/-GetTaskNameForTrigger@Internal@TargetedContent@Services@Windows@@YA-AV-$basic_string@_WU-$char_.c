/*
 * XREFs of ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006940C
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006A2C0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006A680 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006A934 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800169AC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003681C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x180068FB8 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180069108 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800691D0 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800692A0 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  char *StringRawBuffer; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  PCWSTR v10; // rbx
  __int64 v11; // rax
  void **v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  void *v15; // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  char *v18; // rax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  char *v21; // rdx
  unsigned __int64 v22; // r8
  PCWSTR v24; // [rsp+28h] [rbp-79h]
  HSTRING v25; // [rsp+48h] [rbp-59h] BYREF
  HSTRING v26; // [rsp+50h] [rbp-51h] BYREF
  int v27; // [rsp+58h] [rbp-49h] BYREF
  HSTRING string; // [rsp+60h] [rbp-41h] BYREF
  void *Src; // [rsp+68h] [rbp-39h] BYREF
  __int64 v30; // [rsp+70h] [rbp-31h]
  __int64 v31; // [rsp+78h] [rbp-29h]
  LPVOID pv[4]; // [rsp+80h] [rbp-21h] BYREF
  void *v33[2]; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+Fh]
  unsigned __int64 v35; // [rsp+B8h] [rbp+17h]
  void *v36[3]; // [rsp+C0h] [rbp+1Fh] BYREF
  unsigned __int64 v37; // [rsp+D8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  pv[3] = (LPVOID)-2LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v27);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xB6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_30;
  }
  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&string, a2);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString(v36, StringRawBuffer);
  v25 = 0LL;
  if ( (Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v27) & 0x100) == 0 )
  {
    WindowsDeleteString(v25);
    v25 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &v25);
    v7 = retaddr;
    if ( v6 < 0 )
      goto LABEL_29;
  }
  v26 = 0LL;
  WindowsDeleteString(0LL);
  v26 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL))(a2, &v26);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0xBA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0xC1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v13);
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_33;
  }
  if ( WindowsIsStringEmpty(v26) )
    v10 = L"Initial";
  else
    v10 = WindowsGetStringRawBuffer(v26, 0LL);
  v11 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v27);
  memset(pv, 0, 24);
  v12 = v36;
  if ( v37 >= 8 )
    v12 = (void **)v36[0];
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s%s%s",
          v11,
          L":",
          v12);
  v14 = retaddr;
  if ( v13 < 0 )
    goto LABEL_31;
  Src = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( WindowsIsStringEmpty(v25) )
  {
    v24 = v10;
    v15 = pv[0];
    v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)&Src,
            L"%s%s%s",
            pv[0],
            L"-",
            v24);
    v17 = retaddr;
    if ( v16 >= 0 )
      goto LABEL_17;
    goto LABEL_32;
  }
  v18 = (char *)WindowsGetStringRawBuffer(v25, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString(v33, v18);
  v15 = pv[0];
  v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)&Src,
          L"%s%s%s%s%s",
          pv[0]);
  v20 = retaddr;
  if ( v19 < 0 )
  {
LABEL_33:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0xCD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v19);
    JUMPOUT(0x180069799LL);
  }
  if ( v35 >= 8 )
    operator delete(v33[0]);
LABEL_17:
  v21 = (char *)Src;
  Src = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v35 = 7LL;
  v34 = 0LL;
  LOWORD(v33[0]) = 0;
  if ( *(_WORD *)v21 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)&v21[2 * v22] );
  }
  else
  {
    v22 = 0LL;
  }
  std::wstring::assign(v33, v21, v22);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v33);
  if ( v35 >= 8 )
    operator delete(v33[0]);
  v35 = 7LL;
  v34 = 0LL;
  LOWORD(v33[0]) = 0;
  if ( v15 )
    CoTaskMemFree(v15);
  WindowsDeleteString(v26);
  v26 = 0LL;
  WindowsDeleteString(v25);
  v25 = 0LL;
  if ( v37 >= 8 )
    operator delete(v36[0]);
  v37 = 7LL;
  v36[2] = 0LL;
  LOWORD(v36[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
