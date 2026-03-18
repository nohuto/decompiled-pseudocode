/*
 * XREFs of __report_rangecheckfailure @ 0x1C00011A0
 * Callers:
 *     CiConfigQueryValue @ 0x1C000CDD4 (CiConfigQueryValue.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
