/*
 * XREFs of MiInitializeSystemPageTable @ 0x140071268
 * Callers:
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x140071528 (MiInitializePfnForOtherProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiTransformValidPteInPlace @ 0x1400C022C (MiTransformValidPteInPlace.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1400C03C4 (MiInsertRecursiveTbFlushEntries.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401A6474 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiGetContainingPageTable @ 0x1401A64B8 (MiGetContainingPageTable.c)
 *     MxFillPhysicalPage @ 0x14089BA60 (MxFillPhysicalPage.c)
 */

struct _KTHREAD *__fastcall MiInitializeSystemPageTable(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  int v9; // ebx
  char v10; // di
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned int v14; // edi
  unsigned __int64 v15; // rbp
  void *v16; // rax
  unsigned __int8 v17; // dl
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned __int64 ContainingPageTable; // rbp
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  unsigned __int64 ValidPte; // rdi
  struct _KTHREAD *result; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v30; // [rsp+78h] [rbp+10h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0;
  v10 = MI_READ_PTE_LOCK_FREE(a3);
  v12 = (v11 + 0x58000000000LL) / 48;
  v13 = (__int64)(a3 << 25) >> 16;
  if ( v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (v10 & 1) != 0 )
      v15 = *(_QWORD *)v13;
    else
      v15 = *(_QWORD *)(a1 + 272);
    if ( KeGetCurrentPrcb()->HyperPte )
    {
      v16 = (void *)MiMapPageInHyperSpaceWorker(v12, &v30, 0x80000000, 0xFFFFF6FFFFFFFFFFuLL);
      v17 = v30;
      memset64(v16, v15, 0x200uLL);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v16, v17, 0x80000000);
    }
    else
    {
      MxFillPhysicalPage(v12);
    }
    v14 = -1879048188;
  }
  else
  {
    v14 = -1879048186;
  }
  LeafVa = MiGetLeafVa(a3);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v9 = 1;
  }
  else if ( v19 <= 0x7FFFFFFEFFFFLL || v19 >= qword_1403CD100 && v19 <= qword_1403CBB70 || v19 >= v21 && v19 <= v20 )
  {
    v9 = 4;
  }
  *a4 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a3);
  if ( v13 >= v24 && v13 <= v23 )
    v14 |= 0x8000000u;
  ValidPte = MiMakeValidPte(a3, v12, v14, v23);
  if ( a2 == 3 && (MiFlags & 0x30) != 0 && !v9 )
  {
    if ( PsInitialSystemProcess )
      ContainingPageTable = PsInitialSystemProcess->DirectoryTableBase >> 12;
    else
      ContainingPageTable = MI_GET_PAGE_FRAME_FROM_PTE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  MiInitializePfnForOtherProcess(
    v12,
    a3,
    ContainingPageTable,
    512LL,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock);
  if ( a2 == 3 )
    KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  if ( (MI_READ_PTE_LOCK_FREE(a3) & 1) != 0 )
  {
    result = (struct _KTHREAD *)MiTransformValidPteInPlace(a3, a3, ValidPte, a2);
    if ( a2 != 3 )
      return result;
    result = (struct _KTHREAD *)MiInsertRecursiveTbFlushEntries(a5, 3LL, a3);
  }
  else
  {
    *(_QWORD *)a3 = ValidPte;
    result = (struct _KTHREAD *)MiPteInShadowRange(a3);
    if ( (_DWORD)result )
      result = MiWritePteShadow(v27, ValidPte, v28);
  }
  if ( a2 == 3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (struct _KTHREAD *)LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return result;
}
