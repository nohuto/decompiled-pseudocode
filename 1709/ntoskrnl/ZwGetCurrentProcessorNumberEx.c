/*
 * XREFs of ZwGetCurrentProcessorNumberEx @ 0x14017F640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl ZwGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessorNumber);
}
