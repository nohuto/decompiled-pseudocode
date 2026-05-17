/*
 * XREFs of _memicmp @ 0x18008BF60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BEF8 @ 0x18008BEF8 (sub_18008BEF8.c)
 */

int __cdecl memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return sub_18008BEF8((__int64)Buf1, (unsigned __int8 *)Buf2, Size);
}
