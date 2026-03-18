/*
 * XREFs of CcForceWriteThrough @ 0x14012D540
 * Callers:
 *     CcPrepareMdlWrite @ 0x14012D230 (CcPrepareMdlWrite.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcCanIWriteStream @ 0x140064730 (CcCanIWriteStream.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

char __fastcall CcForceWriteThrough(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  char v4; // di
  KSPIN_LOCK *Partition; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  if ( a3 )
    Partition = (KSPIN_LOCK *)CcGetPartition((_QWORD *)a3);
  else
    Partition = (KSPIN_LOCK *)*((_QWORD *)PspSystemPartition + 1);
  if ( (*(_DWORD *)(a1 + 80) & 0x1000000) != 0 && !CcCanIWriteStream(Partition, a1, a2, 0, 0)
    || a4 && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) <= 0 && (*(_DWORD *)(a1 + 80) & 0x8000) == 0 )
  {
    v4 = 1;
    if ( a4 && (*(_DWORD *)(a3 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock(Partition + 16, &LockHandle);
      *(_DWORD *)(a3 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
  }
  return v4;
}
