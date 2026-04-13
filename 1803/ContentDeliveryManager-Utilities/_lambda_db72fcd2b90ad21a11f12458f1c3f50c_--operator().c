/*
 * XREFs of _lambda_db72fcd2b90ad21a11f12458f1c3f50c_::operator() @ 0x1800802FC
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_db72fcd2b90ad21a11f12458f1c3f50c__0__std::allocator_std::_Func_class_bool_wchar_t_const_____ptr64_Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_wchar_t_const_____ptr64_Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180084220 (std--_Func_impl_std--_Callable_obj__lambda_db72fcd2b90ad21a11f12458f1c3f50c__0__std_ea_180084220.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180080640 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall lambda_db72fcd2b90ad21a11f12458f1c3f50c_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  char *StringRawBuffer; // rax
  unsigned __int64 v9; // r8
  char v10; // bl
  char v11; // r14
  _QWORD *v12; // rax
  void **v13; // rdx
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // rcx
  bool i; // zf
  __int64 v17; // rcx
  int v18; // eax
  char *v19; // rax
  unsigned __int64 v20; // r8
  _QWORD *v21; // rax
  _WORD *v22; // rdx
  void *v23; // rsi
  unsigned __int64 v24; // r11
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  bool j; // zf
  int v28; // eax
  char v29; // di
  _QWORD *v30; // r8
  __int64 *TargetedContentTileIdentifier; // rax
  __int64 *v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  HSTRING string; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v37; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v38[2]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v39[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-19h]
  unsigned __int64 v41; // [rsp+60h] [rbp-11h]
  void *v42[2]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp+7h]
  unsigned __int64 v44; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v38[1] = -2LL;
  LODWORD(v38[0]) = 0;
  string = 0LL;
  WindowsDeleteString(0LL);
  v37 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 56LL))(a3, &v37);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
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
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(v37, 0LL);
  v44 = 7LL;
  v43 = 0LL;
  LOWORD(v42[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)&StringRawBuffer[2 * v9] );
  }
  else
  {
    v9 = 0LL;
  }
  std::wstring::assign(v42, StringRawBuffer, v9);
  v10 = 1;
  v11 = 1;
  LODWORD(v38[0]) = 1;
  v12 = (_QWORD *)(*a1 + 232LL);
  v13 = v42;
  if ( v44 >= 8 )
    v13 = (void **)v42[0];
  v14 = *(_QWORD *)(*a1 + 248LL);
  if ( *(_QWORD *)(*a1 + 256LL) >= 8uLL )
    v12 = (_QWORD *)*v12;
  v15 = v43;
  if ( v14 < v43 )
    v15 = *(_QWORD *)(*a1 + 248LL);
  for ( i = v15 == 0; ; i = v15 == 0 )
  {
    if ( i )
    {
      v17 = 0LL;
      goto LABEL_18;
    }
    if ( *(_WORD *)v12 != *(_WORD *)v13 )
      break;
    v12 = (_QWORD *)((char *)v12 + 2);
    v13 = (void **)((char *)v13 + 2);
    --v15;
  }
  v17 = *(_WORD *)v12 < *(_WORD *)v13 ? -1 : 1;
LABEL_18:
  v18 = v14 != v43;
  if ( v14 < v43 )
    v18 = -1;
  if ( (_DWORD)v17 )
    v18 = v17;
  if ( v18 )
  {
    v24 = v41;
    v23 = (void *)v39[0];
  }
  else
  {
    v19 = (char *)WindowsGetStringRawBuffer(string, 0LL);
    v41 = 7LL;
    v40 = 0LL;
    LOWORD(v39[0]) = 0;
    if ( *(_WORD *)v19 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_WORD *)&v19[2 * v20] );
    }
    else
    {
      v20 = 0LL;
    }
    std::wstring::assign(v39, v19, v20);
    v11 = 3;
    v21 = (_QWORD *)(*a1 + 200LL);
    v22 = v39;
    v23 = (void *)v39[0];
    v24 = v41;
    if ( v41 >= 8 )
      v22 = (_WORD *)v39[0];
    v25 = *(_QWORD *)(*a1 + 216LL);
    if ( *(_QWORD *)(*a1 + 224LL) >= 8uLL )
      v21 = (_QWORD *)*v21;
    v26 = v40;
    if ( v25 < v40 )
      v26 = *(_QWORD *)(*a1 + 216LL);
    for ( j = v26 == 0; ; j = v26 == 0 )
    {
      if ( j )
      {
        v17 = 0LL;
        goto LABEL_39;
      }
      if ( *(_WORD *)v21 != *v22 )
        break;
      v21 = (_QWORD *)((char *)v21 + 2);
      ++v22;
      --v26;
    }
    v17 = *(_WORD *)v21 < *v22 ? -1 : 1;
LABEL_39:
    v28 = v25 != v40;
    if ( v25 < v40 )
      v28 = -1;
    if ( (_DWORD)v17 )
      v28 = v17;
    if ( !v28 )
    {
      v29 = 1;
      goto LABEL_48;
    }
  }
  v29 = 0;
LABEL_48:
  if ( (v11 & 2) != 0 )
  {
    if ( v24 >= 8 )
      operator delete(v23);
    v41 = 7LL;
    v40 = 0LL;
    LOWORD(v39[0]) = 0;
  }
  if ( v44 >= 8 )
    operator delete(v42[0]);
  if ( v29 )
  {
    v30 = (_QWORD *)(*a1 + 168LL);
    if ( *(_QWORD *)(*a1 + 192LL) >= 8uLL )
      v30 = (_QWORD *)*v30;
    TargetedContentTileIdentifier = (__int64 *)CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
                                                 v17,
                                                 v38,
                                                 v30,
                                                 a2);
    v32 = (__int64 *)a1[1];
    v33 = *TargetedContentTileIdentifier;
    *TargetedContentTileIdentifier = 0LL;
    v34 = *v32;
    *v32 = v33;
    if ( v34 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    if ( v38[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v38[0] + 16LL))(v38[0]);
    v10 = 0;
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v37);
  return v10;
}
