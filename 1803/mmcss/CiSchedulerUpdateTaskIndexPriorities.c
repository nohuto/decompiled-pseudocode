/*
 * XREFs of CiSchedulerUpdateTaskIndexPriorities @ 0x1C0003850
 * Callers:
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00029B8 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0002C60 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerTaskIndexYield @ 0x1C00033E8 (CiSchedulerTaskIndexYield.c)
 * Callees:
 *     CiSchedulerSetPriority @ 0x1C00030B8 (CiSchedulerSetPriority.c)
 */

char __fastcall CiSchedulerUpdateTaskIndexPriorities(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // rdi
  char result; // al

  v1 = *(_QWORD **)(a1 + 32);
  for ( i = (_QWORD *)(a1 + 32); v1 != i; v1 = (_QWORD *)*v1 )
    result = CiSchedulerSetPriority((__int64)(v1 - 10));
  return result;
}
