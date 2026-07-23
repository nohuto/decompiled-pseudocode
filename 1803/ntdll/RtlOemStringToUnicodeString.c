/*
 * XREFs of RtlOemStringToUnicodeString @ 0x1800796B0
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x1800795B0 (RtlDnsHostNameToComputerName.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlOemToUnicodeN @ 0x1800797A0 (RtlOemToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x1800E51A0 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __cdecl RtlOemStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        POEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edi
  WCHAR *v10; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    v6 = RtlxOemStringToUnicodeSize(SourceString);
  else
    v6 = 2 * SourceString->Length + 2;
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    v10 = (WCHAR *)sub_18003B5E0(v6);
    DestinationString->Buffer = v10;
    if ( !v10 )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  v8 = RtlOemToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
