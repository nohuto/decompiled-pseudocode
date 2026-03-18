/*
 * XREFs of MiProcessLoaderEntry @ 0x14006DF00
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x1404B65FC (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlInsertInvertedFunctionTable @ 0x14006DD94 (RtlInsertInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x14006E01C (MmLockLoadedModuleListExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1401480F4 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall MiProcessLoaderEntry(int *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int **v5; // rax
  __int64 v7; // rdx
  int **v8; // rax
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  if ( a2 == 1 )
  {
    MmLockLoadedModuleListExclusive(&v9);
    v5 = (int **)*(&PsLoadedModuleList + 1);
    if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PsLoadedModuleList;
    *((_QWORD *)a1 + 1) = v5;
    *v5 = a1;
    *(&PsLoadedModuleList + 1) = a1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v9);
    if ( (MiFlags & 0x80000) == 0 )
      RtlInsertInvertedFunctionTable(*((void **)a1 + 6), a1[16]);
  }
  else
  {
    if ( (MiFlags & 0x80000) == 0 )
      RtlRemoveInvertedFunctionTable(*((_QWORD *)a1 + 6));
    MmLockLoadedModuleListExclusive(&v9);
    v7 = *(_QWORD *)a1;
    v8 = (int **)*((_QWORD *)a1 + 1);
    if ( *(int **)(*(_QWORD *)a1 + 8LL) != a1 || *v8 != a1 )
      __fastfail(3u);
    *v8 = (int *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v9);
  }
  ExReleaseResourceLite((PERESOURCE)&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(CurrentThread);
}
