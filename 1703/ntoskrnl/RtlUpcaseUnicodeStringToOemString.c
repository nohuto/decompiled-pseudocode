/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x140433810
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     RtlpDidUnicodeToOemWork @ 0x140433C30 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x140433CD0 (RtlUpcaseUnicodeToOemN.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406E5B30 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToOemString(
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
  v7 = RtlUpcaseUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v7 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(DestinationString, SourceString) )
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
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v7;
}
