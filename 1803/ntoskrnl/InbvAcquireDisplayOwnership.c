/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x140230CF0
 * Callers:
 *     KiDisplayBlueScreen @ 0x140243D14 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140487310 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_1403CDD28;
  if ( qword_1403CDD28 )
  {
    result = *(__int64 (**)(void))(qword_1403CDD28 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
