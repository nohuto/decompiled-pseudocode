/*
 * XREFs of ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x180076A3C
 * Callers:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x180076568 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x18005B304 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180065040 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180078264 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     ??$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180078330 (--$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@.c)
 *     ??$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800783FC (--$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
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
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  HSTRING string; // [rsp+38h] [rbp-69h] BYREF
  __int64 v25; // [rsp+40h] [rbp-61h] BYREF
  int v26; // [rsp+48h] [rbp-59h]
  __int64 v27; // [rsp+50h] [rbp-51h] BYREF
  __int64 v28; // [rsp+58h] [rbp-49h] BYREF
  __int64 v29; // [rsp+60h] [rbp-41h] BYREF
  __int64 v30; // [rsp+68h] [rbp-39h] BYREF
  __int64 v31; // [rsp+70h] [rbp-31h] BYREF
  const WCHAR *v32[3]; // [rsp+78h] [rbp-29h] BYREF
  void *Src[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v35; // [rsp+A8h] [rbp+7h]
  _BYTE v36[32]; // [rsp+B0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v32[1] = (const WCHAR *)-2LL;
  v32[2] = a2;
  v26 = 0;
  v35 = 7LL;
  v34 = 0LL;
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
    v34 = 0LL;
    v11 = Src;
    if ( v35 >= 8 )
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
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>(&v29);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>(&v31);
  v25 = 0LL;
  v13 = (const WCHAR *)Src;
  if ( v35 >= 8 )
    v13 = (const WCHAR *)Src[0];
  v32[0] = v13;
  v14 = v29;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v36, v32);
  v25 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v14 + 120LL))(
          v14,
          *(_QWORD *)(v15 + 24),
          0LL,
          &v25);
  if ( v16 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1EB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v16);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>(&v30);
  v17 = v30;
  WindowsDeleteString(0LL);
  string = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v17 + 64LL))(v17, &string);
  if ( v18 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1F0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18);
  v28 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, string, &v28);
  if ( v19 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1F4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v19);
  v27 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v28 + 64LL))(v28, v25, &v27);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1F6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  *(_QWORD *)a2 = 0LL;
  v26 = 1;
  v21 = v29;
  WindowsDeleteString(0LL);
  *(_QWORD *)a2 = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, const WCHAR *))(*(_QWORD *)v21 + 96LL))(v21, v27, a2);
  if ( v22 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1F8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v22);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v35 >= 8 )
    operator delete(Src[0]);
  return a2;
}
