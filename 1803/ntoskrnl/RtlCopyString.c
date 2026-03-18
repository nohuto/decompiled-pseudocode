/*
 * XREFs of RtlCopyString @ 0x140286280
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

void __stdcall RtlCopyString(PSTRING DestinationString, const STRING *SourceString)
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
