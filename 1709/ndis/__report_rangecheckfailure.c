/*
 * XREFs of __report_rangecheckfailure @ 0x1C0024620
 * Callers:
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C0022F90 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     DriverEntry @ 0x1C011A0D0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
