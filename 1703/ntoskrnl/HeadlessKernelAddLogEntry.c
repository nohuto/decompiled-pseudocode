/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14003AED8
 * Callers:
 *     PnpBootDeviceWait @ 0x140153E58 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 * Callees:
 *     <none>
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
