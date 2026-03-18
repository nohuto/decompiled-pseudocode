/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x140230E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_1403CDD28;
  if ( qword_1403CDD28 )
  {
    result = *(__int64 (**)(void))qword_1403CDD28;
    if ( *(_QWORD *)qword_1403CDD28 )
      return (__int64 (*)(void))result();
  }
  return result;
}
