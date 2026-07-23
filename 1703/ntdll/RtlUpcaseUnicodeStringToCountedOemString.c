/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E9C50
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x1800F4C80 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     sub_18007CB18 @ 0x18007CB18 (sub_18007CB18.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18007CBA0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x18007FB30 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned __int64 v6; // rax
  NTSTATUS result; // eax
  CHAR *v8; // rax
  int v9; // edi
  ULONG BytesInOemString; // [rsp+88h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize((PWCH *)SourceString);
  else
    v6 = ((unsigned __int64)SourceString->Length + 2) >> 1;
  result = v6 - 1;
  if ( !result )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFF )
    return -1073741584;
  DestinationString->Length = result;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = result;
    v8 = (CHAR *)sub_180043FE0((unsigned int)result);
    DestinationString->Buffer = v8;
    if ( !v8 )
      return -1073741801;
  }
  else if ( (unsigned __int16)result > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v9 = RtlUpcaseUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 && !sub_18007CB18(&DestinationString->Length, (__int64)SourceString) )
    v9 = -1073741470;
  if ( v9 >= 0 )
    v9 = 0;
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
