/*
 * XREFs of ZwExtendSection @ 0x1401A9020
 * Callers:
 *     CmSiExtendSection @ 0x1400BD7E8 (CmSiExtendSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
