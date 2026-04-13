/*
 * XREFs of ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800816E8
 * Callers:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x1800811B8 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180062C4C (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18006B888 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180070F6C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180082F98 (--$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@.c)
 *     ??$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180083060 (--$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
const WCHAR *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(
        __int64 a1,
        const WCHAR *a2,
        char *a3,
        char *a4)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void **v11; // rax
  unsigned __int64 v12; // r8
  const WCHAR *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rbx
  int v25; // eax
  HSTRING string; // [rsp+38h] [rbp-69h] BYREF
  __int64 v28; // [rsp+40h] [rbp-61h] BYREF
  int v29; // [rsp+48h] [rbp-59h]
  __int64 v30; // [rsp+50h] [rbp-51h] BYREF
  __int64 v31; // [rsp+58h] [rbp-49h] BYREF
  __int64 v32; // [rsp+60h] [rbp-41h] BYREF
  __int64 v33; // [rsp+68h] [rbp-39h] BYREF
  __int64 v34; // [rsp+70h] [rbp-31h] BYREF
  const WCHAR *v35[3]; // [rsp+78h] [rbp-29h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v38; // [rsp+A8h] [rbp+7h]
  _BYTE v39[32]; // [rsp+B0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v35[1] = (const WCHAR *)-2LL;
  v35[2] = a2;
  v29 = 0;
  v38 = 7LL;
  v37 = 0LL;
  LOWORD(Src[0]) = 0;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&a4[2 * v8] );
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&a3[2 * v9] );
  v10 = v8 + v9 + 2;
  if ( v10 != 7 && std::wstring::_Grow(Src, v10, 1) )
  {
    v37 = 0LL;
    v11 = Src;
    if ( v38 >= 8 )
      v11 = (void **)Src[0];
    *(_WORD *)v11 = 0;
  }
  if ( *(_WORD *)a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)&a3[2 * v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::append(Src, a3, v12);
  std::wstring::append(Src, (char *)L"_", 1uLL);
  if ( *(_WORD *)a4 )
  {
    do
      ++v7;
    while ( *(_WORD *)&a4[2 * v7] );
  }
  else
  {
    v7 = 0LL;
  }
  std::wstring::append(Src, a4, v7);
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>((const WCHAR *)&v32);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>(&v34);
  v28 = 0LL;
  v13 = (const WCHAR *)Src;
  if ( v38 >= 8 )
    v13 = (const WCHAR *)Src[0];
  v35[0] = v13;
  v14 = v32;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v39, v35);
  v28 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 120LL))(
          v14,
          *(_QWORD *)(v15 + 24),
          0LL,
          &v28);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1EB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_40;
  }
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>(&v33);
  v17 = v33;
  WindowsDeleteString(0LL);
  string = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v17 + 64LL))(v17, &string);
  v19 = retaddr;
  if ( v18 < 0 )
  {
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x1F0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_41;
  }
  v31 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, string, &v31);
  v21 = retaddr;
  if ( v20 < 0 )
  {
LABEL_41:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x1F4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v20);
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x1F6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v22);
    __debugbreak();
  }
  v30 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v31 + 64LL))(v31, v28, &v30);
  v23 = retaddr;
  if ( v22 < 0 )
    goto LABEL_42;
  *(_QWORD *)a2 = 0LL;
  v29 = 1;
  v24 = v32;
  WindowsDeleteString(0LL);
  *(_QWORD *)a2 = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64, const WCHAR *))(*(_QWORD *)v24 + 96LL))(v24, v30, a2);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v25);
    JUMPOUT(0x180081A6DLL);
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v38 >= 8 )
    operator delete(Src[0]);
  return a2;
}
