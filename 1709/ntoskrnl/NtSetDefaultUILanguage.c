/*
 * XREFs of NtSetDefaultUILanguage @ 0x1405DD2FC
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetCurrentUserUILanguage @ 0x1405DD320 (ExpSetCurrentUserUILanguage.c)
 */

NTSTATUS __stdcall NtSetDefaultUILanguage(LANGID LanguageId)
{
  const WCHAR *v1; // rcx

  if ( LanguageId )
    v1 = L"MUILanguagePending";
  else
    v1 = 0LL;
  return ExpSetCurrentUserUILanguage(v1);
}
