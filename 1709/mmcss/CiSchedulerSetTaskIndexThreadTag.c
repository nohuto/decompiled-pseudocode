/*
 * XREFs of CiSchedulerSetTaskIndexThreadTag @ 0x1C0003204
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0002C70 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerSetTaskIndexMode @ 0x1C0003134 (CiSchedulerSetTaskIndexMode.c)
 * Callees:
 *     CiSystemUpdateThreadTag @ 0x1C00028A8 (CiSystemUpdateThreadTag.c)
 */

__int64 __fastcall CiSchedulerSetTaskIndexThreadTag(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(a1 + 32);
  for ( i = (_QWORD *)(a1 + 32); v2 != i; v2 = (_QWORD *)*v2 )
    result = CiSystemUpdateThreadTag((__int64)(v2 - 10), a2);
  return result;
}
