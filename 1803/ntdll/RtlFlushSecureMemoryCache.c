/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800F01D0
 * Callers:
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     sub_1800F02EC @ 0x1800F02EC (sub_1800F02EC.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  _BYTE MemoryInformation[12]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+3Ch] [rbp-1Ch]
  SIZE_T v6; // [rsp+40h] [rbp-18h]

  if ( off_180156A40 == &off_180156A40 )
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
  return sub_1800F02EC(MemoryCache, MemoryLength);
}
