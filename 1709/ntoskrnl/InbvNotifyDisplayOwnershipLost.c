/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1401F3940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140389EF8;
  if ( qword_140389EF8 )
  {
    result = *(__int64 (**)(void))qword_140389EF8;
    if ( *(_QWORD *)qword_140389EF8 )
      return (__int64 (*)(void))result();
  }
  return result;
}
