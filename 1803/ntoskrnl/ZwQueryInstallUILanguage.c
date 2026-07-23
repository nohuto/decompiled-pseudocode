/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1401A9DC0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140635858 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
