/*
 * XREFs of NtTerminateProcess @ 0x14056E088
 * Callers:
 *     <none>
 * Callees:
 *     KeForceResumeThread @ 0x140041924 (KeForceResumeThread.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     PspTerminateThreadByPointer @ 0x1404BB3D0 (PspTerminateThreadByPointer.c)
 *     PspTerminateAllThreads @ 0x1404E89FC (PspTerminateAllThreads.c)
 *     PspTerminateProcess @ 0x1404E9088 (PspTerminateProcess.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x14056E290 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  struct _KTHREAD *CurrentThread; // rdi
  BOOL v3; // r15d
  ULONG_PTR Process; // rsi
  char PreviousMode; // r12
  NTSTATUS result; // eax
  _DWORD *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // ebx
  volatile signed __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  unsigned int v17; // [rsp+70h] [rbp+8h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle )
  {
    result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x65547350u, (__int64)&Object, 0LL, 0LL);
    if ( result < 0 )
      return result;
    if ( !PreviousMode )
      v3 = (*(_BYTE *)(Process + 720) & 1) == 0;
    v8 = Object;
    goto LABEL_6;
  }
  Object = CurrentThread->ApcState.Process;
  v8 = (_DWORD *)Process;
  if ( PreviousMode != 1 && (*(_BYTE *)(Process + 720) & 1) == 0 || (*(_DWORD *)(Process + 1740) & 1) != 0 )
    return -1073741637;
  if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
  {
    ObfReferenceObjectWithTag((PVOID)Process, 0x65547350u);
LABEL_6:
    v9 = v8[184];
    --CurrentThread->KernelApcDisable;
    v17 = v9;
    v10 = PspTerminateProcess((ULONG_PTR)v8, (__int64)CurrentThread, ExitStatus, v3);
    ObfDereferenceObjectWithTag(v8, 0x65547350u);
    if ( v8 == (_DWORD *)Process )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(Process + 720) & 1) != 0 )
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
      PspLogAuditTerminateRemoteProcessEvent(v17, v10);
    }
LABEL_20:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return v10;
  }
  --CurrentThread->KernelApcDisable;
  v11 = (volatile signed __int64 *)(Process + 728);
  ExAcquirePushLockExclusiveEx(Process + 728, 0LL);
  _m_prefetchw((const void *)(Process + 772));
  v15 = *(_DWORD *)(Process + 772);
  do
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 772), v15 | 0x40000000, v15);
  }
  while ( v16 != v15 );
  if ( (v15 & 0x40000008) == 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(Process + 1572) == 259 )
      *(_DWORD *)(Process + 1572) = ExitStatus;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728), v12, v13, v14);
    KeAbPostRelease(Process + 728);
    v10 = PspTerminateAllThreads(Process, (__int64)CurrentThread, ExitStatus, 0);
    goto LABEL_20;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Process + 728), v12, v13, v14);
  KeAbPostRelease(Process + 728);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  PspTerminateThreadByPointer((__int64)CurrentThread, (unsigned int)ExitStatus, 1);
  return 0;
}
