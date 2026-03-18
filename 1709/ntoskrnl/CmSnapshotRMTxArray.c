/*
 * XREFs of CmSnapshotRMTxArray @ 0x140569704
 * Callers:
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 *     CmpAddEnlistmentToRollbackPacket @ 0x140695CAC (CmpAddEnlistmentToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x1406960D4 (CmpReserveRollbackPacketSpace.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 NextElement; // rdx
  _DWORD *v9; // r9
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
      if ( CmListGetNextElement(v3, &v11, 0LL) )
      {
        do
        {
          NextElement = CmListGetNextElement(v3, &v11, 0LL);
          v10 = v5 + 1;
          if ( (*v9 & 8) != 0 )
            v10 = v5;
          v5 = v10;
        }
        while ( NextElement );
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
      v6 = CmListGetNextElement(v3, &v11, 0LL);
      if ( !v6 )
        break;
      if ( (*(_DWORD *)(v6 + 48) & 8) == 0 )
        CmpAddEnlistmentToRollbackPacket(a2, *(_QWORD *)(v6 + 72));
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
