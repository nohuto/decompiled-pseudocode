/*
 * XREFs of AslRegistryBuildMachinePath @ 0x1407722CC
 * Callers:
 *     AslRegistryGetKey @ 0x140772448 (AslRegistryGetKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
    AslLogCallPrintf(1LL);
  }
  return v2;
}
