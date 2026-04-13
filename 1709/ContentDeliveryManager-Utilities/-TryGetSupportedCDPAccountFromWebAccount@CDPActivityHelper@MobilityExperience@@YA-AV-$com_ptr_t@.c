/*
 * XREFs of ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x180046910
 * Callers:
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180046BFC (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x180046704 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(
        __int64 *a1,
        __int64 a2)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  char *StringRawBuffer; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  const WCHAR *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  void **v15; // rcx
  int v16; // eax
  void **v17; // rcx
  HSTRING v19; // [rsp+40h] [rbp-21h] BYREF
  HSTRING string; // [rsp+48h] [rbp-19h] BYREF
  __int64 v21; // [rsp+50h] [rbp-11h] BYREF
  __int64 v22; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v23[3]; // [rsp+60h] [rbp-1h] BYREF
  void *v24[3]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int64 v25; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v23[1] = -2LL;
  v23[2] = a1;
  *a1 = 0LL;
  v22 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
         a2,
         &GUID_7b56d6f8_990b_4eb5_94a7_5621f3a8b824,
         &v22);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = v22;
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 48LL))(v5, &string);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x197,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String((__int64)v24, StringRawBuffer);
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v21);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x19B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v21)(
         v21,
         &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
         v23);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = v23[0];
  WindowsDeleteString(0LL);
  v19 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 56LL))(v10, &v19);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = WindowsGetStringRawBuffer(v19, 0LL);
  v13 = CompareStringOrdinal(v12, -1, L"consumers", -1, 1);
  v14 = *a1;
  *a1 = 0LL;
  if ( v13 == 2 )
  {
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = v24;
    if ( v25 >= 0x10 )
      v15 = (void **)v24[0];
    v16 = CDPCreateMicrosoftAccount(v15, a1);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1A3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
  }
  else
  {
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v17 = v24;
    if ( v25 >= 0x10 )
      v17 = (void **)v24[0];
    CDPCreateAzureActiveDirectoryAccount(v17, a1);
  }
  WindowsDeleteString(v19);
  v19 = 0LL;
  if ( v23[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v25 >= 0x10 )
    operator delete(v24[0]);
  v25 = 15LL;
  v24[2] = 0LL;
  LOBYTE(v24[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return a1;
}
