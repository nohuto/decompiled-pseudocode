/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800CEEC8
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEA00 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x1800A2390 (NtOpenKeyEx.c)
 *     RtlStringCbPrintfW @ 0x1800CF18C (RtlStringCbPrintfW.c)
 */

__int64 __fastcall LdrpAppxGetRemediationRegistryKey(int a1)
{
  signed int v1; // edx
  __int64 v2; // r8
  wchar_t *v3; // rax
  __int16 v4; // r9
  int *v5; // rax
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  wchar_t *v8; // [rsp+28h] [rbp-D8h]
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B8h]
  int *v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+58h] [rbp-A8h]
  __int128 v15; // [rsp+60h] [rbp-A0h]
  wchar_t Buffer[264]; // [rsp+70h] [rbp-90h] BYREF

  v9 = 10616992;
  v10 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange";
  if ( a1 != -1073740702 )
  {
    v5 = &v9;
    goto LABEL_12;
  }
  v1 = RtlStringCbPrintfW(Buffer);
  if ( v1 >= 0 )
  {
    v7 = 0;
    v2 = 0x7FFFLL;
    v8 = 0LL;
    v3 = Buffer;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --v2;
    }
    while ( v2 );
    v1 = v2 == 0 ? 0xC000000D : 0;
    v4 = v2 ? 0x7FFF - v2 : 0;
    if ( v2 )
    {
      LOWORD(v7) = 2 * v4;
      HIWORD(v7) = 2 * v4 + 2;
      v8 = Buffer;
      v5 = &v7;
LABEL_12:
      v12 = 0LL;
      v11 = 48;
      v14 = 64;
      v13 = v5;
      v15 = 0LL;
      return (unsigned int)NtOpenKeyEx();
    }
  }
  return (unsigned int)v1;
}
