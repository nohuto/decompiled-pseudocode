/*
 * XREFs of _anonymous_namespace_::GetFriendlyNameForExe @ 0x1801BC888
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BCB50 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
HSTRING *__fastcall anonymous_namespace_::GetFriendlyNameForExe(HSTRING *string, __int64 a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v6; // r14
  HRESULT v7; // esi
  WCHAR *v8; // rcx
  __int64 v9; // rdi
  WCHAR v10; // ax
  WCHAR *v11; // rdi
  unsigned __int64 v12; // rax
  UINT32 v13; // esi
  unsigned __int64 v14; // r9
  const WCHAR *FileNameW; // rdi
  HRESULT v16; // eax
  UINT32 v17; // esi
  PWSTR ppszPath; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+30h] [rbp-D8h]
  void *ppv[3]; // [rsp+38h] [rbp-D0h] BYREF
  KNOWNFOLDERID rfid; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR pszPathOut[264]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B0h] [rbp+1A8h]

  ppv[1] = (void *)-2LL;
  ppv[2] = string;
  LODWORD(v20) = 0;
  v4 = -1LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v6 = 260LL;
  if ( v5 <= 0x27
    || !(unsigned int)GUIDFromStringW(a2, &rfid)
    || (ppszPath = 0LL, SHGetKnownFolderPath(&rfid, 0x5000u, 0LL, &ppszPath) < 0)
    || (v7 = PathCchCombine(pszPathOut, 0x104uLL, ppszPath, (PCWSTR)(a2 + 78)), CoTaskMemFree(ppszPath), v7 < 0) )
  {
    v8 = pszPathOut;
    v7 = 0;
    v9 = a2 - (_QWORD)pszPathOut;
    do
    {
      if ( v6 == -2147483386 )
        break;
      v10 = *(WCHAR *)((char *)v8 + v9);
      if ( !v10 )
        break;
      *v8++ = v10;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
    {
      --v8;
      v7 = -2147024774;
    }
    *v8 = 0;
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  *string = 0LL;
  LODWORD(v20) = 1;
  ppv[0] = 0LL;
  if ( SHCreateItemFromParsingName(pszPathOut, 0LL, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, ppv) >= 0 )
  {
    ppszPath = 0LL;
    (*(void (__fastcall **)(void *, const PROPERTYKEY *, PWSTR *))(*(_QWORD *)ppv[0] + 136LL))(
      ppv[0],
      &PKEY_FileDescription,
      &ppszPath);
    v11 = ppszPath;
    if ( ppszPath )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( ppszPath[v12] );
      v13 = -1;
      if ( v12 <= 0xFFFFFFFF )
        v13 = v12;
      v14 = v12 > 0xFFFFFFFF ? 0x80070216 : 0;
      if ( v12 <= 0xFFFFFFFF )
      {
        WindowsDeleteString(*string);
        *string = 0LL;
        v14 = (unsigned int)WindowsCreateString(v11, v13, string);
        v11 = ppszPath;
      }
      if ( (v14 & 0x80000000) != 0LL )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x64,
          (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
          (const char *)v14);
    }
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( !*string )
  {
    FileNameW = PathFindFileNameW(pszPathOut);
    v16 = 0;
    if ( FileNameW )
    {
      do
        ++v4;
      while ( FileNameW[v4] );
      v17 = -1;
      if ( v4 <= 0xFFFFFFFF )
        v17 = v4;
      v16 = v4 > 0xFFFFFFFF ? 0x80070216 : 0;
      if ( v4 <= 0xFFFFFFFF )
      {
        WindowsDeleteString(*string);
        *string = 0LL;
        v16 = WindowsCreateString(FileNameW, v17, string);
      }
    }
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6A,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v16);
  }
  if ( ppv[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return string;
}
