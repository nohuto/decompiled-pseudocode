/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x18010CA48
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180088880 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18010CBB0 (RtlpQueryDiskSpacePolicyByHandle.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, _DWORD *a2)
{
  int File; // ebx
  __int64 v4; // rax
  wchar_t *v5; // rdx
  __int16 v6; // cx
  int v8; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v9; // [rsp+70h] [rbp-90h]
  int v10; // [rsp+78h] [rbp-88h]
  __int64 v11; // [rsp+80h] [rbp-80h]
  int *v12; // [rsp+88h] [rbp-78h]
  int v13; // [rsp+90h] [rbp-70h]
  __int128 v14; // [rsp+98h] [rbp-68h]
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  if ( BYTE2(RtlpUserPolicies) )
  {
    File = 0;
    *a2 = BYTE2(RtlpUserPolicies);
  }
  else
  {
    StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
    v8 = 0;
    v4 = 0x7FFFLL;
    v9 = 0LL;
    v5 = pszDest;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v4;
    }
    while ( v4 );
    if ( v4 )
      v6 = 0x7FFF - v4;
    else
      v6 = 0;
    if ( v4 )
    {
      LOWORD(v8) = 2 * v6;
      HIWORD(v8) = 2 * v6 + 2;
      v9 = pszDest;
    }
    v10 = 48;
    v11 = 0LL;
    v13 = 64;
    v12 = &v8;
    v14 = 0LL;
    File = ZwCreateFile();
    if ( File >= 0 )
    {
      File = RtlpQueryDiskSpacePolicyByHandle(0LL, a2);
      if ( File >= 0 )
        return 0;
    }
  }
  return (unsigned int)File;
}
