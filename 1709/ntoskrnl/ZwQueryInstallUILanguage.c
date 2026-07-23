/*
 * XREFs of ZwQueryInstallUILanguage @ 0x140180180
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1405BD3D8 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInstallUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
