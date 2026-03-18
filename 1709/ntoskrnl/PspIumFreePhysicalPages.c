/*
 * XREFs of PspIumFreePhysicalPages @ 0x14024FA30
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14014E860 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140150450 (MmUnmapReservedMapping.c)
 *     PspIumFreePartitionPages @ 0x14024F8A8 (PspIumFreePartitionPages.c)
 */

void __fastcall PspIumFreePhysicalPages(__int64 a1, __int64 a2)
{
  KIRQL v3; // si
  PVOID v4; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6; // [rsp+60h] [rbp-10h] BYREF

  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.StartVa = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v6 = a2;
  v3 = 0;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  MemoryDescriptorList.ByteCount = 4096;
  v4 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v4 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PspIumFreeMappingLock);
    v4 = MmMapLockedPagesWithReservedMapping(PspIumFreeMapping, 0x466D7356u, &MemoryDescriptorList, MmCached);
  }
  if ( a1 )
    PspIumFreePartitionPages(
      a1,
      (*((_DWORD *)v4 + 10) >> 12) + ((*((_DWORD *)v4 + 10) & 0xFFF) != 0),
      (__int64 *)v4 + 6);
  else
    MiFreePagesFromMdl((ULONG_PTR)v4, 0);
  if ( v4 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v4, 0x466D7356u, &MemoryDescriptorList);
    KxReleaseSpinLock(&PspIumFreeMappingLock);
    __writecr8(v3);
  }
  else
  {
    MmUnmapLockedPages(v4, &MemoryDescriptorList);
  }
  if ( a1 )
    PspIumFreePartitionPages(a1, 1, &v6);
  else
    MiFreePagesFromMdl((ULONG_PTR)&MemoryDescriptorList, 0);
}
