/*
 * XREFs of InitCreateUserSubsystem @ 0x1C01D70F0
 * Callers:
 *     Win32UserInitialize @ 0x1C01D6270 (Win32UserInitialize.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C001DFD0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C0044A10 (OpenCacheKeyEx.c)
 *     RtlStringCchCopyW @ 0x1C0073F2C (RtlStringCchCopyW.c)
 *     wcschr @ 0x1C009D228 (wcschr.c)
 *     wcsstr @ 0x1C009D250 (wcsstr.c)
 */

__int64 InitCreateUserSubsystem()
{
  __int64 result; // rax
  wchar_t *v1; // rbx
  void *v2; // rdi
  __int64 v3; // rbp
  NTSTATUS v4; // eax
  __int64 v5; // rax
  int v7; // esi
  wchar_t *v8; // rax
  wchar_t *v9; // rax
  wchar_t *v10; // rdi
  ULONG v11; // eax
  wchar_t *v12; // rax
  UNICODE_STRING String; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+70h] [rbp+8h] BYREF
  ULONG Length; // [rsp+78h] [rbp+10h] BYREF

  result = Win32AllocPoolWithQuota(1280LL, 0x78747355u);
  v1 = (wchar_t *)result;
  if ( !result )
    return result;
  v15 = gdwPolicyFlags;
  v2 = OpenCacheKeyEx(0LL, 0xAu, 0x20019u, &v15);
  if ( v2 )
  {
    while ( 1 )
    {
      Length = 1226;
      v3 = Win32AllocPoolWithQuota(1226LL, 0x72707355u);
      if ( !v3 )
      {
LABEL_9:
        ZwClose(v2);
        goto LABEL_10;
      }
      RtlInitUnicodeString(&DestinationString, L"Windows");
      v4 = ZwQueryValueKey(v2, &DestinationString, KeyValuePartialInformation, (PVOID)v3, Length, &Length);
      if ( v4 == -2147483643 || v4 >= 0 )
        break;
      Win32FreePool(v3);
      if ( !v15 )
        goto LABEL_9;
      ZwClose(v2);
      v2 = OpenCacheKeyEx(0LL, 0xAu, 0x20019u, &v15);
      if ( !v2 )
        goto LABEL_10;
    }
    v7 = 607;
    if ( *(_DWORD *)(v3 + 8) >> 1 < 0x25Fu )
      v7 = *(_DWORD *)(v3 + 8) >> 1;
    if ( *(_DWORD *)(v3 + 8) < 2u )
    {
      *v1 = 0;
    }
    else
    {
      *(_WORD *)(v3 + 2LL * (unsigned int)(v7 - 1) + 12) = 0;
      RtlStringCchCopyW(v1, 0x25FuLL, (NTSTRSAFE_PCWSTR)(v3 + 12));
    }
    Win32FreePool(v3);
    ZwClose(v2);
  }
  else
  {
LABEL_10:
    if ( RtlStringCchCopyW(v1, 0x25FuLL, L"SharedSection=,3072") < 0 )
    {
LABEL_30:
      Win32FreePool((__int64)v1);
      return 0LL;
    }
    v5 = -1LL;
    while ( v1[++v5] != 0 )
      ;
    v7 = v5 + 1;
  }
  if ( !v7 )
    goto LABEL_30;
  gdwDesktopSectionSize = 512;
  gdwNOIOSectionSize = 128;
  v8 = wcsstr(v1, L"SharedSection");
  if ( v8 )
  {
    v8[32] = 0;
    v9 = wcschr(v8, 0x2Cu);
    v10 = v9;
    if ( v9 )
    {
      RtlInitUnicodeString(&String, v9 + 1);
      RtlUnicodeStringToInteger(&String, 0, &gdwDesktopSectionSize);
      v11 = gdwDesktopSectionSize;
      if ( gdwDesktopSectionSize < 0x200 )
      {
        v11 = 512;
        gdwDesktopSectionSize = 512;
      }
      gdwNOIOSectionSize = v11;
      v12 = wcschr(v10 + 1, 0x2Cu);
      if ( v12 )
      {
        RtlInitUnicodeString(&String, v12 + 1);
        RtlUnicodeStringToInteger(&String, 0, &gdwNOIOSectionSize);
        if ( gdwNOIOSectionSize < 0x80 )
          gdwNOIOSectionSize = 128;
      }
    }
  }
  Win32FreePool((__int64)v1);
  return 1LL;
}
