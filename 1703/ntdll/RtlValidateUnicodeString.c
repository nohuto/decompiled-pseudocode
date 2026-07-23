/*
 * XREFs of RtlValidateUnicodeString @ 0x18007DF40
 * Callers:
 *     RtlDuplicateUnicodeString @ 0x18007DE00 (RtlDuplicateUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlValidateUnicodeString(ULONG Flags, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  USHORT MaximumLength; // cx

  result = 0;
  if ( Flags )
    return -1073741811;
  if ( String )
  {
    if ( (String->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0
      || String->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !String->Buffer && (String->Length || MaximumLength) )
    {
      return -1073741811;
    }
  }
  return result;
}
