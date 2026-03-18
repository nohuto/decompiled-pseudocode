/*
 * XREFs of FastGetProfileStringW @ 0x1C0025C70
 * Callers:
 *     FastGetProfileIntW @ 0x1C00604C0 (FastGetProfileIntW.c)
 *     FastGetProfileStringFromIDW @ 0x1C0060570 (FastGetProfileStringFromIDW.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RtlStringCchCopyW @ 0x1C0084D14 (RtlStringCchCopyW.c)
 */

__int64 __fastcall FastGetProfileStringW(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        const wchar_t *a4,
        NTSTRSAFE_PWSTR pszDest,
        unsigned int cchDest,
        int a7)
{
  unsigned int v9; // r15d
  void *v11; // rdi
  __int64 v12; // rbx
  NTSTATUS v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v17; // esi
  __int64 v18; // rax
  int v19; // [rsp+30h] [rbp-48h] BYREF
  ULONG Length; // [rsp+34h] [rbp-44h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  v19 = a7 | gdwPolicyFlags;
  v9 = a2;
  v11 = (void *)OpenCacheKeyEx(a1, a2, 131097LL, &v19);
  if ( v11 )
  {
    while ( 1 )
    {
      Length = 2 * cchDest + 12;
      v12 = Win32AllocPoolWithQuota(Length, 1919972181LL);
      if ( !v12 )
        break;
      RtlInitUnicodeString(&DestinationString, a3);
      v13 = ZwQueryValueKey(v11, &DestinationString, KeyValuePartialInformation, (PVOID)v12, Length, &Length);
      v15 = 0LL;
      if ( v13 == -2147483643 )
        v13 = 0;
      if ( v13 >= 0 )
      {
        v17 = cchDest;
        if ( *(_DWORD *)(v12 + 8) >> 1 < cchDest )
          v17 = *(_DWORD *)(v12 + 8) >> 1;
        if ( *(_DWORD *)(v12 + 8) < 2u )
        {
          *pszDest = 0;
        }
        else
        {
          *(_WORD *)(v12 + 2LL * (v17 - 1) + 12) = 0;
          RtlStringCchCopyW(pszDest, cchDest, (NTSTRSAFE_PCWSTR)(v12 + 12));
        }
        Win32FreePool(v12, v15, v14);
        ZwClose(v11);
        return v17;
      }
      if ( !v19 )
      {
        Win32FreePool(v12, 0LL, v14);
        break;
      }
      Win32FreePool(v12, 0LL, v14);
      ZwClose(v11);
      v11 = (void *)OpenCacheKeyEx(a1, v9, 131097LL, &v19);
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
  if ( !a4 || RtlStringCchCopyW(pszDest, cchDest, a4) < 0 )
    return 0LL;
  v18 = -1LL;
  do
    ++v18;
  while ( pszDest[v18] );
  return (unsigned int)(v18 + 1);
}
