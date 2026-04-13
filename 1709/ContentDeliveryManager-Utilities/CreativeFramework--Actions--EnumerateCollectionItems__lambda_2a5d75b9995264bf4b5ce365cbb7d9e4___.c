/*
 * XREFs of CreativeFramework::Actions::EnumerateCollectionItems__lambda_2a5d75b9995264bf4b5ce365cbb7d9e4___ @ 0x1800784C8
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180076910 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CreativeFramework::Actions::EnumerateCollectionItems__lambda_2a5d75b9995264bf4b5ce365cbb7d9e4___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  _BYTE v21[8]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string; // [rsp+40h] [rbp-31h] BYREF
  __int64 v23; // [rsp+48h] [rbp-29h] BYREF
  __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  __int64 v25; // [rsp+58h] [rbp-19h] BYREF
  __int64 v26; // [rsp+60h] [rbp-11h] BYREF
  __int64 v27; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v28[3]; // [rsp+70h] [rbp-1h] BYREF
  __int128 v29; // [rsp+88h] [rbp+17h] BYREF
  __int128 v30; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v28[1] = -2LL;
  v27 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 104LL))(a1, &v27);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v27)(
         v27,
         &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
         v28);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x15FD,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v4);
  v24 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v28[0] + 48LL))(v28[0], &v24);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v21[0] = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 56LL))(v24, v21);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  while ( v21[0] )
  {
    v23 = 0LL;
    v26 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v26);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v7);
      break;
    }
    v8 = v26;
    v9 = v23;
    v23 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, &v23);
    v11 = retaddr;
    if ( v10 < 0 )
      goto LABEL_37;
    v25 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 48LL))(v23, &v25);
    v13 = retaddr;
    if ( v12 < 0 )
      goto LABEL_36;
    string = 0LL;
    v14 = v25;
    WindowsDeleteString(0LL);
    string = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 56LL))(v14, &string);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x231,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v15);
LABEL_36:
      wil::details::in1diag3::_Throw_Hr(
        v13,
        (void *)0x22E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v12);
LABEL_37:
      wil::details::in1diag3::_Throw_Hr(
        v11,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a2, 0LL);
    v17 = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(v17, -1, StringRawBuffer, -1, 1) == 2 )
      goto LABEL_25;
    WindowsDeleteString(string);
    string = 0LL;
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    v18 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 64LL))(v24, v21);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xA9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v18);
LABEL_25:
      v19 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v23 + 56LL))(v23, &v30);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x235,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v19);
        __debugbreak();
      }
      v29 = v30;
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(***(_QWORD ***)(a2 + 8) + 192LL))(
              **(_QWORD **)(a2 + 8),
              &v29);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x236,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
      **(_BYTE **)(a2 + 16) = 1;
      WindowsDeleteString(string);
      string = 0LL;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      break;
    }
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
}
