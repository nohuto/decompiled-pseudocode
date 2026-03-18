/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1401EE110
 * Callers:
 *     KiDisplayBlueScreen @ 0x1402000B4 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x14041A5E0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvAcquireDisplayOwnership())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14036E468;
  if ( qword_14036E468 )
  {
    result = *(__int64 (**)(void))(qword_14036E468 + 8);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
