/*
 * XREFs of LdrpMakeUnicodeStringFromPathElement @ 0x1800D2574
 * Callers:
 *     LdrpLogEtwDllSearchResults @ 0x1800D1BE0 (LdrpLogEtwDllSearchResults.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18004EE70 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x18007A850 (RtlGetCurrentDirectory_U.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     RtlStringCchCopyExW @ 0x1800D2688 (RtlStringCchCopyExW.c)
 */

__int64 __fastcall LdrpMakeUnicodeStringFromPathElement(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  WCHAR *v10; // rdx
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
  if ( (_DWORD)v8 == v7 - 1 )
  {
    v10 = *(WCHAR **)(a1 + 8 * v8 + 64);
LABEL_16:
    if ( RtlCreateUnicodeString(&DestinationString, v10) )
      goto LABEL_4;
    return 3221225473LL;
  }
  v9 = RtlStringCchCopyExW(
         (unsigned int)Buffer,
         (unsigned int)((*(_QWORD *)(a1 + 8LL * (unsigned int)(v8 + 1) + 64) - *(_QWORD *)(a1 + 8 * v8 + 64) - 2LL) >> 1)
       + 1,
         *(_QWORD *)(a1 + 8 * v8 + 64),
         0,
         0LL);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    v10 = Buffer;
    goto LABEL_16;
  }
  return 3221225473LL;
}
