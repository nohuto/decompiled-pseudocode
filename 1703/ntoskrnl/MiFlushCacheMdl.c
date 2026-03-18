/*
 * XREFs of MiFlushCacheMdl @ 0x14013DF6C
 * Callers:
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14003BC50 (KeInvalidateAllCaches.c)
 */

__int64 MiFlushCacheMdl()
{
  ++dword_14036C20C;
  KeInvalidateAllCaches();
  return 1LL;
}
