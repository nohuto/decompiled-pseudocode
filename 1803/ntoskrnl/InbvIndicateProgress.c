/*
 * XREFs of InbvIndicateProgress @ 0x1408B6B28
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1408B670C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_1403CDD28;
  if ( qword_1403CDD28 )
  {
    result = *(__int64 (**)(void))(qword_1403CDD28 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
