/*
 * XREFs of SepAppContainerAceProtectionApplies @ 0x1406F8774
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x1406F8654 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

char __fastcall SepAppContainerAceProtectionApplies(PCUNICODE_STRING String2)
{
  int v2; // ebx
  wchar_t *i; // rcx

  v2 = 0;
  if ( RtlEqualUnicodeString(String2, &stru_14028E6B8, 0) )
    return 1;
  if ( RtlPrefixUnicodeString(&stru_14028E6C8, String2, 1u) && String2->Length >= 0x4Cu )
  {
    for ( i = String2->Buffer + 35; (unsigned __int16)(*i - 48) <= 9u; ++i )
    {
      if ( (unsigned int)++v2 >= 3 )
        return 1;
    }
  }
  return 0;
}
