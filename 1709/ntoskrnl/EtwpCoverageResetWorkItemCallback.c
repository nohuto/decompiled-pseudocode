/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x140745520
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x140745074 (EtwpCoverageReset.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageResetWorkItemCallback(__int64 a1)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  return EtwpCoverageReset(a1, 2);
}
