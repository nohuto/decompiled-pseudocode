/*
 * XREFs of RtlUpperString @ 0x1800E52E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180080600 (RtlUpperChar.c)
 */

void __cdecl RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int Length; // ebx
  PCHAR Buffer; // rdi
  CHAR *v4; // rsi

  Length = SourceString->Length;
  Buffer = DestinationString->Buffer;
  v4 = SourceString->Buffer;
  if ( (unsigned __int16)Length > DestinationString->MaximumLength )
    Length = DestinationString->MaximumLength;
  for ( DestinationString->Length = Length; Length; --Length )
    *Buffer++ = RtlUpperChar(*v4++);
}
