/*
 * XREFs of InbvAcquireLock @ 0x140230D1C
 * Callers:
 *     DisplayBootBitmap @ 0x140183118 (DisplayBootBitmap.c)
 *     FinalizeBootLogo @ 0x14023102C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x140231080 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireLock())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_1403CDD28;
  if ( qword_1403CDD28 )
  {
    result = *(__int64 (**)(void))(qword_1403CDD28 + 152);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
