/*
 * XREFs of MiCreateSystemPageTableTail @ 0x1400B5EB0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1)
{
  MiFlushTbList(*(_QWORD *)(a1 + 168) + 64LL);
  return 0LL;
}
