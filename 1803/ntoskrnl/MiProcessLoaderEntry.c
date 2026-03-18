/*
 * XREFs of MiProcessLoaderEntry @ 0x140160F88
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x1405F8E14 (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRemoveInvertedFunctionTable @ 0x140160774 (RtlRemoveInvertedFunctionTable.c)
 *     RtlInsertInvertedFunctionTable @ 0x140160E1C (RtlInsertInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x14016113C (MmLockLoadedModuleListExclusive.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiProcessLoaderEntry(int *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int **v5; // rax
  bool v6; // dl
  _QWORD *v7; // r10
  ULONG_PTR v8; // r11
  unsigned __int64 v9; // r8
  _QWORD *v10; // rax
  __int64 v12; // rdx
  int **v13; // rax
  unsigned __int8 v14; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( a2 == 1 )
  {
    MmLockLoadedModuleListExclusive(&v14);
    v5 = (int **)*(&PsLoadedModuleList + 1);
    if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PsLoadedModuleList;
    v6 = 0;
    *((_QWORD *)a1 + 1) = v5;
    *v5 = a1;
    v7 = (_QWORD *)qword_1403CB5B8;
    *(&PsLoadedModuleList + 1) = a1;
    v8 = *((_QWORD *)a1 + 6);
    if ( qword_1403CB5B8 )
    {
      while ( 1 )
      {
        v9 = *(v7 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v8 > *((unsigned int *)v7 - 42) + v9 - 1 )
        {
          v10 = (_QWORD *)v7[1];
          if ( !v10 )
          {
            v6 = 1;
            break;
          }
        }
        else
        {
          if ( v8 >= v9 )
            KeBugCheckEx(0x1Au, 0x2101uLL, v8, (ULONG_PTR)v7, 0LL);
          v10 = (_QWORD *)*v7;
          if ( !*v7 )
            break;
        }
        v7 = v10;
      }
    }
    RtlAvlInsertNodeEx(&qword_1403CB5B8, (unsigned __int64)v7, v6, (_QWORD *)a1 + 29);
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v14);
    if ( (MiFlags & 0x80000) == 0 )
      RtlInsertInvertedFunctionTable(*((_QWORD *)a1 + 6), a1[16]);
  }
  else
  {
    if ( (MiFlags & 0x80000) == 0 )
      RtlRemoveInvertedFunctionTable(*((_QWORD *)a1 + 6));
    MmLockLoadedModuleListExclusive(&v14);
    v12 = *(_QWORD *)a1;
    if ( *(int **)(*(_QWORD *)a1 + 8LL) != a1 || (v13 = (int **)*((_QWORD *)a1 + 1), *v13 != a1) )
      __fastfail(3u);
    *v13 = (int *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    RtlAvlRemoveNode(&qword_1403CB5B8, (__int64)(a1 + 58));
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v14);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
