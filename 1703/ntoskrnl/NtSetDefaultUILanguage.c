/*
 * XREFs of NtSetDefaultUILanguage @ 0x140587580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtSetDefaultUILanguage(LANGID LanguageId)
{
  if ( LanguageId )
    return ExpSetCurrentUserUILanguage(L"MUILanguagePending");
  else
    return ExpSetCurrentUserUILanguage(0LL);
}
