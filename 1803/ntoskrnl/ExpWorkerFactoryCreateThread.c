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
  int UserThread; // eax
  unsigned int v4; // edi
  int v6; // [rsp+30h] [rbp-68h]
  __int64 v7; // [rsp+60h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v4 = 128;
    goto LABEL_8;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v4 = 128;
  }
  else
  {
    ++*(_DWORD *)(a1 + 136);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    UserThread = RtlpCreateUserThreadEx(
                   *(HANDLE *)(a1 + 40),
                   *(_QWORD *)(a1 + 56),
                   *(_QWORD *)(a1 + 64),
                   v6,
                   *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                   *(PVOID *)(a1 + 32),
                   (__int64)&Handle,
                   (__int64)&v7);
    *(_DWORD *)(a1 + 160) = UserThread;
    v4 = UserThread;
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
  return v4;
}
