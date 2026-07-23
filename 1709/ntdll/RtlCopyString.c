/*
 * XREFs of RtlCopyString @ 0x180087A40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
 */

void __cdecl RtlCopyString(PSTRING DestinationString, PSTRING SourceString)
{
  size_t MaximumLength; // r8
  unsigned __int16 Length; // ax

  DestinationString->Length = 0;
  if ( SourceString )
  {
    MaximumLength = DestinationString->MaximumLength;
    Length = SourceString->Length;
    if ( SourceString->Length <= MaximumLength )
      MaximumLength = SourceString->Length;
    else
      Length = DestinationString->MaximumLength;
    DestinationString->Length = Length;
    memmove(DestinationString->Buffer, SourceString->Buffer, MaximumLength);
  }
}
