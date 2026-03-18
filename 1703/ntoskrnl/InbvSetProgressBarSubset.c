/*
 * XREFs of InbvSetProgressBarSubset @ 0x140155608
 * Callers:
 *     Phase1Initialization @ 0x1405A8000 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14036E468;
  if ( qword_14036E468 )
  {
    result = *(__int64 (**)(void))(qword_14036E468 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
