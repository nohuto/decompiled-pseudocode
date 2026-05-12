/*
 * XREFs of RaidCreateDeferredQueue @ 0x1C00118BC
 * Callers:
 *     RaidCreateAdapter @ 0x1C001171C (RaidCreateAdapter.c)
 * Callees:
 *     memset @ 0x1C001F680 (memset.c)
 */

void __fastcall RaidCreateDeferredQueue(union _SLIST_HEADER *a1)
{
  memset(a1, 0, 0x80uLL);
  InitializeSListHead(a1 + 5);
  InitializeSListHead(a1 + 6);
}
