/*
 * XREFs of __report_rangecheckfailure @ 0x1C0046B30
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C0016530 (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C00648E4 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
