/*
 * XREFs of ZwExtendSection @ 0x14017FA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewMaximumSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
