/*
 * XREFs of RtlULongLongSub @ 0x140079C00
 * Callers:
 *     PopFxScheduleDeviceIdleTimer @ 0x140079B30 (PopFxScheduleDeviceIdleTimer.c)
 *     KiAdjustTimer2DueTimes @ 0x1401683AC (KiAdjustTimer2DueTimes.c)
 *     IopFillTriageDumpDataBlocks @ 0x140234D54 (IopFillTriageDumpDataBlocks.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1404B2318 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // r9

  if ( ullMinuend < ullSubtrahend )
    v3 = -1LL;
  else
    v3 = ullMinuend - ullSubtrahend;
  *pullResult = v3;
  return ullMinuend < ullSubtrahend ? 0xC0000095 : 0;
}
