/*
 * XREFs of AslUnicodeStringCreate @ 0x14072E7B8
 * Callers:
 *     AslPathToSystemPath_Ustr @ 0x14072F104 (AslPathToSystemPath_Ustr.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AslStringDuplicate @ 0x1404B523C (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslUnicodeStringCreate(PUNICODE_STRING DestinationString, const wchar_t *a2)
{
  int v3; // ebx
  WCHAR *v4; // rcx
  PCWSTR SourceString; // [rsp+50h] [rbp+18h] BYREF

  SourceString = 0LL;
  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = 0LL;
  v3 = AslStringDuplicate((wchar_t **)&SourceString, a2);
  if ( v3 >= 0 )
  {
    RtlInitUnicodeString(DestinationString, SourceString);
    v4 = 0LL;
    v3 = 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslUnicodeStringCreate",
      713,
      (unsigned int)"AslStringDuplicate failed with \"%ws\" [%x]");
    v4 = (WCHAR *)SourceString;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x74705041u);
  return (unsigned int)v3;
}
