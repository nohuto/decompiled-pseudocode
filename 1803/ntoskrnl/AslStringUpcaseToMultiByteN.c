/*
 * XREFs of AslStringUpcaseToMultiByteN @ 0x1405FDA3C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14061DFD8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlUnicodeStringToAnsiString @ 0x140518490 (RtlUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x140539150 (RtlUpcaseUnicodeString.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringUpcaseToMultiByteN(char *a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  const char *v9; // r9
  int v10; // r8d
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-30h] BYREF
  _STRING v12; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  SourceString.Buffer = (wchar_t *)AslAlloc(v5, DestinationString.MaximumLength);
  if ( !SourceString.Buffer )
  {
    v7 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", 1044, (unsigned int)"Out of memory");
    return v7;
  }
  SourceString.MaximumLength = MaximumLength;
  SourceString.Length = 0;
  v6 = RtlUpcaseUnicodeString(&SourceString, &DestinationString, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = "RtlUpcaseUnicodeString failed [%x]";
    v10 = 1053;
  }
  else
  {
    v12.Buffer = a1;
    *(_DWORD *)&v12.Length = 0x1000000;
    v6 = RtlUnicodeStringToAnsiString(&v12, &SourceString, 0);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      a1[v12.Length] = 0;
      goto LABEL_5;
    }
    v9 = "RtlUnicodeStringToAnsiString failed [%x]";
    v10 = 1068;
  }
  AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", v10, (_DWORD)v9, v6);
LABEL_5:
  if ( SourceString.Buffer )
    ExFreePoolWithTag(SourceString.Buffer, 0x74705041u);
  return v7;
}
