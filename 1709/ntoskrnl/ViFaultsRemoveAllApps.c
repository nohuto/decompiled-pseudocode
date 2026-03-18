/*
 * XREFs of ViFaultsRemoveAllApps @ 0x1407B84A8
 * Callers:
 *     VfFaultsSetParameters @ 0x1407B7CD8 (VfFaultsSetParameters.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 ViFaultsRemoveAllApps()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  KIRQL v2; // di
  PVOID *v3; // rbx
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = (PVOID **)ViFaultApplicationsList;
  v2 = v0;
  if ( ViFaultApplicationsList != &ViFaultApplicationsList )
  {
    do
    {
      v3 = *v1;
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID **)v3;
    }
    while ( v3 != &ViFaultApplicationsList );
  }
  qword_140361AB8 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  result = v2;
  __writecr8(v2);
  return result;
}
