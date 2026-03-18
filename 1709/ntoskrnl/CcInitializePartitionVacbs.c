/*
 * XREFs of CcInitializePartitionVacbs @ 0x140147F2C
 * Callers:
 *     CcInitializePartition @ 0x140147624 (CcInitializePartition.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     CcGetVacbFromFreeList @ 0x1400A4050 (CcGetVacbFromFreeList.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     CcSetVacbInFreeList @ 0x140115A18 (CcSetVacbInFreeList.c)
 *     CcInsertVacbArray @ 0x14014801C (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x1401480DC (CcAllocateInitializeVacbArray.c)
 *     MmReserveViewInSystemCache @ 0x1405CB5E4 (MmReserveViewInSystemCache.c)
 */

char __fastcall CcInitializePartitionVacbs(__int64 a1)
{
  char v1; // di
  KIRQL v3; // bl
  _QWORD *VacbFromFreeList; // r14
  __int64 v5; // rax
  KIRQL v6; // bl
  KIRQL v7; // dl
  __int64 InitializeVacbArray; // rbx
  KIRQL v9; // bp
  KIRQL v11; // bl

  v1 = 1;
  while ( *(_DWORD *)(a1 + 856) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
  {
    v3 = KeAcquireQueuedSpinLock(4uLL);
    VacbFromFreeList = CcGetVacbFromFreeList(a1, 0);
    KeReleaseQueuedSpinLock(4uLL, v3);
    if ( VacbFromFreeList )
    {
      v5 = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
      *VacbFromFreeList = v5;
      if ( !v5 )
      {
        v1 = 0;
        v11 = KeAcquireQueuedSpinLock(4uLL);
        CcSetVacbInFreeList(a1, VacbFromFreeList, 0);
        KeReleaseQueuedSpinLock(4uLL, v11);
        return v1;
      }
      v6 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(a1, VacbFromFreeList, 1);
      v7 = v6;
    }
    else
    {
      InitializeVacbArray = CcAllocateInitializeVacbArray();
      if ( !InitializeVacbArray )
        return 0;
      v9 = KeAcquireQueuedSpinLock(4uLL);
      CcInsertVacbArray(a1, InitializeVacbArray);
      if ( CcVacbArraysAllocated == 1 )
        *(_DWORD *)(InitializeVacbArray + 4) = 1;
      v7 = v9;
    }
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  return v1;
}
