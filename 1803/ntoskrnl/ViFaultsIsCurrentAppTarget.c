/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x1408255AC
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140824DA4 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

_BOOL8 ViFaultsIsCurrentAppTarget()
{
  KIRQL v0; // al
  PVOID *v1; // rdi
  unsigned __int64 v2; // rbx
  BOOL v3; // esi
  int v4; // eax

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = (PVOID *)ViFaultApplicationsList;
  v2 = v0;
  v3 = ViFaultApplicationsList == &ViFaultApplicationsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  __writecr8(v2);
  if ( v1 != &ViFaultApplicationsList )
  {
    v4 = KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000;
    v3 = v4 != 0;
    if ( v4 )
      ++dword_14084226C;
    else
      ++dword_140842268;
  }
  return v3;
}
