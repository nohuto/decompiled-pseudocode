/*
 * XREFs of ZwQueryInstallUILanguage @ 0x1401807A0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1405B7714 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
