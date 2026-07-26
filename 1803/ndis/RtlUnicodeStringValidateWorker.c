/*
 * XREFs of RtlUnicodeStringValidateWorker @ 0x1C0016F48
 * Callers:
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0011870 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C001196C (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0011A68 (RtlUnicodeStringValidateDestWorker.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0016EC4 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateWorker(PCUNICODE_STRING SourceString, const size_t cchMax, ULONG dwFlags)
{
  unsigned __int16 Length; // r8
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // dx

  Length = SourceString->Length;
  result = 0;
  if ( (SourceString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !SourceString->Buffer && (Length || MaximumLength) )
  {
    return -1073741811;
  }
  return result;
}
