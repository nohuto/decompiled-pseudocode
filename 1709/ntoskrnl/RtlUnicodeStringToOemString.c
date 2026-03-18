/*
 * XREFs of RtlUnicodeStringToOemString @ 0x14056D7A0
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     RtlUnicodeToOemN @ 0x14056DDF0 (RtlUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x14071E040 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  int v7; // edi
  char *StringRoutine; // rax
  ULONG BytesInOemString; // [rsp+78h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbOemCodePageTag )
    v6 = RtlxUnicodeStringToOemSize(SourceString);
  else
    v6 = ((unsigned int)SourceString->Length + 2) >> 1;
  if ( v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (char *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v7 = RtlUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v7 >= 0 )
  {
    DestinationString->Buffer[BytesInOemString] = 0;
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v7;
}
