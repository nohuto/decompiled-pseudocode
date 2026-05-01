/*
 * XREFs of CrmGlobalsSubscriberTreeCompareRoutine @ 0x180039500
 * Callers:
 *     CrmGlobalsSubscriberAdd @ 0x180039414 (CrmGlobalsSubscriberAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmGlobalsSubscriberTreeCompareRoutine(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 - 8);
  if ( *a1 <= v2 )
    return (unsigned int)-(*a1 < v2);
  else
    return 1LL;
}
