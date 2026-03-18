/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x1400B2954
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x140076870 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ZwSetInformationThread @ 0x14017DA60 (ZwSetInformationThread.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x1404EBD18 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  int UserThread; // eax
  unsigned int v5; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v3 = (*(_DWORD *)(a1 + 152) >> 7) & 0x10;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v5 = 128;
    goto LABEL_8;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v5 = 128;
  }
  else
  {
    ++*(_DWORD *)(a1 + 136);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    UserThread = RtlpCreateUserThreadEx(*(_QWORD *)(a1 + 40), 0, v3, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
    *(_DWORD *)(a1 + 160) = UserThread;
    v5 = UserThread;
    if ( UserThread >= 0 )
    {
      if ( *(_DWORD *)(a1 + 156) )
        ZwSetInformationThread(Handle, ThreadBasePriority, (PVOID)(a1 + 156), 4u);
      ObCloseHandle(Handle, 0);
      goto LABEL_7;
    }
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    --*(_DWORD *)(a1 + 136);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
LABEL_7:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104));
LABEL_8:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
