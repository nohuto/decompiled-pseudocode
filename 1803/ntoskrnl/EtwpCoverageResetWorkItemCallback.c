/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x1407A7240
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x1407A6D88 (EtwpCoverageReset.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageResetWorkItemCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  return EtwpCoverageReset(a1, 2LL, a3, a4);
}
