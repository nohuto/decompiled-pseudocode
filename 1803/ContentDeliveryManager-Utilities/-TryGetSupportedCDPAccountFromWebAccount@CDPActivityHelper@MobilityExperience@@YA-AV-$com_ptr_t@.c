/*
 * XREFs of ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x18004A5DC
 * Callers:
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18004A8E0 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x18004A3C4 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(
        __int64 *a1,
        __int64 a2)
{
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  char *StringRawBuffer; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  const WCHAR *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  void **v18; // rcx
  int v19; // eax
  void **v20; // rcx
  HSTRING v22; // [rsp+40h] [rbp-21h] BYREF
  HSTRING string; // [rsp+48h] [rbp-19h] BYREF
  __int64 v24; // [rsp+50h] [rbp-11h] BYREF
  __int64 v25; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v26[3]; // [rsp+60h] [rbp-1h] BYREF
  void *v27[3]; // [rsp+78h] [rbp+17h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v26[1] = -2LL;
  v26[2] = a1;
  *a1 = 0LL;
  v25 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
         a2,
         &GUID_7b56d6f8_990b_4eb5_94a7_5621f3a8b824,
         &v25);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v4);
    goto LABEL_28;
  }
  v5 = v25;
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 48LL))(v5, &string);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x197,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v6);
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x19B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String((__int64)v27, StringRawBuffer);
  v24 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v24);
  v10 = retaddr;
  if ( v9 < 0 )
    goto LABEL_29;
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v24)(
          v24,
          &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
          v26);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v11);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x19F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v12 = v26[0];
  WindowsDeleteString(0LL);
  v22 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 56LL))(v12, &v22);
  v14 = retaddr;
  if ( v13 < 0 )
    goto LABEL_31;
  v15 = WindowsGetStringRawBuffer(v22, 0LL);
  v16 = CompareStringOrdinal(v15, -1, L"consumers", -1, 1);
  v17 = *a1;
  *a1 = 0LL;
  if ( v16 == 2 )
  {
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = v27;
    if ( v28 >= 0x10 )
      v18 = (void **)v27[0];
    v19 = CDPCreateMicrosoftAccount(v18, a1);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1A3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\cdpactivityhelper.h",
        (const char *)(unsigned int)v19);
      __debugbreak();
    }
  }
  else
  {
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v20 = v27;
    if ( v28 >= 0x10 )
      v20 = (void **)v27[0];
    CDPCreateAzureActiveDirectoryAccount(v20, a1);
  }
  WindowsDeleteString(v22);
  v22 = 0LL;
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v28 >= 0x10 )
    operator delete(v27[0]);
  v28 = 15LL;
  v27[2] = 0LL;
  LOBYTE(v27[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return a1;
}
