/*
 * XREFs of MiSessionUnloadAllImages @ 0x14057A5E0
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14006B974 (MiSessionLookupImage.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     MmUnloadSystemImage @ 0x1405856E0 (MmUnloadSystemImage.c)
 */

__int64 MiSessionUnloadAllImages()
{
  struct _KTHREAD *Lock; // rax
  PVOID *v1; // rbx
  __int64 v2; // r8
  struct _KTHREAD *v3; // rax
  unsigned __int64 v4; // rdx

  Lock = MmAcquireLoadLock();
  v1 = (PVOID *)PsLoadedModuleList;
  v2 = (__int64)Lock;
  while ( v1 != &PsLoadedModuleList )
  {
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v1[6]) == 1 && MiSessionLookupImage(v4) )
    {
      MmReleaseLoadLock(v2);
      MmUnloadSystemImage((ULONG_PTR)v1);
      v3 = MmAcquireLoadLock();
      v1 = (PVOID *)PsLoadedModuleList;
      v2 = (__int64)v3;
    }
    else
    {
      v1 = (PVOID *)*v1;
    }
  }
  return MmReleaseLoadLock(v2);
}
