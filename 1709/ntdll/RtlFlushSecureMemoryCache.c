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

char __fastcall RtlFlushSecureMemoryCache(__int64 a1, __int64 a2)
{
  int v4; // [rsp+3Ch] [rbp-1Ch]
  __int64 v5; // [rsp+40h] [rbp-18h]

  if ( RtlpSecMemListHead == (_UNKNOWN *)&RtlpSecMemListHead )
    return 0;
  if ( !a2 )
  {
    if ( (int)ZwQueryVirtualMemory() < 0 || v4 == 0x10000 )
      return 0;
    a2 = v5;
  }
  return RtlpCallSecureMemoryCallbacks(a1, a2);
}
