/*
 * XREFs of RtlOemStringToCountedUnicodeString @ 0x14071DC70
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x1402B3E80 (ExFreePool.c)
 *     RtlOemToUnicodeN @ 0x1404DF6E0 (RtlOemToUnicodeN.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     RtlxOemStringToUnicodeSize @ 0x14071E010 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlOemStringToCountedUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  NTSTATUS result; // eax
  wchar_t *StringRoutine; // rax
  int v9; // edi
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  if ( (_BYTE)NlsMbOemCodePageTag )
    v6 = RtlxOemStringToUnicodeSize(SourceString);
  else
    v6 = 2 * SourceString->Length + 2;
  result = v6 - 2;
  if ( !result )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFE )
    return -1073741584;
  DestinationString->Length = result;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = result;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned int)result);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)result > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v9 = RtlOemToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
    v9 = 0;
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
