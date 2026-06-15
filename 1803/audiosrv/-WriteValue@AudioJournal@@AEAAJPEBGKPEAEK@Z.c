/*
 * XREFs of ?WriteValue@AudioJournal@@AEAAJPEBGKPEAEK@Z @ 0x180007694
 * Callers:
 *     ?WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x180007770 (-WriteStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z.c)
 *     ?ResetData@AudioJournal@@AEAAX_N@Z @ 0x1800077F0 (-ResetData@AudioJournal@@AEAAX_N@Z.c)
 *     ?Initialize@AudioJournal@@AEAAXXZ @ 0x18002A4E8 (-Initialize@AudioJournal@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AudioJournal::WriteValue(
        AudioJournal *this,
        const unsigned __int16 *a2,
        DWORD a3,
        unsigned __int8 *a4,
        DWORD cbData)
{
  LSTATUS v8; // eax
  signed int v9; // ebx
  LSTATUS v10; // eax
  __int64 v12; // rdx
  int lpData; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  hKey = 0LL;
  v8 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Audio\\Journal",
         0,
         0LL,
         0,
         2u,
         0LL,
         &hKey,
         0LL);
  v9 = v8;
  if ( v8 > 0 )
    v9 = (unsigned __int16)v8 | 0x80070000;
  if ( v9 < 0 )
  {
    v12 = 454LL;
  }
  else
  {
    v10 = RegSetValueExW(hKey, a2, 0, a3, a4, cbData);
    v9 = v10;
    if ( v10 > 0 )
      v9 = (unsigned __int16)v10 | 0x80070000;
    if ( v9 >= 0 )
    {
      v9 = 0;
      goto LABEL_8;
    }
    v12 = 457LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
    (const char *)(unsigned int)v9,
    lpData);
LABEL_8:
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v9;
}
