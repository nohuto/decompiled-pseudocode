/*
 * XREFs of PspIumFreePhysicalPages @ 0x1402854F4
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 * Callees:
 *     MmUnmapReservedMapping @ 0x140001420 (MmUnmapReservedMapping.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1400C5360 (MmMapLockedPagesWithReservedMapping.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     PspIumFreePartitionPages @ 0x14028536C (PspIumFreePartitionPages.c)
 */

void __fastcall PspIumFreePhysicalPages(__int64 a1, ULONG_PTR a2)
{
  KIRQL v3; // si
  PVOID v4; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v6[2]; // [rsp+60h] [rbp-10h] BYREF

  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.StartVa = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v6[0] = a2;
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
      (ULONG_PTR *)v4 + 6);
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
    PspIumFreePartitionPages(a1, 1, v6);
  else
    MiFreePagesFromMdl((ULONG_PTR)&MemoryDescriptorList, 0);
}
