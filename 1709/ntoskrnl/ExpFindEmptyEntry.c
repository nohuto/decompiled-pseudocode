/*
 * XREFs of ExpFindEmptyEntry @ 0x14011D590
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x14011D5F0 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindEmptyEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    result = (_QWORD *)(v2 + 16);
    while ( *result )
    {
      result += 2;
      if ( result == (_QWORD *)(v2 + 16LL * *(unsigned int *)(v2 + 8)) )
        goto LABEL_5;
    }
    KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)result - v2) >> 4;
  }
  else
  {
LABEL_5:
    ExpExpandResourceOwnerTable(a1, a2);
    return 0LL;
  }
  return result;
}
