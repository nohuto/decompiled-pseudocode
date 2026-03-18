/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x14012EF60
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiSetInPagePriority @ 0x1400271D0 (MiSetInPagePriority.c)
 */

char __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
