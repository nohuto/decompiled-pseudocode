/*
 * XREFs of AslRegistryBuildMachinePath @ 0x1405D6EE0
 * Callers:
 *     AslRegistryGetKey @ 0x1405D7118 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildMachinePath(PUNICODE_STRING Destination)
{
  unsigned int v2; // edi
  unsigned __int16 v3; // ax
  __int64 v4; // rcx
  wchar_t *v5; // rax
  UNICODE_STRING Source; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  RtlInitUnicodeString(&Source, L"\\Registry\\Machine");
  v2 = 0;
  v3 = Source.Length + 122;
  Destination->Length = 0;
  Destination->MaximumLength = v3;
  v5 = (wchar_t *)AslAlloc(v4, v3);
  Destination->Buffer = v5;
  if ( v5 )
  {
    RtlAppendUnicodeStringToString(Destination, &Source);
    RtlAppendUnicodeToString(Destination, L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags");
  }
  else
  {
    v2 = -1073741801;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryBuildMachinePath",
      1270,
      (unsigned int)"Failed to allocate %d bytes for user key buffer");
  }
  return v2;
}
