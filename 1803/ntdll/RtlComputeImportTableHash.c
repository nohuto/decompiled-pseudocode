/*
 * XREFs of RtlComputeImportTableHash @ 0x1800DA800
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     sub_1800DA518 @ 0x1800DA518 (sub_1800DA518.c)
 *     sub_1800DA5D4 @ 0x1800DA5D4 (sub_1800DA5D4.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_1800DA774 @ 0x1800DA774 (sub_1800DA774.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F01D0 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlComputeImportTableHash(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+58h] [rbp-28h]
  __int64 v6; // [rsp+68h] [rbp-18h]
  __int64 v7; // [rsp+C8h] [rbp+48h]

  v5 = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( a3 == 1 )
  {
    ZwCreateSection();
    v3 = -1073741816;
    if ( v7
      && (unsigned int)ZwUnmapViewOfSection() == -1073741755
      && (unsigned __int8)RtlFlushSecureMemoryCache(v7, 0LL) )
    {
      ZwUnmapViewOfSection();
    }
  }
  else
  {
    return (unsigned int)-1073741736;
  }
  return v3;
}
