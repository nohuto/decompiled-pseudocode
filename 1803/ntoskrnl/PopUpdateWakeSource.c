/*
 * XREFs of PopUpdateWakeSource @ 0x140278870
 * Callers:
 *     PopRequestCompletion @ 0x140165E50 (PopRequestCompletion.c)
 *     PoSetSystemWakeDevice @ 0x140271790 (PoSetSystemWakeDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopUpdateWakeSource(PVOID Object)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  bool v7; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x206D654Du);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( PopCurrentWakeInfo )
    {
      ObfReferenceObjectWithTag(Object, 0x67446F50u);
      v5 = PopCurrentWakeInfo;
      v4[3] = PopCurrentWakeInfo;
      v4[2] = Object;
      _InterlockedAdd((volatile signed __int32 *)(v5 + 16), 1u);
      v6 = (_QWORD *)qword_1403AAEE8;
      if ( *(PVOID **)qword_1403AAEE8 != &PopWakeSourceWorkList )
        __fastfail(3u);
      v7 = PopWakeSourceWorkInProgress == 0;
      *v4 = &PopWakeSourceWorkList;
      v4[1] = v6;
      *v6 = v4;
      qword_1403AAEE8 = (__int64)v4;
      v4 = 0LL;
      if ( v7 )
      {
        PopWakeSourceWorkInProgress = 1;
        ExQueueWorkItem(&PopWakeSourceWorkItem, DelayedWorkQueue);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x206D654Du);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
