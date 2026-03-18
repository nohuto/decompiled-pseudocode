/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x140160D84
 * Callers:
 *     PnpBootDeviceWait @ 0x14017973C (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 * Callees:
 *     HdlspKernelAddLogEntry @ 0x1408397F8 (HdlspKernelAddLogEntry.c)
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
