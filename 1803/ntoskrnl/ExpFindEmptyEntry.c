/*
 * XREFs of ExpFindEmptyEntry @ 0x1400CF164
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140159160 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1400889D8 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindEmptyEntry(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
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
        goto LABEL_6;
    }
    KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)result - v2) >> 4;
  }
  else
  {
LABEL_6:
    ExpExpandResourceOwnerTable(a1, a2);
    return 0LL;
  }
  return result;
}
