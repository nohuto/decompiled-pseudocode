/*
 * XREFs of ViFaultsRemoveAllTags @ 0x1407B8524
 * Callers:
 *     VfFaultsSetParameters @ 0x1407B7CD8 (VfFaultsSetParameters.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 ViFaultsRemoveAllTags()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = (PVOID **)ViFaultTagsList;
  v2 = v0;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    do
    {
      v3 = *v1;
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID **)v3;
    }
    while ( v3 != &ViFaultTagsList );
  }
  ViHaveFaultTags = 0;
  qword_140361AD8 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  result = v2;
  __writecr8(v2);
  return result;
}
