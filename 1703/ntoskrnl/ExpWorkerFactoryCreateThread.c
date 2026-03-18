/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x14012A928
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1400E3D20 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ZwSetInformationThread @ 0x14017E0E0 (ZwSetInformationThread.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x14055DEFC (RtlpCreateUserThreadEx.c)
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
  v3 = *(_DWORD *)(a1 + 152) & 0x800;
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
    UserThread = RtlpCreateUserThreadEx(
                   *(_QWORD *)(a1 + 40),
                   0,
                   v3 != 0 ? 0x10 : 0,
                   0,
                   *(_QWORD *)(a1 + 56),
                   *(_QWORD *)(a1 + 64));
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
