/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14013FB78
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1400180F0 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x140018280 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14007D3F0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14007D4E0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x14007EFF0 (SepMandatoryIntegrityCheck.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14013F370 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1402856A4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
