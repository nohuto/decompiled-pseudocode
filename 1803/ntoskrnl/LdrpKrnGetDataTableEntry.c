/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x14013D610
 * Callers:
 *     LdrpGetImageSize @ 0x14013D584 (LdrpGetImageSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x14013DC84 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x1405BD604 (LdrpResGetMappingSize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 */

PVOID *__fastcall LdrpKrnGetDataTableEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PVOID *v2; // rdi
  PVOID *v4; // rcx
  PVOID v5; // rdx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  if ( !CurrentThread )
    return 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = (PVOID *)PsLoadedModuleList;
  while ( 1 )
  {
    v5 = v4[6];
    if ( a1 >= (unsigned __int64)v5 && a1 < (unsigned __int64)v5 + *((unsigned int *)v4 + 16) )
      break;
    v4 = (PVOID *)*v4;
    if ( v4 == &PsLoadedModuleList )
      goto LABEL_6;
  }
  v2 = v4;
LABEL_6:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
