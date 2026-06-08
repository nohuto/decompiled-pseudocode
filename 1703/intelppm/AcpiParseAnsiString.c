/*
 * XREFs of AcpiParseAnsiString @ 0x1C0029880
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthA @ 0x1C000A664 (RtlStringCbLengthA.c)
 */

NTSTATUS __fastcall AcpiParseAnsiString(__int64 a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  struct _STRING SourceString; // [rsp+20h] [rbp-18h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 < 0x10 )
    return -1073741811;
  SourceString.MaximumLength = *(_WORD *)(a1 + 2);
  SourceString.Buffer = (char *)(a1 + 4);
  RtlStringCbLengthA((STRSAFE_PCNZCH)(a1 + 4), SourceString.MaximumLength, &pcbLength);
  SourceString.Length = pcbLength;
  return RtlAnsiStringToUnicodeString(a2, &SourceString, 1u);
}
