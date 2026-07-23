/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x14017E140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDefaultUILanguage(LANGID *LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
