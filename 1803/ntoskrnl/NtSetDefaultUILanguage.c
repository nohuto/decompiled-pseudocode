/*
 * XREFs of NtSetDefaultUILanguage @ 0x14060E6A8
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetCurrentUserUILanguage @ 0x14060E6CC (ExpSetCurrentUserUILanguage.c)
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
