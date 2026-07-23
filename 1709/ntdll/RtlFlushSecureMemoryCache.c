/*
 * XREFs of RtlFlushSecureMemoryCache @ 0x1800F3D60
 * Callers:
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlComputeImportTableHash @ 0x1800DF8F0 (RtlComputeImportTableHash.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800F3E7C (RtlpCallSecureMemoryCallbacks.c)
 */

BOOLEAN __cdecl RtlFlushSecureMemoryCache(PVOID MemoryCache, SIZE_T MemoryLength)
{
  _BYTE MemoryInformation[12]; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+3Ch] [rbp-1Ch]
  SIZE_T v6; // [rsp+40h] [rbp-18h]

  if ( RtlpSecMemListHead == &RtlpSecMemListHead )
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
  return RtlpCallSecureMemoryCallbacks(MemoryCache, MemoryLength);
}
