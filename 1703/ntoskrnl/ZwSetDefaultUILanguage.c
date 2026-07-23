/*
 * XREFs of ZwSetDefaultUILanguage @ 0x140180F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetDefaultUILanguage(LANGID LanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LanguageId);
}
