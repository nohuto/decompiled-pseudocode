/*
 * XREFs of PopIrpWorker @ 0x140166750
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PoDeviceAcquireIrp @ 0x140166D58 (PoDeviceAcquireIrp.c)
 *     PopPepDeviceDState @ 0x140166F3C (PopPepDeviceDState.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PsTerminateSystemThread @ 0x140582610 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(__int64 *Entry)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v3; // r9
  LARGE_INTEGER *Timeout; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // ecx
  ULONG_PTR v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rdx
  char v15; // si
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // rcx
  int v19; // r8d
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  unsigned int v22; // r11d
  char v23; // al
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rax
  char v27; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v30[7]; // [rsp+48h] [rbp-38h] BYREF
  LARGE_INTEGER v31; // [rsp+B0h] [rbp+30h] BYREF

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
  if ( *(__int64 **)qword_1403A81F8 != &PopIrpThreadList )
    __fastfail(3u);
  v30[0] = &PopIrpThreadList;
  v30[1] = qword_1403A81F8;
  *(_QWORD *)qword_1403A81F8 = v30;
  qword_1403A81F8 = (__int64)v30;
LABEL_7:
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v5 = PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList
        || (v6 = *(_QWORD *)PopIrpWorkerList, *(_QWORD *)(*(_QWORD *)PopIrpWorkerList + 8LL) != PopIrpWorkerList) )
      {
        __fastfail(3u);
      }
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v6 + 8) = &PopIrpWorkerList;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v7 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v7 == PopIrpWorkerCount
        && !PopIrpWorkerPendingCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerRequested )
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
      v14 = *(_QWORD *)(v8 + 72LL * (*(char *)(v8 + 66) - 1) + 272);
      if ( *(_BYTE *)(v14 + 184) == 2 && *(_DWORD *)(v14 + 188) == 1 && *(_QWORD *)(v14 + 32) == v11 )
      {
        v16 = *(_QWORD *)(v14 + 24);
        v17 = *(_QWORD *)(v14 + 200);
        v18 = v16 ? *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL) : 0LL;
        v19 = *(_DWORD *)(v18 + 140);
        *(_DWORD *)(v18 + 140) = *(_DWORD *)(v14 + 192);
        if ( v17 )
        {
          _m_prefetchw((const void *)(v17 + 32));
          v20 = *(_DWORD *)(v17 + 32);
          do
          {
            v21 = v20;
            v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 32), v20, v20);
          }
          while ( v21 != v20 );
          v22 = *(_DWORD *)(v14 + 192);
          v23 = v20 & 1;
          *(_BYTE *)(v14 + 208) = v23;
          *(_BYTE *)(v14 + 209) = v22 != v19;
          if ( v22 != v19 )
          {
            if ( v22 == 1 )
            {
              _InterlockedOr((volatile signed __int32 *)(v17 + 32), 2u);
              v23 = *(_BYTE *)(v14 + 208);
              v22 = *(_DWORD *)(v14 + 192);
            }
            LOBYTE(v13) = v23;
            PopPepDeviceDState(*(_QWORD *)(v17 + 56), v22, 0LL, v13);
          }
        }
      }
      v15 = 0;
      v30[3] = v8;
      v30[4] = v11;
      if ( (*(_DWORD *)(v11 + 48) & 0x2000) == 0 && v8 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v15 = 1;
      }
      (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR))(*(_QWORD *)(v11 + 8) + 288LL))(v11, v8);
      if ( v15 )
        __writecr8(CurrentIrql);
      if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
        KeBugCheckEx(0xA0u, 0x901uLL, v11, v8, KeGetCurrentThread()->CombinedApcDisable);
      *(_OWORD *)&v30[3] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v11, 0x72496F50u);
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
