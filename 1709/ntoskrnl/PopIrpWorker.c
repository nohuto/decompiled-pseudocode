/*
 * XREFs of PopIrpWorker @ 0x140151D80
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     PopPepDeviceDState @ 0x140123504 (PopPepDeviceDState.c)
 *     PoDeviceAcquireIrp @ 0x14012A8E0 (PoDeviceAcquireIrp.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PsTerminateSystemThread @ 0x140599300 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(__int64 *Entry)
{
  unsigned __int8 CurrentIrql; // r15
  LARGE_INTEGER *Timeout; // r14
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rcx
  char v16; // di
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int v19; // ecx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v26[7]; // [rsp+48h] [rbp-38h] BYREF
  LARGE_INTEGER v27; // [rsp+B0h] [rbp+30h] BYREF

  CurrentIrql = 0;
  memset(v26, 0, 0x30uLL);
  v26[2] = KeGetCurrentThread();
  if ( Entry )
  {
    if ( *Entry )
      KeReleaseSemaphoreEx(*Entry, 0, 1);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v27.QuadPart = -100000000LL;
    Timeout = &v27;
    LOBYTE(v26[5]) = 0;
  }
  else
  {
    Timeout = 0LL;
    LOBYTE(v26[5]) = 1;
  }
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_140364998 != &PopIrpThreadList )
    __fastfail(3u);
  v26[0] = &PopIrpThreadList;
  v26[1] = qword_140364998;
  *(_QWORD *)qword_140364998 = v26;
  qword_140364998 = (__int64)v26;
LABEL_7:
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v4 = PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList
        || (v5 = *(_QWORD *)PopIrpWorkerList, *(_QWORD *)(*(_QWORD *)PopIrpWorkerList + 8LL) != PopIrpWorkerList) )
      {
        __fastfail(3u);
      }
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v5 + 8) = &PopIrpWorkerList;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v6 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v6 == PopIrpWorkerCount
        && !PopIrpWorkerPendingCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
      v7 = v4 - 168;
      v8 = *(_QWORD *)(v4 - 168 + 184);
      v9 = v4 - 168;
      v10 = *(_QWORD *)(v8 + 40);
      PoDeviceAcquireIrp(v9, *(_BYTE *)(v8 + 1), v10);
      v12 = *(_QWORD *)(v7 + 72LL * (*(char *)(v7 + 66) - 1) + 272);
      if ( *(_BYTE *)(v12 + 184) == 2 && *(_DWORD *)(v12 + 188) == 1 && *(_QWORD *)(v12 + 32) == v10 )
      {
        v13 = *(_QWORD *)(v12 + 24);
        v14 = *(_QWORD *)(v12 + 200);
        v15 = v13 ? *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL) : 0LL;
        v11 = *(unsigned int *)(v15 + 140);
        *(_DWORD *)(v15 + 140) = *(_DWORD *)(v12 + 192);
        if ( v14 )
        {
          _m_prefetchw((const void *)(v14 + 32));
          v17 = *(_DWORD *)(v14 + 32);
          do
          {
            v18 = v17;
            v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 32), v17, v17);
          }
          while ( v18 != v17 );
          v19 = *(_DWORD *)(v12 + 192);
          *(_BYTE *)(v12 + 208) = v17 & 1;
          *(_BYTE *)(v12 + 209) = v19 != (_DWORD)v11;
          if ( v19 != (_DWORD)v11 )
          {
            if ( v19 == 1 )
              _InterlockedOr((volatile signed __int32 *)(v14 + 32), 2u);
            PopPepDeviceDState(*(_QWORD *)(v14 + 56), *(_DWORD *)(v12 + 192), 0LL, *(_BYTE *)(v12 + 208));
          }
        }
      }
      v16 = 0;
      v26[3] = v7;
      v26[4] = v10;
      if ( (*(_DWORD *)(v10 + 48) & 0x2000) == 0 && v7 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v16 = 1;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v10 + 8) + 288LL))(v10, v7, v11);
      if ( v16 )
        __writecr8(CurrentIrql);
      *(_OWORD *)&v26[3] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v10, 0x746C6644u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      goto LABEL_7;
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v20 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v21 = v26[0];
      v22 = v26[1];
      v23 = 0;
      if ( *(_QWORD **)(v26[0] + 8LL) != v26 || *(_QWORD **)v26[1] != v26 )
        __fastfail(3u);
      *(_QWORD *)v26[1] = v26[0];
      *(_QWORD *)(v21 + 8) = v22;
      PopIrpWorkerCount = v20;
    }
    else
    {
      v23 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  while ( v23 );
  return PsTerminateSystemThread(0);
}
