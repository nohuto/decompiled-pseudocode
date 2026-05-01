/*
 * XREFs of ?GetKnownFolderSubFolder@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBU_GUID@@PEBG1PEAVString@Internal@5@@Z @ 0x18003AFA0
 * Callers:
 *     ?LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003B120 (-LoadKgl@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180041F40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::GetKnownFolderSubFolder(
        Windows::Gaming::Preview::GamesEnumeration::KglDefaults *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        HSTRING *a5)
{
  HRESULT v6; // ebx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  HRESULT v9; // eax
  unsigned __int64 v10; // r9
  HRESULT v11; // eax
  HSTRING v12; // rax
  UINT32 v13; // edx
  HSTRING v14; // rcx
  HSTRING string; // [rsp+28h] [rbp-E0h] BYREF
  PWSTR ppszPath; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h]
  __int64 v19; // [rsp+40h] [rbp-C8h]
  WCHAR pszPathOut[520]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+480h] [rbp+378h]

  ppszPath = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a5 )
  {
    v6 = -2147467261;
    v7 = 134LL;
LABEL_16:
    v10 = (unsigned int)v6;
    goto LABEL_17;
  }
  v8 = -1LL;
  v18 = -1LL;
  v19 = -1LL;
  v9 = SHGetKnownFolderPath(&FOLDERID_LocalAppData, 0x8000u, 0LL, &ppszPath);
  v6 = v9;
  if ( v9 >= 0 )
  {
    v11 = PathCchCombine(pszPathOut, 0x208uLL, ppszPath, a3);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v12 = 0LL;
      string = 0LL;
      do
        ++v8;
      while ( pszPathOut[v8] );
      v13 = -1;
      if ( v8 <= 0xFFFFFFFF )
        v13 = v8;
      v6 = v8 > 0xFFFFFFFF ? 0x80070216 : 0;
      if ( v8 <= 0xFFFFFFFF )
      {
        v6 = WindowsCreateString(pszPathOut, v13, &string);
        v12 = string;
      }
      if ( v6 >= 0 )
      {
        v14 = *a5;
        *a5 = v12;
        WindowsDeleteString(v14);
        v6 = 0;
        goto LABEL_18;
      }
      v7 = 145LL;
      goto LABEL_16;
    }
    v10 = (unsigned int)v11;
    v7 = 138LL;
  }
  else
  {
    v10 = (unsigned int)v9;
    v7 = 136LL;
  }
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
    (const char *)v10);
LABEL_18:
  if ( ppszPath )
    CoTaskMemFree(ppszPath);
  return (unsigned int)v6;
}
