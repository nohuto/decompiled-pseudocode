/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x140130308
 * Callers:
 *     PnpBootDeviceWait @ 0x14014661C (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x1407CC800 (HdlspKernelAddLogEntry.c)
 */

PKSPIN_LOCK HeadlessKernelAddLogEntry()
{
  PKSPIN_LOCK result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( HeadlessGlobals[1] )
      return (PKSPIN_LOCK)HdlspKernelAddLogEntry();
  }
  return result;
}
