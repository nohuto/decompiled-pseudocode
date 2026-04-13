/*
 * XREFs of _lambda_db72fcd2b90ad21a11f12458f1c3f50c_::operator() @ 0x180075808
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_db72fcd2b90ad21a11f12458f1c3f50c__0__std::allocator_std::_Func_class_bool_wchar_t_const_____ptr64_Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wchar_t_const_____ptr64_Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800792D0 (std--_Func_impl_std--_Callable_obj__lambda_db72fcd2b90ad21a11f12458f1c3f50c__0__std_ea_1800792D0.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180075A70 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x180078124 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall lambda_db72fcd2b90ad21a11f12458f1c3f50c_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  char *StringRawBuffer; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  char v11; // di
  char v12; // si
  __int64 v13; // rcx
  char *v14; // rax
  char v15; // bl
  _QWORD *v16; // r8
  __int64 *TargetedContentTileIdentifier; // rax
  __int64 *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  HSTRING string; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v23; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-39h] BYREF
  void *v25[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v26; // [rsp+58h] [rbp-19h]
  unsigned __int64 v27; // [rsp+60h] [rbp-11h]
  void *v28[3]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v24[1] = -2LL;
  LODWORD(v24[0]) = 0;
  string = 0LL;
  WindowsDeleteString(0LL);
  v23 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 56LL))(a3, &v23);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x147,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  WindowsDeleteString(string);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 64LL))(a3, &string);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(v23, 0LL);
  v29 = 7LL;
  v28[2] = 0LL;
  LOWORD(v28[0]) = 0;
  v9 = -1LL;
  if ( *(_WORD *)StringRawBuffer )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)&StringRawBuffer[2 * v10] );
  }
  else
  {
    v10 = 0LL;
  }
  std::wstring::assign(v28, StringRawBuffer, v10);
  v11 = 1;
  v12 = 1;
  LODWORD(v24[0]) = 1;
  if ( !(unsigned __int8)std::operator==<wchar_t>(*a1 + 232LL, v28) )
    goto LABEL_14;
  v14 = (char *)WindowsGetStringRawBuffer(string, 0LL);
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  if ( *(_WORD *)v14 )
  {
    do
      ++v9;
    while ( *(_WORD *)&v14[2 * v9] );
  }
  else
  {
    v9 = 0LL;
  }
  std::wstring::assign(v25, v14, v9);
  v12 = 3;
  v15 = 1;
  if ( !(unsigned __int8)std::operator==<wchar_t>(*a1 + 200LL, v25) )
LABEL_14:
    v15 = 0;
  if ( (v12 & 2) != 0 )
  {
    if ( v27 >= 8 )
      operator delete(v25[0]);
    v27 = 7LL;
    v26 = 0LL;
    LOWORD(v25[0]) = 0;
  }
  if ( v29 >= 8 )
    operator delete(v28[0]);
  if ( v15 )
  {
    v16 = (_QWORD *)(*a1 + 168LL);
    if ( *(_QWORD *)(*a1 + 192LL) >= 8uLL )
      v16 = (_QWORD *)*v16;
    TargetedContentTileIdentifier = (__int64 *)CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
                                                 v13,
                                                 v24,
                                                 v16,
                                                 a2);
    v18 = (__int64 *)a1[1];
    v19 = *TargetedContentTileIdentifier;
    *TargetedContentTileIdentifier = 0LL;
    v20 = *v18;
    *v18 = v19;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v24[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24[0] + 16LL))(v24[0]);
    v11 = 0;
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v23);
  return v11;
}
