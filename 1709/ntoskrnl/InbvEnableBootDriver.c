/*
 * XREFs of InbvEnableBootDriver @ 0x1401F3880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140389EF8;
  if ( qword_140389EF8 )
  {
    result = *(__int64 (**)(void))(qword_140389EF8 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
