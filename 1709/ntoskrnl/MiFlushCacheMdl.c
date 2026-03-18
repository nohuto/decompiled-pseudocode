/*
 * XREFs of MiFlushCacheMdl @ 0x14022C154
 * Callers:
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140137470 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_140388558;
  KeInvalidateAllCaches();
  return 1LL;
}
