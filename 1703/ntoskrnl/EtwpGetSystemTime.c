/*
 * XREFs of EtwpGetSystemTime @ 0x140031790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
LARGE_INTEGER EtwpGetSystemTime(void)
{
  return RtlGetSystemTimePrecise();
}
