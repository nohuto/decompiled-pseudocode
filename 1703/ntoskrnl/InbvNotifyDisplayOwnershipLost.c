/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x1401EE280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_14036E468;
  if ( qword_14036E468 )
  {
    result = *(__int64 (**)(void))qword_14036E468;
    if ( *(_QWORD *)qword_14036E468 )
      return (__int64 (*)(void))result();
  }
  return result;
}
