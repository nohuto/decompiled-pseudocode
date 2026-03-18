/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14014EA10
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x140089630 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14008A320 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14008D660 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x14008E320 (SepMandatoryIntegrityCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140090B30 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14014D3C0 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14025BF64 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_BYTE *ExpAllocateOwnerEntryForLegacyShim()
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v1; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE *result; // rax

  do
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x454F5246u);
    v1 = PoolWithTag;
  }
  while ( !PoolWithTag );
  memset(PoolWithTag, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  result = v1;
  v1[17] |= 2u;
  *((_QWORD *)v1 + 4) = CurrentThread;
  return result;
}
