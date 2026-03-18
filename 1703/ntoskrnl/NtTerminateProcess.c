/*
 * XREFs of NtTerminateProcess @ 0x14054E9C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeForceResumeThread @ 0x140110D6C (KeForceResumeThread.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspTerminateProcess @ 0x14054EBC8 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14054F0D0 (PspTerminateThreadByPointer.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x14054F17C (PspLogAuditTerminateRemoteProcessEvent.c)
 */

NTSTATUS __stdcall NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR Process; // rsi
  char PreviousMode; // r14
  NTSTATUS result; // eax
  _DWORD *v7; // rbp
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  volatile signed __int64 *v10; // rbp
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // r8
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               1,
               (__int64)PsProcessType,
               PreviousMode,
               1700033360,
               &Object,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    v7 = Object;
    goto LABEL_4;
  }
  Object = CurrentThread->ApcState.Process;
  v7 = (_DWORD *)Process;
  if ( PreviousMode != 1 && !*(_QWORD *)(Process + 720) || (*(_DWORD *)(Process + 1740) & 1) != 0 )
    return -1073741637;
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    ObfReferenceObjectWithTag((PVOID)Process, 0x65547350u);
LABEL_4:
    v8 = v7[184];
    --CurrentThread->KernelApcDisable;
    v9 = PspTerminateProcess((ULONG_PTR)v7);
    ObfDereferenceObjectWithTag(v7, 0x65547350u);
    if ( v7 == (_DWORD *)Process )
    {
      if ( PreviousMode == 1 || *(_QWORD *)(Process + 720) )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        PspExitThread(ExitStatus);
        __debugbreak();
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(v8, v9);
    }
LABEL_18:
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    return v9;
  }
  --CurrentThread->KernelApcDisable;
  v10 = (volatile signed __int64 *)(Process + 728);
  ExAcquirePushLockExclusiveEx(Process + 728, 0LL);
  _m_prefetchw((const void *)(Process + 772));
  v11 = *(_DWORD *)(Process + 772);
  do
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 772), v11 | 0x40000000, v11);
  }
  while ( v12 != v11 );
  if ( (v11 & 0x40000008) == 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(Process + 1572) == 259 )
      *(_DWORD *)(Process + 1572) = ExitStatus;
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728));
    KeAbPostRelease(Process + 728);
    v9 = PspTerminateAllThreads(Process);
    goto LABEL_18;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728));
  KeAbPostRelease(Process + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  LOBYTE(v13) = 1;
  PspTerminateThreadByPointer(CurrentThread, (unsigned int)ExitStatus, v13);
  return 0;
}
