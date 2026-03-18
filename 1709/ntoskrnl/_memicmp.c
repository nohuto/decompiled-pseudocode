/*
 * XREFs of _memicmp @ 0x14017AAF0
 * Callers:
 *     IopInitializeBootDrivers @ 0x140845EE8 (IopInitializeBootDrivers.c)
 * Callees:
 *     __ascii_memicmp @ 0x14017AA98 (__ascii_memicmp.c)
 */

int __cdecl memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return _ascii_memicmp((__int64)Buf1, (unsigned __int8 *)Buf2, Size);
}
