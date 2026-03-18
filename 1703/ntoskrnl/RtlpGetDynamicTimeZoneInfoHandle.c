/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x1405A62E0
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1405A61A8 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCatW @ 0x14006E870 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __fastcall RtlpGetDynamicTimeZoneInfoHandle(NTSTRSAFE_PCWSTR pszSrc, HANDLE *a2)
{
  __int64 v3; // r8
  wchar_t *v4; // rdx
  int v5; // r10d
  wchar_t v6; // ax
  NTSTATUS result; // eax
  __int64 v8; // rcx
  wchar_t *i; // rax
  int v10; // r9d
  wchar_t *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  char *v14; // r8
  wchar_t v15; // dx
  WCHAR pszDest[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*pszSrc )
    return -1073741811;
  v3 = 256LL;
  v4 = pszDest;
  v5 = 0;
  while ( v3 != -2147483390 )
  {
    v6 = *(wchar_t *)((char *)v4 + (char *)L"Time Zones\\" - (char *)pszDest);
    if ( !v6 )
      break;
    *v4++ = v6;
    if ( !--v3 )
    {
      --v4;
      v5 = -2147483643;
      break;
    }
  }
  *v4 = 0;
  if ( v5 < 0 )
    return v5;
  result = RtlStringCbCatW(pszDest, 0x200uLL, pszSrc);
  if ( result >= 0 )
  {
    v8 = 256LL;
    for ( i = pszDest; *i; ++i )
    {
      if ( !--v8 )
        return -1073741811;
    }
    v10 = 0;
    v11 = &pszDest[256 - v8];
    v12 = v8;
    v13 = 2147483646LL;
    v14 = (char *)((char *)L"\\Dynamic DST" - (char *)v11);
    while ( v13 )
    {
      v15 = *(wchar_t *)((char *)v11 + (_QWORD)v14);
      if ( !v15 )
        break;
      *v11 = v15;
      --v13;
      ++v11;
      if ( !--v12 )
      {
        --v11;
        v10 = -2147483643;
        break;
      }
    }
    *v11 = 0;
    if ( v10 < 0 )
      return v10;
    else
      return RtlpGetRegistryHandle(3, pszDest, 0, a2);
  }
  return result;
}
