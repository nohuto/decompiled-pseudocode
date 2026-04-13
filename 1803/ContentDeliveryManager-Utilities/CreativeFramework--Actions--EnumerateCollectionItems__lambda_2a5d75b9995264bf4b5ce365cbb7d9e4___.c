/*
 * XREFs of CreativeFramework::Actions::EnumerateCollectionItems__lambda_2a5d75b9995264bf4b5ce365cbb7d9e4___ @ 0x180083128
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800815C0 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
HRESULT __fastcall CreativeFramework::Actions::EnumerateCollectionItems__lambda_2a5d75b9995264bf4b5ce365cbb7d9e4___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  HRESULT result; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v18; // rax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  _BYTE v23[8]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string; // [rsp+40h] [rbp-31h] BYREF
  __int64 v25; // [rsp+48h] [rbp-29h] BYREF
  __int64 v26; // [rsp+50h] [rbp-21h] BYREF
  __int64 v27; // [rsp+58h] [rbp-19h] BYREF
  __int64 v28; // [rsp+60h] [rbp-11h] BYREF
  __int64 v29; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v30[3]; // [rsp+70h] [rbp-1h] BYREF
  __int128 v31; // [rsp+88h] [rbp+17h] BYREF
  __int128 v32; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30[1] = -2LL;
  v29 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 104LL))(a1, &v29);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v29)(
         v29,
         &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
         v30);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v4);
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x98,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v26 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v30[0] + 48LL))(v30[0], &v26);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_37;
  v23[0] = 0;
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 56LL))(v26, v23);
  if ( result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)result);
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0xA9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)result);
    goto LABEL_40;
  }
  while ( 1 )
  {
    if ( !v23[0] )
      goto LABEL_28;
    v25 = 0LL;
    v28 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v28);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x180083560LL);
    }
    v9 = v28;
    v10 = v25;
    v25 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 56LL))(v9, &v25);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_44;
    v27 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, &v27);
    v14 = retaddr;
    if ( v13 < 0 )
      goto LABEL_43;
    string = 0LL;
    v15 = v27;
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 56LL))(v15, &string);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x231,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v16);
LABEL_43:
      wil::details::in1diag3::Throw_Hr(
        v14,
        (void *)0x22E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v13);
LABEL_44:
      wil::details::in1diag3::Throw_Hr(
        v12,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a2, 0LL);
    v18 = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(v18, -1, StringRawBuffer, -1, 1) == 2 )
      break;
    WindowsDeleteString(string);
    string = 0LL;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 64LL))(v26, v23);
    v19 = retaddr;
    if ( result < 0 )
      goto LABEL_39;
    if ( v28 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v25 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 56LL))(v25, &v32);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x235,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  v31 = v32;
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(***(_QWORD ***)(a2 + 8) + 208LL))(**(_QWORD **)(a2 + 8), &v31);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x236,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  **(_BYTE **)(a2 + 16) = 1;
  result = WindowsDeleteString(string);
  string = 0LL;
  if ( v27 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v25 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
LABEL_28:
  if ( v26 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v30[0] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
  if ( v29 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return result;
}
