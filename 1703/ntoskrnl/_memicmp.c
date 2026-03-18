/*
 * XREFs of _memicmp @ 0x14017B2C0
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407F91C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return _ascii_memicmp((__int64)Buf1, (unsigned __int8 *)Buf2, Size);
}
