/*
 * XREFs of PopIrpWorker @ 0x140145130
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     PoDeviceAcquireIrp @ 0x140145734 (PoDeviceAcquireIrp.c)
 *     PopPepDeviceDState @ 0x140145904 (PopPepDeviceDState.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsTerminateSystemThread @ 0x14054E950 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(__int64 *Entry)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v3; // r9
  LARGE_INTEGER *Timeout; // r15
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // rdx
  int v18; // ecx
  char v19; // si
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  int v22; // r8d
  bool v23; // al
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v30[7]; // [rsp+48h] [rbp-38h] BYREF
  LARGE_INTEGER v31; // [rsp+A0h] [rbp+20h] BYREF

  CurrentIrql = 0;
  memset(v30, 0, 0x30uLL);
  v30[2] = KeGetCurrentThread();
  if ( Entry )
  {
    if ( *Entry )
      KeReleaseSemaphoreEx(*Entry, 0, 1, v3, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v31.QuadPart = -100000000LL;
    Timeout = &v31;
    LOBYTE(v30[5]) = 0;
  }
  else
  {
    Timeout = 0LL;
    LOBYTE(v30[5]) = 1;
  }
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_14034A2D8 != &PopIrpThreadList )
    __fastfail(3u);
  v30[0] = &PopIrpThreadList;
  v30[1] = qword_14034A2D8;
  *(_QWORD *)qword_14034A2D8 = v30;
  qword_14034A2D8 = (__int64)v30;
LABEL_7:
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v5 = PopIrpWorkerList;
      v6 = *(_QWORD *)PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList || *(_QWORD *)(v6 + 8) != PopIrpWorkerList )
        __fastfail(3u);
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v6 + 8) = &PopIrpWorkerList;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v7 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v7 == PopIrpWorkerCount
        && !PopIrpWorkerPendingCount
        && !PopIrpWorkerRequested
        && (unsigned int)PopIrpWorkerCount < 0xF )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
      v8 = v5 - 168;
      v9 = *(_QWORD *)(v5 - 168 + 184);
      v10 = v5 - 168;
      v11 = *(_QWORD *)(v9 + 40);
      LOBYTE(v12) = *(_BYTE *)(v9 + 1);
      PoDeviceAcquireIrp(v10, v12, v11);
      v13 = 2LL;
      v14 = *(_QWORD *)(v8 + 72LL * (*(char *)(v8 + 66) - 1) + 272);
      if ( *(_BYTE *)(v14 + 184) == 2 && *(_DWORD *)(v14 + 188) == 1 && *(_QWORD *)(v14 + 32) == v11 )
      {
        v15 = *(_QWORD *)(v14 + 24);
        v16 = *(_QWORD *)(v14 + 200);
        v17 = v15 ? *(_QWORD *)(*(_QWORD *)(v15 + 312) + 40LL) : 0LL;
        v18 = *(_DWORD *)(v17 + 140);
        *(_DWORD *)(v17 + 140) = *(_DWORD *)(v14 + 192);
        if ( v16 )
        {
          _m_prefetchw((const void *)(v16 + 32));
          v20 = *(_DWORD *)(v16 + 32);
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 32), v20, v20);
          }
          while ( v21 != v20 );
          v22 = *(_DWORD *)(v14 + 192);
          *(_BYTE *)(v14 + 208) = v20 & 1;
          v23 = v22 != v18 && (v22 == 1 || (v20 & 1) == 0);
          *(_BYTE *)(v14 + 209) = v23;
          if ( v23 )
          {
            if ( v22 == 1 )
              _InterlockedOr((volatile signed __int32 *)(v16 + 32), 2u);
            LOBYTE(v13) = *(_BYTE *)(v14 + 208);
            PopPepDeviceDState(*(_QWORD *)(v16 + 56), *(unsigned int *)(v14 + 192), 0LL, v13);
          }
        }
      }
      v19 = 0;
      v30[3] = v8;
      v30[4] = v11;
      if ( (*(_DWORD *)(v11 + 48) & 0x2000) == 0 && v8 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v19 = 1;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v11 + 8) + 288LL))(v11, v8);
      if ( v19 )
        __writecr8(CurrentIrql);
      *(_OWORD *)&v30[3] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v11, 0x746C6644u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      goto LABEL_7;
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v24 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v25 = v30[0];
      v26 = v30[1];
      v27 = 0;
      if ( *(_QWORD **)(v30[0] + 8LL) != v30 || *(_QWORD **)v30[1] != v30 )
        __fastfail(3u);
      *(_QWORD *)v30[1] = v30[0];
      *(_QWORD *)(v25 + 8) = v26;
      PopIrpWorkerCount = v24;
    }
    else
    {
      v27 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  while ( v27 );
  return PsTerminateSystemThread(0);
}
