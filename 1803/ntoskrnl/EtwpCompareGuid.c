/*
 * XREFs of EtwpCompareGuid @ 0x1407B2A10
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x140189130 (memcmp.c)
 */

int __fastcall EtwpCompareGuid(const void *a1, const void *a2)
{
  return memcmp(a1, a2, 0x10uLL);
}
