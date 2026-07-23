/*
 * XREFs of LdrpAppxGetRemediationRegistryKey @ 0x1800CEEC8
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CEA00 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtOpenKeyEx @ 0x1800A2390 (NtOpenKeyEx.c)
 *     RtlStringCbPrintfW @ 0x1800CF18C (RtlStringCbPrintfW.c)
 */

__int64 __fastcall LdrpAppxGetRemediationRegistryKey(int a1, __int64 a2, HANDLE *a3)
{
  signed int v4; // edx
  __int64 v5; // r8
  wchar_t *v6; // rax
  __int16 v7; // r9
  _UNICODE_STRING *v8; // rax
  ACCESS_MASK v9; // edx
  int v11; // [rsp+20h] [rbp-E0h] BYREF
  wchar_t *v12; // [rsp+28h] [rbp-D8h]
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v14; // [rsp+38h] [rbp-C8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Buffer[264]; // [rsp+70h] [rbp-90h] BYREF

  v13 = 10616992;
  v14 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange";
  if ( a1 != -1073740702 )
  {
    v8 = (_UNICODE_STRING *)&v13;
    v9 = 131097;
    goto LABEL_12;
  }
  v4 = RtlStringCbPrintfW(Buffer);
  if ( v4 >= 0 )
  {
    v11 = 0;
    v5 = 0x7FFFLL;
    v12 = 0LL;
    v6 = Buffer;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v4 = v5 == 0 ? 0xC000000D : 0;
    v7 = v5 ? 0x7FFF - v5 : 0;
    if ( v5 )
    {
      LOWORD(v11) = 2 * v7;
      HIWORD(v11) = 2 * v7 + 2;
      v12 = Buffer;
      v8 = (_UNICODE_STRING *)&v11;
      v9 = 131353;
LABEL_12:
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = v8;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      return (unsigned int)NtOpenKeyEx(a3, v9, &ObjectAttributes, 0);
    }
  }
  return (unsigned int)v4;
}
