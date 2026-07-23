/*
 * XREFs of ZwSetSystemTime @ 0x140180D00
 * Callers:
 *     ExpTimeZoneWork @ 0x1407564A0 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
