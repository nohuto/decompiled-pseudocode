/*
 * XREFs of PspIumFreePhysicalPages @ 0x14023A67C
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14020F8C0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x14020FA40 (MmUnmapReservedMapping.c)
 */

ULONG_PTR *__fastcall PspIumFreePhysicalPages(__int64 a1)
{
  KIRQL v1; // di
  PVOID v2; // rbx
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-40h] BYREF
  __int64 v5; // [rsp+60h] [rbp-10h]

  v1 = 0;
  v5 = a1;
  MemoryDescriptorList.Next = 0LL;
  *(_DWORD *)&MemoryDescriptorList.Size = 131128;
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  v2 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
  if ( !v2 )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&PspIumFreeMappingLock);
    v2 = MmMapLockedPagesWithReservedMapping(PspIumFreeMapping, 0x466D7356u, &MemoryDescriptorList, MmCached);
  }
  MiFreePagesFromMdl((ULONG_PTR)v2, 0);
  if ( v2 == PspIumFreeMapping )
  {
    MmUnmapReservedMapping(v2, 0x466D7356u, &MemoryDescriptorList);
    KxReleaseSpinLock(&PspIumFreeMappingLock);
    __writecr8(v1);
  }
  else
  {
    MmUnmapLockedPages(v2, &MemoryDescriptorList);
  }
  return MiFreePagesFromMdl((ULONG_PTR)&MemoryDescriptorList, 0);
}
