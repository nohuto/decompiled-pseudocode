/*
 * XREFs of __report_rangecheckfailure @ 0x1C0001170
 * Callers:
 *     CiConfigQueryValue @ 0x1C000CDD0 (CiConfigQueryValue.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
