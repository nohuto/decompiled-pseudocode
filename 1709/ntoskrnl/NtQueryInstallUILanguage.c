/*
 * XREFs of NtQueryInstallUILanguage @ 0x14058AA14
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1405BD8FC (_RtlpMuiRegValidateInstalled.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14078BC60 (_RtlpMuiRegPopulateBaseLanguages.c)
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
