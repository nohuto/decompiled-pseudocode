/*
 * XREFs of CcForceWriteThrough @ 0x140098ED0
 * Callers:
 *     CcPrepareMdlWrite @ 0x140098000 (CcPrepareMdlWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     CcCanIWriteStream @ 0x140133A34 (CcCanIWriteStream.c)
 */

char __fastcall CcForceWriteThrough(__int64 a1, int a2, __int64 a3, char a4)
{
  char v4; // di
  __int64 Partition; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  if ( a3 )
    Partition = CcGetPartition(a3);
  else
    Partition = *((_QWORD *)PspSystemPartition + 1);
  if ( (*(_DWORD *)(a1 + 80) & 0x1000000) != 0 && !(unsigned __int8)CcCanIWriteStream(Partition, a1, a2, 0, 0)
    || a4 && (int)PsGetIoPriorityThread(KeGetCurrentThread()) <= 0 && (*(_DWORD *)(a1 + 80) & 0x8000) == 0 )
  {
    v4 = 1;
    if ( a4 && (*(_DWORD *)(a3 + 152) & 0x400) == 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      *(_DWORD *)(a3 + 152) |= 0x400u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
  }
  return v4;
}
