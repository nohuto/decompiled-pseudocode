/*
 * XREFs of DpiGetDeviceRegistryPaths @ 0x1C001188C
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 * Callees:
 *     DpiGetRegistryPathFromPDO @ 0x1C0011954 (DpiGetRegistryPathFromPDO.c)
 *     DpiCopyUnicodeString @ 0x1C011B134 (DpiCopyUnicodeString.c)
 */

__int64 __fastcall DpiGetDeviceRegistryPaths(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  int v7; // eax
  unsigned int v8; // esi
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&UnicodeString.Length = 0LL;
  v4 = 0;
  UnicodeString.Buffer = 0LL;
  while ( 1 )
  {
    v7 = v4 == 1 && *(_BYTE *)(v3 + 480)
       ? DpiCopyUnicodeString(&UnicodeString, (PCUNICODE_STRING)(a3 + 40))
       : DpiGetRegistryPathFromPDO(a2, v4 == 0, &UnicodeString);
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( v4 )
      {
        *(struct _UNICODE_STRING *)(v3 + 528) = UnicodeString;
        v4 = 2;
      }
      else
      {
        *(struct _UNICODE_STRING *)(v3 + 512) = UnicodeString;
        v4 = 1;
      }
    }
    *(_DWORD *)&UnicodeString.Length = 0;
    UnicodeString.Buffer = 0LL;
    if ( v7 < 0 )
      break;
    if ( v4 == 2 )
      return v8;
  }
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 512));
  RtlFreeUnicodeString((PUNICODE_STRING)(v3 + 528));
  return v8;
}
