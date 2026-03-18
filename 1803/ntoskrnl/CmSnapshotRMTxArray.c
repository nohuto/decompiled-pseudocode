/*
 * XREFs of CmSnapshotRMTxArray @ 0x14054F008
 * Callers:
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     CmpAddEnlistmentToRollbackPacket @ 0x1406F9718 (CmpAddEnlistmentToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x1406F9B40 (CmpReserveRollbackPacketSpace.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  __int64 NextElement; // rax
  __int64 v7; // rax
  __int64 result; // rax
  bool v9; // zf
  unsigned int v10; // eax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = a1 + 16;
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v5 = 0;
      v11 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v3, &v11, 0LL);
        if ( !NextElement )
          break;
        v9 = (*(_DWORD *)(NextElement + 48) & 8) == 0;
        v10 = v5 + 1;
        if ( !v9 )
          v10 = v5;
        v5 = v10;
      }
      if ( v5 <= a2[1] - *a2 )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      result = CmpReserveRollbackPacketSpace(a2, v5);
      if ( (int)result < 0 )
        return result;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v7 = CmListGetNextElement(v3, &v11, 0LL);
      if ( !v7 )
        break;
      if ( (*(_DWORD *)(v7 + 48) & 8) == 0 )
        CmpAddEnlistmentToRollbackPacket(a2, *(_QWORD *)(v7 + 72));
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
