/*
 * XREFs of sub_1800CC418 @ 0x1800CC418
 * Callers:
 *     sub_1800CB800 @ 0x1800CB800 (sub_1800CB800.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x180076950 (RtlGetCurrentDirectory_U.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CC52C @ 0x1800CC52C (sub_1800CC52C.c)
 */

__int64 __fastcall sub_1800CC418(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  WCHAR *v9; // r8
  int v10; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-CA8h] BYREF
  WCHAR Buffer[1600]; // [rsp+40h] [rbp-C98h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( a2 == 4 )
  {
    if ( RtlGetCurrentDirectory_U(0xC78u, Buffer) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, Buffer) )
        return 0LL;
LABEL_4:
      *a3 = DestinationString;
      return 0LL;
    }
    return 3221225473LL;
  }
  v7 = *(unsigned __int16 *)(a1 + 112);
  v8 = 0LL;
  if ( *(_DWORD *)(a1 + 40) != a2 )
  {
    do
    {
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        return 3221226021LL;
    }
    while ( *(_DWORD *)(a1 + 4 * v8 + 40) != a2 );
  }
  if ( (unsigned int)v8 >= v7 )
    return 3221226021LL;
  v9 = *(WCHAR **)(a1 + 8 * v8 + 64);
  if ( (_DWORD)v8 == v7 - 1 )
    goto LABEL_15;
  v10 = sub_1800CC52C(
          (unsigned int)Buffer,
          (unsigned int)((*(_QWORD *)(a1 + 8LL * (unsigned int)(v8 + 1) + 64) - (_QWORD)v9 - 2LL) >> 1) + 1,
          (_DWORD)v9,
          0,
          0LL);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
  {
    v9 = Buffer;
LABEL_15:
    if ( RtlCreateUnicodeString(&DestinationString, v9) )
      goto LABEL_4;
  }
  return 3221225473LL;
}
