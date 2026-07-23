/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800F30F0
 * Callers:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     sub_18010D634 @ 0x18010D634 (sub_18010D634.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     sub_1800F320C @ 0x1800F320C (sub_1800F320C.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  _BYTE MemoryInformation[12]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+3Ch] [rbp-1Ch]
  SIZE_T v6; // [rsp+40h] [rbp-18h]

  if ( off_1801559E0 == &off_1801559E0 )
    return 0;
  if ( !MemoryLength )
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           MemoryCache,
           MemoryRegionInformation,
           MemoryInformation,
           0x20uLL,
           0LL) < 0
      || v5 == 0x10000 )
    {
      return 0;
    }
    MemoryLength = v6;
  }
  return sub_1800F320C(MemoryCache, MemoryLength);
}
