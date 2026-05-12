/*
 * XREFs of __report_rangecheckfailure @ 0x1C0017C00
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C000F7D8 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C0065A30 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
