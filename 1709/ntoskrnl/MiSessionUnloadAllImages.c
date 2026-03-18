/*
 * XREFs of MiSessionUnloadAllImages @ 0x1406ED444
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiSessionLookupImage @ 0x1400D5620 (MiSessionLookupImage.c)
 *     MmReleaseLoadLock @ 0x140515720 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140515A20 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x14059DFC0 (MmUnloadSystemImage.c)
 */

_QWORD *MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  struct _KTHREAD *v4; // rax

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v1[6]) == 1 && MiSessionLookupImage(v3) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((ULONG_PTR)v1);
      v4 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = (__int64)v4;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
