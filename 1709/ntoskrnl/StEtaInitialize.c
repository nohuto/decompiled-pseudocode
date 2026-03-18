/*
 * XREFs of StEtaInitialize @ 0x1402724EC
 * Callers:
 *     SmcCacheInitialize @ 0x14073C324 (SmcCacheInitialize.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void *__fastcall StEtaInitialize(void *a1)
{
  return memset(a1, 0, 0x38uLL);
}
