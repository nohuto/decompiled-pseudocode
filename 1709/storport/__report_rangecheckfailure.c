/*
 * XREFs of __report_rangecheckfailure @ 0x1C001EEF0
 * Callers:
 *     StorCompareScsiDeviceId @ 0x1C00169DC (StorCompareScsiDeviceId.c)
 *     WppInitGlobalLogger @ 0x1C0067E24 (WppInitGlobalLogger.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
