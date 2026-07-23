/*
 * XREFs of ZwSetSystemTime @ 0x1401AA940
 * Callers:
 *     ExpTimeZoneWork @ 0x1407BCF70 (ExpTimeZoneWork.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER NewSystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
