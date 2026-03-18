/*
 * XREFs of NtQueryInstallUILanguage @ 0x14044E3E4
 * Callers:
 *     ExpSetCurrentUserUILanguage @ 0x140587598 (ExpSetCurrentUserUILanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405B7C0C (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1407494FC (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInstallUILanguage(LANGID *LanguageId)
{
  __int64 v2; // rcx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v2 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)LanguageId < 0x7FFFFFFF0000LL )
      v2 = (__int64)LanguageId;
    *(_WORD *)v2 = *(_WORD *)v2;
  }
  *LanguageId = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
  return 0;
}
