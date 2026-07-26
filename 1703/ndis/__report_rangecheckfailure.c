/*
 * XREFs of __report_rangecheckfailure @ 0x1C0078060
 * Callers:
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C002274C (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
