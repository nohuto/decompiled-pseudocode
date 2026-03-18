/*
 * XREFs of PopFreeIrp @ 0x140144BEC
 * Callers:
 *     PopRequestCompletion @ 0x140144A90 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x14040A9E0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     PopFxReleasePowerIrp @ 0x140144FDC (PopFxReleasePowerIrp.c)
 */

LONG_PTR __fastcall PopFreeIrp(PIRP Irp)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rbp
  void *v5; // r14
  __int64 v6; // rdx
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_QWORD *)*((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v3 = v2[25];
  v4 = (void *)v2[4];
  v5 = (void *)v2[3];
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = *v2;
  v7 = (_QWORD *)v2[1];
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v7 != v2 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v3 && *((_BYTE *)v2 + 184) == 2 && *((_DWORD *)v2 + 47) == 1 )
  {
    PopFxReleasePowerIrp(v3);
  }
  else
  {
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v2);
    IoFreeIrp(Irp);
  }
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return ObfDereferenceObjectWithTag(v5, 0x746C6644u);
}
