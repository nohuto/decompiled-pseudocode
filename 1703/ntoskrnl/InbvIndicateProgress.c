/*
 * XREFs of InbvIndicateProgress @ 0x1407F9FA4
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1407F9B40 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

__int64 (*InbvIndicateProgress())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14036E468;
  if ( qword_14036E468 )
  {
    result = *(__int64 (**)(void))(qword_14036E468 + 120);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
