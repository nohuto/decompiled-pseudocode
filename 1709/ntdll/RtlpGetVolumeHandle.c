/*
 * XREFs of RtlpGetVolumeHandle @ 0x18008A3C0
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x18008A2B0 (RtlpDiskSpeedInitialize.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18010CC5C (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x180088880 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwCreateFile @ 0x1800A0B60 (ZwCreateFile.c)
 */

__int64 __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v4; // rax
  wchar_t *v5; // rdx
  __int16 v6; // cx
  __int64 result; // rax
  int v8; // [rsp+60h] [rbp-29h] BYREF
  wchar_t *v9; // [rsp+68h] [rbp-21h]
  __int64 v10; // [rsp+70h] [rbp-19h] BYREF
  int v11; // [rsp+78h] [rbp-11h] BYREF
  __int64 v12; // [rsp+80h] [rbp-9h]
  int *v13; // [rsp+88h] [rbp-1h]
  int v14; // [rsp+90h] [rbp+7h]
  __int128 v15; // [rsp+98h] [rbp+Fh]
  _BYTE v16[16]; // [rsp+A8h] [rbp+1Fh] BYREF
  wchar_t pszDest[12]; // [rsp+B8h] [rbp+2Fh] BYREF

  v2 = *a1;
  v10 = 0LL;
  StringCbPrintfW(pszDest, 0x14uLL, L"\\??\\%C:", v2);
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
  v11 = 48;
  v12 = 0LL;
  v14 = 64;
  v13 = &v8;
  v15 = 0LL;
  result = ZwCreateFile(&v10, 1048704LL, &v11, v16, 0LL, 0, 7, 1, 32, 0LL, 0);
  if ( (int)result >= 0 )
  {
    *a2 = v10;
    return 0LL;
  }
  return result;
}
