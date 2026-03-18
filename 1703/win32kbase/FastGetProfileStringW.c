/*
 * XREFs of FastGetProfileStringW @ 0x1C0073D50
 * Callers:
 *     FastGetProfileStringFromIDW @ 0x1C0073C00 (FastGetProfileStringFromIDW.c)
 *     FastGetProfileIntW @ 0x1C0073CA0 (FastGetProfileIntW.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 *     RtlStringCchCopyW @ 0x1C0073F2C (RtlStringCchCopyW.c)
 */

__int64 __fastcall FastGetProfileStringW(
        PCUNICODE_STRING Source,
        unsigned int a2,
        const WCHAR *a3,
        const wchar_t *a4,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        int a7)
{
  void *v11; // rdi
  __int64 v12; // rbx
  NTSTATUS v13; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  int v17; // [rsp+30h] [rbp-48h] BYREF
  ULONG Length; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  v17 = a7 | gdwPolicyFlags;
  v11 = OpenCacheKeyEx(Source, a2, 0x20019u, &v17);
  if ( v11 )
  {
    while ( 1 )
    {
      Length = 2 * cchDest + 12;
      v12 = Win32AllocPoolWithQuota(Length, 0x72707355u);
      if ( !v12 )
        break;
      RtlInitUnicodeString(&DestinationString, a3);
      v13 = ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, (PVOID)v12, Length, &Length);
      if ( v13 == -2147483643 )
        v13 = 0;
      if ( v13 >= 0 )
      {
        v15 = cchDest;
        if ( *(_DWORD *)(v12 + 8) >> 1 < (unsigned int)cchDest )
          v15 = *(_DWORD *)(v12 + 8) >> 1;
        if ( *(_DWORD *)(v12 + 8) < 2u )
        {
          *pszDest = 0;
        }
        else
        {
          *(_WORD *)(v12 + 2LL * (v15 - 1) + 12) = 0;
          RtlStringCchCopyW(pszDest, (unsigned int)cchDest, (NTSTRSAFE_PCWSTR)(v12 + 12));
        }
        Win32FreePool(v12);
        ZwClose(v11);
        return v15;
      }
      if ( !v17 )
      {
        Win32FreePool(v12);
        break;
      }
      Win32FreePool(v12);
      ZwClose(v11);
      v11 = OpenCacheKeyEx(Source, a2, 0x20019u, &v17);
      if ( !v11 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( (a7 & 0x10) != 0 )
      return 0LL;
  }
  if ( v11 )
    ZwClose(v11);
  if ( !a4 || RtlStringCchCopyW(pszDest, (unsigned int)cchDest, a4) < 0 )
    return 0LL;
  v16 = -1LL;
  do
    ++v16;
  while ( pszDest[v16] );
  return (unsigned int)(v16 + 1);
}
