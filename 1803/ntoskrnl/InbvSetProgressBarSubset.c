/*
 * XREFs of InbvSetProgressBarSubset @ 0x140171A4C
 * Callers:
 *     Phase1Initialization @ 0x140627590 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x1408A5E94 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_1403CDD28;
  if ( qword_1403CDD28 )
  {
    result = *(__int64 (**)(void))(qword_1403CDD28 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
