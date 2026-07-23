/*
 * XREFs of ZwSetSystemTime @ 0x140181320
 * Callers:
 *     ExpTimeZoneWork @ 0x140716D70 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
