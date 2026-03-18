/*
 * XREFs of InbvSetProgressBarSubset @ 0x140139C30
 * Callers:
 *     Phase1Initialization @ 0x1405B7F90 (Phase1Initialization.c)
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (*InbvSetProgressBarSubset())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140389EF8;
  if ( qword_140389EF8 )
  {
    result = *(__int64 (**)(void))(qword_140389EF8 + 112);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
