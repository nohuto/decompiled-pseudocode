/*
 * XREFs of ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C01123B4
 * Callers:
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C00C0FC0 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01E6D68 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 */

__int64 __fastcall ReadPointerDeviceCfgStringSetting(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest)
{
  unsigned int v4; // esi
  NTSTATUS v8; // ebx
  __int64 v9; // rdi
  unsigned int v10; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG Length; // [rsp+88h] [rbp+20h] BYREF

  v4 = cchDest;
  v8 = -1073741595;
  Length = 2 * cchDest + 12;
  v9 = Win32AllocPoolWithQuota(Length, 2020635477LL);
  if ( v9 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, (PVOID)v9, Length, &Length);
    if ( v8 >= 0 )
    {
      v10 = v4;
      if ( *(_DWORD *)(v9 + 8) >> 1 < v4 )
        v10 = *(_DWORD *)(v9 + 8) >> 1;
      if ( *(_DWORD *)(v9 + 8) < 2u )
      {
        v8 = -1073741595;
      }
      else
      {
        *(_WORD *)(v9 + 2LL * (v10 - 1) + 12) = 0;
        v8 = RtlStringCchCopyW(pszDest, v4, (NTSTRSAFE_PCWSTR)(v9 + 12));
      }
    }
    Win32FreePool(v9);
  }
  return (unsigned int)v8;
}
