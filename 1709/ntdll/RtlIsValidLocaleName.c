/*
 * XREFs of RtlIsValidLocaleName @ 0x1800F5FE0
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x180005240 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180005620 (RtlGetSystemPreferredUILanguages.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBD58 (RtlUnicodeStringToLcid.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x180052770 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18007F624 (RtlpLoadNlsData.c)
 *     RtlpGetCustomCultureData @ 0x1800F6124 (RtlpGetCustomCultureData.c)
 *     RtlpIsCustomLocale @ 0x1800F648C (RtlpIsCustomLocale.c)
 */

BOOLEAN __cdecl RtlIsValidLocaleName(PCWSTR LocaleName, ULONG Flags)
{
  char v2; // di
  int NameIndex; // eax

  v2 = Flags;
  if ( LocaleName && (Flags & 0xFFFFFFFD) == 0 && (pTblPtrs || RtlpLoadNlsData()) )
  {
    NameIndex = RtlpNlsGetNameIndex((unsigned __int16 *)LocaleName);
    if ( NameIndex < 0 )
    {
      if ( (unsigned __int8)RtlpIsCustomLocale(LocaleName)
        && ((v2 & 2) != 0 || (int)RtlpGetCustomCultureData(LocaleName, 0LL, 0LL, 0LL) >= 0) )
      {
        return 1;
      }
    }
    else
    {
      if ( (v2 & 2) != 0 )
        return 1;
      _mm_lfence();
      if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                     * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32) + 8LL * NameIndex + 2)
                     + *(_QWORD *)(pTblPtrs + 16)
                     + 24LL) & 1) != 0 )
        return 1;
    }
  }
  return 0;
}
