/*
 * XREFs of AslRegistryBuildUserPath @ 0x1405D6F60
 * Callers:
 *     AslRegistryGetKey @ 0x1405D7118 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404C0410 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildUserPath(PUNICODE_STRING Destination)
{
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  unsigned __int16 v4; // ax
  wchar_t *v5; // rax
  UNICODE_STRING Source; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  v3 = RtlFormatCurrentUserKeyPath(&Source);
  if ( v3 < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryBuildUserPath",
      1322,
      (unsigned int)"RtlFormatCurrentUserKeyPath failed [%x]");
  }
  else
  {
    v4 = Source.Length + 122;
    Destination->Length = 0;
    Destination->MaximumLength = v4;
    v5 = (wchar_t *)AslAlloc(v2, v4);
    Destination->Buffer = v5;
    if ( v5 )
    {
      RtlAppendUnicodeStringToString(Destination, &Source);
      RtlAppendUnicodeToString(Destination, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags");
      v3 = 0;
    }
    else
    {
      v3 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslRegistryBuildUserPath", 1334, (unsigned int)"Out of memory");
    }
  }
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v3;
}
