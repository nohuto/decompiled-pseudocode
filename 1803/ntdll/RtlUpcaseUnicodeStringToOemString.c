/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x180079850
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     sub_180079938 @ 0x180079938 (sub_180079938.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800799D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E51D0 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  int v7; // edi
  CHAR *v9; // rax
  ULONG BytesInOemString; // [rsp+78h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    v6 = RtlxUnicodeStringToOemSize(SourceString);
  else
    v6 = ((unsigned int)SourceString->Length + 2) >> 1;
  if ( v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    v9 = (CHAR *)sub_18003B5E0(v6);
    DestinationString->Buffer = v9;
    if ( !v9 )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v7 = RtlUpcaseUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v7 >= 0 && !(unsigned __int8)sub_180079938(DestinationString, SourceString) )
    v7 = -1073741470;
  if ( v7 >= 0 )
  {
    DestinationString->Buffer[BytesInOemString] = 0;
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v7;
}
