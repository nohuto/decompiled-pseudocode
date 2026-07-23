/*
 * XREFs of AslStringUpcaseToMultiByteN @ 0x1404B5C40
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1404B5314 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405BAE5C (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeString @ 0x1404971A0 (RtlUpcaseUnicodeString.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404C1180 (RtlUnicodeStringToAnsiString.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringUpcaseToMultiByteN(char *a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  const char *v8; // r9
  int v9; // r8d
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-30h] BYREF
  _STRING v11; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v11.Length = 0LL;
  v11.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  SourceString.Buffer = (wchar_t *)AslAlloc(v5, DestinationString.MaximumLength);
  if ( !SourceString.Buffer )
  {
    v6 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", 960, (unsigned int)"Out of memory");
    return (unsigned int)v6;
  }
  SourceString.MaximumLength = MaximumLength;
  SourceString.Length = 0;
  v6 = RtlUpcaseUnicodeString(&SourceString, &DestinationString, 0);
  if ( v6 < 0 )
  {
    v8 = "RtlUpcaseUnicodeString failed [%x]";
    v9 = 969;
  }
  else
  {
    v11.Buffer = a1;
    *(_DWORD *)&v11.Length = 0x1000000;
    v6 = RtlUnicodeStringToAnsiString(&v11, &SourceString, 0);
    if ( v6 >= 0 )
    {
      v6 = 0;
      a1[v11.Length] = 0;
      goto LABEL_5;
    }
    v8 = "RtlUnicodeStringToAnsiString failed [%x]";
    v9 = 984;
  }
  AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", v9, (_DWORD)v8);
LABEL_5:
  if ( SourceString.Buffer )
    ExFreePoolWithTag(SourceString.Buffer, 0x74705041u);
  return (unsigned int)v6;
}
