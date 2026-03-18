/*
 * XREFs of ExpFindEmptyEntry @ 0x140027BC8
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x140027C24 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindEmptyEntry(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    result = (_QWORD *)(v1 + 16);
    while ( *result )
    {
      result += 2;
      if ( result == (_QWORD *)(v1 + 16LL * *(unsigned int *)(v1 + 8)) )
        goto LABEL_6;
    }
    KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)result - v1) >> 4;
  }
  else
  {
LABEL_6:
    ExpExpandResourceOwnerTable();
    return 0LL;
  }
  return result;
}
