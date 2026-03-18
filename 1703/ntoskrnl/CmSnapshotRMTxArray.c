/*
 * XREFs of CmSnapshotRMTxArray @ 0x1404CA4DC
 * Callers:
 *     CmpTryToRundownHive @ 0x14007EC54 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpAddEnlistmentToRollbackPacket @ 0x14066B640 (CmpAddEnlistmentToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x14066BA68 (CmpReserveRollbackPacketSpace.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 NextElement; // rdx
  _DWORD *v9; // r10
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
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
