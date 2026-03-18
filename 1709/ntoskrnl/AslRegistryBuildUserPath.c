/*
 * XREFs of AslRegistryBuildUserPath @ 0x140772374
 * Callers:
 *     AslRegistryGetKey @ 0x140772448 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1404E11A0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
  if ( v3 >= 0 )
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
      AslLogCallPrintf(1LL);
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v3;
}
