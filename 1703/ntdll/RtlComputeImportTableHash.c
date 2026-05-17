/*
 * XREFs of RtlComputeImportTableHash @ 0x1800E0F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     sub_1800E0C98 @ 0x1800E0C98 (sub_1800E0C98.c)
 *     sub_1800E0D54 @ 0x1800E0D54 (sub_1800E0D54.c)
 *     sub_1800E0E10 @ 0x1800E0E10 (sub_1800E0E10.c)
 *     sub_1800E0EF4 @ 0x1800E0EF4 (sub_1800E0EF4.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F30F0 (RtlFlushSecureMemoryCache.c)
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
