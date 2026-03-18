/*
 * XREFs of InbvBitBlt @ 0x140230D48
 * Callers:
 *     DisplayBootBitmap @ 0x140183118 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x140487310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvBitBlt())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_1403CDD28;
  if ( qword_1403CDD28 )
  {
    result = *(__int64 (**)(void))(qword_1403CDD28 + 96);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
