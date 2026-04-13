/*
 * XREFs of ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180071F00
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W1_N@Z @ 0x180072450 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18007385C (--$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@W.c)
 *     ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180073928 (--$GetActivationFactory@UIInspectable@@@wil@@YA-AV-$com_ptr_t@UIInspectable@@Uerr_exception_poli.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180073E24 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180074044 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=1
bool __fastcall CreativeFramework::Actions::IsMsaConnected(CreativeFramework::Actions *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  int DefaultSignInAccount; // eax
  const WCHAR *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  bool v19; // si
  __int64 v21; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-A8h] BYREF
  const WCHAR *v24; // [rsp+48h] [rbp-A0h] BYREF
  const WCHAR *v25; // [rsp+50h] [rbp-98h] BYREF
  __int64 v26; // [rsp+58h] [rbp-90h] BYREF
  __int64 v27; // [rsp+60h] [rbp-88h] BYREF
  __int64 v28; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v29[4]; // [rsp+70h] [rbp-78h] BYREF
  GUID v30; // [rsp+90h] [rbp-58h] BYREF
  GUID v31; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v29[1] = -2LL;
  LODWORD(v21) = 0;
  v24 = L"https://login.microsoft.com";
  v25 = L"consumers";
  wil::GetActivationFactory<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>(v29);
  v1 = v29[0];
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v31, &v25);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v30, &v24);
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v1 + 96LL))(
         v1,
         *(_QWORD *)(v3 + 24),
         *(_QWORD *)(v2 + 24),
         &v22);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v4);
  v5 = v22;
  v28 = 0LL;
  LODWORD(v21) = 2;
  v6 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider *> *>(v22);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v28);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x638,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v6);
  v7 = v28;
  v28 = 0LL;
  v29[2] = v7;
  if ( v7 )
  {
    wil::GetActivationFactory<IInspectable>(&v25);
    v8 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, __int64 *))v25)(
           v25,
           &GUID_07650a66_66ea_489d_aa90_0dabc75f3567,
           &v23);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v8);
    v30 = GUID_00000000_0000_0000_0000_000000000000;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v23 + 264LL))(v23, v7, &v30);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v9);
    v27 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 232LL))(v23, &v27);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v10);
    v11 = v27;
    v24 = 0LL;
    LODWORD(v21) = 14;
    DefaultSignInAccount = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> *>(v27);
    if ( DefaultSignInAccount >= 0 )
      DefaultSignInAccount = (*(__int64 (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v11 + 64LL))(v11, &v24);
    if ( DefaultSignInAccount < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x638,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)DefaultSignInAccount);
    v13 = v24;
    v24 = 0LL;
    v29[3] = v13;
    v26 = 0LL;
    v14 = (*(__int64 (__fastcall **)(const WCHAR *, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, &v26);
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v14);
    v15 = v26;
    if ( v26 )
    {
      v21 = 0LL;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v21);
      if ( v16 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x50,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
          (const char *)(unsigned int)v16);
      if ( v21 )
      {
        v31 = GUID_00000000_0000_0000_0000_000000000000;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *))(*(_QWORD *)v23 + 264LL))(v23, v21, &v31);
        if ( v17 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x55,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
            (const char *)(unsigned int)v17);
        v18 = *(_QWORD *)&v30.Data1 - *(_QWORD *)&v31.Data1;
        if ( *(_QWORD *)&v30.Data1 == *(_QWORD *)&v31.Data1 )
          v18 = *(_QWORD *)v30.Data4 - *(_QWORD *)v31.Data4;
        v19 = v18 == 0;
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v13 + 16LL))(v13);
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v25 )
          (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v25 + 16LL))(v25);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        if ( v29[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
        return v19;
      }
      v15 = v26;
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v25 )
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v29[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
  return 0;
}
