/*
 * XREFs of ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180014D4C
 * Callers:
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180015504 (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180038084 (-_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEA.c)
 *     _lambda_9420435491f7262d86e5ad3a94262e3a_::operator() @ 0x180039288 (_lambda_9420435491f7262d86e5ad3a94262e3a_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SerializeRelatedProcessArray(__int64 (__fastcall ***a1)(_QWORD, GUID *, _QWORD *), HSTRING *a2)
{
  HRESULT v3; // eax
  HRESULT v4; // ebx
  __int64 v5; // rdx
  char v6; // si
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  PCWSTR StringRawBuffer; // rax
  const WCHAR *v11; // rsi
  unsigned __int64 v12; // rcx
  UINT32 v13; // r14d
  HRESULT v14; // eax
  int v15; // eax
  int v16; // ebx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  HRESULT v19; // eax
  __int64 v20; // rdx
  HSTRING v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  HSTRING string2; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+28h] [rbp-28h] BYREF
  HSTRING v27; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v28[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v30; // [rsp+90h] [rbp+40h] BYREF
  HSTRING newString; // [rsp+A0h] [rbp+50h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+58h] BYREF

  v28[1] = -2LL;
  string = 0LL;
  v28[0] = 0LL;
  v26 = 0LL;
  v3 = (**a1)(a1, &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e, v28);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 415LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_42;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v28[0] + 48LL))(v28[0], &v26);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 416LL;
    goto LABEL_7;
  }
  WindowsDeleteString(string);
  string = 0LL;
  v3 = WindowsCreateString(&word_18004E72C, 1u, &string);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 417LL;
    goto LABEL_7;
  }
  v6 = 0;
  newString = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 56LL))(v26, &v30);
  if ( v7 >= 0 )
  {
    while ( v30 )
    {
      v27 = 0LL;
      v8 = v26;
      WindowsDeleteString(0LL);
      v27 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 48LL))(v8, &v27);
      v4 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1AA,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_32;
      }
      string2 = 0LL;
      StringRawBuffer = WindowsGetStringRawBuffer(v27, 0LL);
      v11 = StringRawBuffer;
      if ( StringRawBuffer )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( StringRawBuffer[v12] );
        v13 = -1;
        if ( v12 <= 0xFFFFFFFF )
          v13 = v12;
        v4 = v12 > 0xFFFFFFFF ? 0x80070216 : 0;
        if ( v12 <= 0xFFFFFFFF )
        {
          WindowsDeleteString(string2);
          string2 = 0LL;
          v4 = WindowsCreateString(v11, v13, &string2);
        }
        if ( v4 < 0 )
        {
          v17 = (unsigned int)v4;
          v18 = 429LL;
          goto LABEL_30;
        }
      }
      WindowsDeleteString(newString);
      newString = 0LL;
      v14 = WindowsConcatString(*a2, string2, &newString);
      v4 = v14;
      if ( v14 < 0 )
      {
        v18 = 430LL;
        goto LABEL_29;
      }
      WindowsDeleteString(*a2);
      *a2 = newString;
      newString = 0LL;
      WindowsDeleteString(0LL);
      newString = 0LL;
      v14 = WindowsConcatString(*a2, string, &newString);
      v4 = v14;
      if ( v14 < 0 )
      {
        v18 = 433LL;
LABEL_29:
        v17 = (unsigned int)v14;
LABEL_30:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v18,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)v17);
        WindowsDeleteString(string2);
        string2 = 0LL;
LABEL_32:
        WindowsDeleteString(v27);
        goto LABEL_39;
      }
      WindowsDeleteString(*a2);
      *a2 = newString;
      newString = 0LL;
      v6 = 1;
      v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 64LL))(v26, &v30);
      v16 = v15;
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1B6,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v15);
      WindowsDeleteString(string2);
      string2 = 0LL;
      WindowsDeleteString(v27);
      if ( v16 < 0 )
        goto LABEL_36;
    }
    if ( v6 )
      goto LABEL_36;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v7);
  }
  WindowsDeleteString(string);
  string = 0LL;
  v19 = WindowsCreateString(&word_18004E730, 2u, &string);
  v4 = v19;
  if ( v19 < 0 )
  {
    v20 = 443LL;
    goto LABEL_38;
  }
LABEL_36:
  WindowsDeleteString(newString);
  newString = 0LL;
  v19 = WindowsConcatString(*a2, string, &newString);
  v4 = v19;
  if ( v19 < 0 )
  {
    v20 = 446LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v19);
LABEL_39:
    v21 = newString;
    goto LABEL_41;
  }
  WindowsDeleteString(*a2);
  *a2 = newString;
  v21 = 0LL;
  newString = 0LL;
  v4 = 0;
LABEL_41:
  WindowsDeleteString(v21);
  newString = 0LL;
LABEL_42:
  v22 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v28[0];
  if ( v28[0] )
  {
    v28[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  WindowsDeleteString(string);
  return (unsigned int)v4;
}
