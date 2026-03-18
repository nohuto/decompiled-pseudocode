/*
 * XREFs of MiDeleteNonPagedPoolTail @ 0x1400B5DF0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolTail(__int64 a1)
{
  MiFlushTbList(*(_QWORD *)(a1 + 168));
  return 0LL;
}
