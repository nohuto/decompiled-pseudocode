/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x140086C70
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ZwSetInformationThread @ 0x1401A7660 (ZwSetInformationThread.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x14052ECBC (RtlpCreateUserThreadEx.c)
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
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 104)) )
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
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 104));
LABEL_8:
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v5;
}
