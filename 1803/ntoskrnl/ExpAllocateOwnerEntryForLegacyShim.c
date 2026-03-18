/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x140159678
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x14005F800 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14005F990 (SeSecurityAttributePresent.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x1400A5810 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400FDD20 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1401018A0 (SepMandatoryIntegrityCheck.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140157E8C (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1402B9EB4 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
