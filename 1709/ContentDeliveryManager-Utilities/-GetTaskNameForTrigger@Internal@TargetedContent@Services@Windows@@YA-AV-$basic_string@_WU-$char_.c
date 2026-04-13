/*
 * XREFs of ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F548
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060150 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060500 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800607B0 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18005F0B4 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18005F1FC (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x18005F2C4 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F394 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800613C4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180061440 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::GetTaskNameForTrigger(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  char *StringRawBuffer; // rax
  __int16 v6; // ax
  char v7; // di
  int v8; // eax
  int v9; // eax
  PCWSTR v10; // r14
  wchar_t *v11; // rax
  int *v12; // rcx
  int v13; // eax
  int v14; // eax
  wchar_t **v15; // rax
  const wchar_t *v16; // r9
  int v17; // eax
  void *v18; // rbx
  int v19; // eax
  int v20; // eax
  char *v21; // rdx
  unsigned __int64 v22; // r8
  HSTRING v24; // [rsp+48h] [rbp-69h] BYREF
  HSTRING v25; // [rsp+50h] [rbp-61h] BYREF
  int v26; // [rsp+58h] [rbp-59h] BYREF
  int v27; // [rsp+5Ch] [rbp-55h] BYREF
  HSTRING string; // [rsp+60h] [rbp-51h] BYREF
  void *Src; // [rsp+68h] [rbp-49h] BYREF
  __int64 v30; // [rsp+70h] [rbp-41h]
  __int64 v31; // [rsp+78h] [rbp-39h]
  LPVOID pv[4]; // [rsp+80h] [rbp-31h] BYREF
  void *v33[2]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-1h]
  unsigned __int64 v35; // [rsp+B8h] [rbp+7h]
  int v36[2]; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v37; // [rsp+D0h] [rbp+1Fh]
  unsigned __int64 v38; // [rsp+D8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  pv[3] = (LPVOID)-2LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v26);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&string, a2);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  Windows::Services::TargetedContent::Internal::NormalizedString((void **)v36, StringRawBuffer);
  v24 = 0LL;
  v6 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v26);
  v7 = v6;
  if ( (v6 & 0x100) == 0 )
  {
    WindowsDeleteString(v24);
    v24 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &v24);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
  }
  v25 = 0LL;
  WindowsDeleteString(0LL);
  v25 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL))(a2, &v25);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  if ( WindowsIsStringEmpty(v25) )
    v10 = (PCWSTR)L"Initial";
  else
    v10 = WindowsGetStringRawBuffer(v25, 0LL);
  v11 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v26);
  memset(pv, 0, 24);
  v12 = v36;
  if ( v38 >= 8 )
    v12 = *(int **)v36;
  v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          pv,
          L"%s%s%s",
          v11,
          L":",
          v12);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  if ( (v7 & 0x81) == 0x81 && !WindowsIsStringEmpty(v24) )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 112LL))(a2, &v27);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xDA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = &off_18015C6C0;
    while ( *((_DWORD *)v15 + 2) != v27 )
    {
      v15 += 2;
      if ( v15 == &off_18015C6F0 )
      {
        v16 = L"string";
        goto LABEL_24;
      }
    }
    v16 = *v15;
LABEL_24:
    v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::ConcatFormat(
            pv,
            L"%s%s",
            L":",
            v16);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xDB,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
  }
  Src = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( WindowsIsStringEmpty(v24) )
  {
    v18 = pv[0];
    v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            &Src,
            L"%s%s%s",
            pv[0],
            L"-",
            v10);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xE3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
  }
  else
  {
    WindowsGetStringRawBuffer(v24, 0LL);
    v18 = pv[0];
    v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            &Src,
            L"%s%s%s%s%s",
            pv[0]);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
  }
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
  if ( v18 )
    CoTaskMemFree(v18);
  WindowsDeleteString(v25);
  v25 = 0LL;
  WindowsDeleteString(v24);
  v24 = 0LL;
  if ( v38 >= 8 )
    operator delete(*(void **)v36);
  v38 = 7LL;
  v37 = 0LL;
  LOWORD(v36[0]) = 0;
  WindowsDeleteString(string);
  return a1;
}
