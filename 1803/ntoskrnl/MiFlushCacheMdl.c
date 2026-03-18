/*
 * XREFs of MiFlushCacheMdl @ 0x140267808
 * Callers:
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14016D5F0 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_1403CB6F8;
  KeInvalidateAllCaches();
  return 1LL;
}
