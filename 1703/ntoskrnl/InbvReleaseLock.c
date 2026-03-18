/*
 * XREFs of InbvReleaseLock @ 0x1401EE2A8
 * Callers:
 *     DisplayBootBitmap @ 0x140158E58 (DisplayBootBitmap.c)
 *     InbvRotateGuiBootDisplay @ 0x1401EE440 (InbvRotateGuiBootDisplay.c)
 *     StartFirstUserProcess @ 0x14081013C (StartFirstUserProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvReleaseLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14036E468;
  if ( qword_14036E468 )
  {
    result = *(__int64 (**)(void))(qword_14036E468 + 160);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
