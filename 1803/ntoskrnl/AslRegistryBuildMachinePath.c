/*
 * XREFs of AslRegistryBuildMachinePath @ 0x14061FC58
 * Callers:
 *     AslRegistryGetKey @ 0x14061FB84 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildMachinePath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  int MaximumLength; // [rsp+20h] [rbp-28h]
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&Sourcea.Length = 0LL;
  Sourcea.Buffer = 0LL;
  RtlInitUnicodeString(&Sourcea, L"\\Registry\\Machine");
  v5 = 0;
  Destination->Length = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( Source[v6] );
  v7 = Sourcea.Length + 2 * (v6 + 1);
  Destination->MaximumLength = v7;
  v8 = (wchar_t *)AslAlloc(v4, v7);
  Destination->Buffer = v8;
  if ( v8 )
  {
    RtlAppendUnicodeStringToString(Destination, &Sourcea);
    if ( Source && *Source != 92 )
      RtlAppendUnicodeToString(Destination, L"\\");
    RtlAppendUnicodeToString(Destination, Source);
  }
  else
  {
    MaximumLength = Destination->MaximumLength;
    v5 = -1073741801;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryBuildMachinePath",
      1330,
      (unsigned int)"Failed to allocate %d bytes for user key buffer",
      MaximumLength);
  }
  return v5;
}
