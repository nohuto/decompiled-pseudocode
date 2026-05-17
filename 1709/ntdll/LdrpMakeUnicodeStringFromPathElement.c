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

__int64 __fastcall LdrpMakeUnicodeStringFromPathElement(__int64 a1, int a2, _OWORD *a3)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  _WORD *v10; // rdx
  __int128 v11; // [rsp+30h] [rbp-CA8h] BYREF
  _WORD v12[1600]; // [rsp+40h] [rbp-C98h] BYREF

  v11 = 0uLL;
  if ( a2 == 4 )
  {
    if ( (unsigned int)RtlGetCurrentDirectory_U(3192LL, (char *)v12) )
    {
      if ( !RtlCreateUnicodeString((__int64)&v11, v12) )
        return 0LL;
LABEL_4:
      *a3 = v11;
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
    v10 = *(_WORD **)(a1 + 8 * v8 + 64);
LABEL_16:
    if ( RtlCreateUnicodeString((__int64)&v11, v10) )
      goto LABEL_4;
    return 3221225473LL;
  }
  v9 = RtlStringCchCopyExW(
         (unsigned int)v12,
         (unsigned int)((*(_QWORD *)(a1 + 8LL * (unsigned int)(v8 + 1) + 64) - *(_QWORD *)(a1 + 8 * v8 + 64) - 2LL) >> 1)
       + 1,
         *(_QWORD *)(a1 + 8 * v8 + 64),
         0,
         0LL);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    v10 = v12;
    goto LABEL_16;
  }
  return 3221225473LL;
}
