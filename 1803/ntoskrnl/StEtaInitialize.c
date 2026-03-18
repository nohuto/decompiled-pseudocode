/*
 * XREFs of StEtaInitialize @ 0x1402A6810
 * Callers:
 *     SmcCacheInitialize @ 0x14079F328 (SmcCacheInitialize.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *__fastcall StEtaInitialize(void *a1)
{
  return memset(a1, 0, 0x38uLL);
}
