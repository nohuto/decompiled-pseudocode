/*
 * XREFs of CcWorkerThread @ 0x140022CB0
 * Callers:
 *     <none>
 * Callees:
 *     CcPerformReadAhead @ 0x140020ED4 (CcPerformReadAhead.c)
 *     CcLazyWriteScan @ 0x140021D88 (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x140022B24 (CcWriteBehind.c)
 *     CcFindNextWorkQueueEntry @ 0x14002321C (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1400232C4 (CcFreeWorkQueueEntry.c)
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     CcReEngageWorkerThreads @ 0x140131790 (CcReEngageWorkerThreads.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x1401E0484 (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x1401E0588 (CcOkToAddWriteBehindThread.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1401E2C38 (CcPerfLogWorkItemEnqueue.c)
 */

__int64 __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // r12
  _QWORD *v2; // rdi
  __int64 NextWorkQueueEntry; // r15
  __int64 v4; // rsi
  int v5; // ebx
  _QWORD *v6; // r14
  signed __int64 v7; // rbx
  __int64 v8; // r8
  int v9; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  struct _KTHREAD *v12; // rax
  int v13; // ecx
  int v14; // ecx
  _QWORD *v15; // rcx
  __int64 **v17; // rax
  __int64 *v18; // r10
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 *v21; // rax
  __int64 **v22; // r12
  int v23; // eax
  __int64 *v24; // r10
  __int64 v25; // rax
  char v26; // [rsp+48h] [rbp-E8h]
  char v27; // [rsp+49h] [rbp-E7h]
  int v28; // [rsp+50h] [rbp-E0h]
  int v30; // [rsp+88h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+90h] [rbp-A0h]
  _QWORD v32[4]; // [rsp+98h] [rbp-98h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C0h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+E0h] [rbp-50h] BYREF
  _QWORD v36[2]; // [rsp+F0h] [rbp-40h] BYREF

  v1 = (_QWORD *)a1;
  v2 = 0LL;
  NextWorkQueueEntry = 0LL;
  v27 = 0;
  v32[2] = a1;
  v30 = 0;
  v31 = 0LL;
  v28 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)(v28 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x1665uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 56);
  v32[3] = v4;
LABEL_3:
  v5 = 0;
  v26 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 192), &LockHandle);
  if ( v27 )
  {
    *(_BYTE *)(v4 + 312) = 0;
    v27 = 0;
    CcReEngageWorkerThreads(v4, *(unsigned int *)(v4 + 320), *(unsigned int *)(v4 + 324));
  }
  if ( v31 == 35422 )
  {
    if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
      *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
    v21 = (__int64 *)v2[1];
    if ( (_QWORD *)*v21 != v2 )
      __fastfail(3u);
    *(_QWORD *)NextWorkQueueEntry = v2;
    *(_QWORD *)(NextWorkQueueEntry + 8) = v21;
    *v21 = NextWorkQueueEntry;
    v2[1] = NextWorkQueueEntry;
    v31 = 0LL;
  }
  if ( v28 != 2 || !*(_BYTE *)(v4 + 737) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( v28 != 2 )
          {
            if ( (v5 & 1) == 0 )
            {
              v5 |= 1u;
              v2 = (_QWORD *)(v4 + 224);
              if ( (_QWORD *)*v2 != v2 )
                continue;
            }
            if ( (v5 & 2) == 0 )
            {
              v5 |= 2u;
              v2 = (_QWORD *)(v4 + 240);
              if ( (_QWORD *)*v2 != v2 )
                continue;
            }
          }
          if ( (v5 & 4) != 0 )
            goto LABEL_44;
          v5 |= 4u;
          v2 = (_QWORD *)(v4 + 256);
          if ( (_QWORD *)*v2 == v2 )
            goto LABEL_44;
        }
        while ( v28 == 2 && *(_DWORD *)(v4 + 896) < *(_DWORD *)(v4 + 200) );
        v6 = (_QWORD *)(v4 + 256);
        if ( v2 != (_QWORD *)(v4 + 256) )
          break;
LABEL_16:
        if ( (unsigned int)(*(_DWORD *)(v4 + 328) + 1) <= *(_DWORD *)(v4 + 896) )
        {
LABEL_17:
          NextWorkQueueEntry = CcFindNextWorkQueueEntry(v4, v2);
          v32[1] = NextWorkQueueEntry;
          if ( NextWorkQueueEntry )
          {
            v7 = MEMORY[0xFFFFF78000000014];
            if ( *(_BYTE *)(v4 + 736)
              && MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v4 + 728) + (unsigned int)CcExtraWBThreadDelay
              && *(_QWORD *)(v4 + 208) == v4 + 208
              && *(_DWORD *)(v4 + 456)
              && (_QWORD *)*v6 != v6 )
            {
              v22 = (__int64 **)(v4 + 288);
              if ( *v22 != (__int64 *)v22 )
              {
                v23 = CcOkToAddWriteBehindThread(v4);
                *(_QWORD *)(v4 + 728) = v7;
                if ( *(_DWORD *)(v4 + 304) && v23 == 3 )
                  *(_BYTE *)(v4 + 737) = 1;
                if ( v23 == 2 )
                {
                  v24 = *v22;
                  v25 = **v22;
                  if ( (__int64 **)(*v22)[1] != v22 || *(__int64 **)(v25 + 8) != v24 )
                    __fastfail(3u);
                  *v22 = (__int64 *)v25;
                  *(_QWORD *)(v25 + 8) = v22;
                  ++*(_DWORD *)(v4 + 304);
                  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
                    __fastfail(0xEu);
                  *v24 = 0LL;
                  ExQueueWorkItemToPartition((ULONG_PTR)v24);
                  v26 = 1;
                }
              }
              v1 = (_QWORD *)a1;
            }
            if ( v2 == v6 )
              *(_QWORD *)(v4 + 720) = v7;
            if ( *(_DWORD *)(v4 + 896) >= *(_DWORD *)(v4 + 200)
              && v7 >= *(_QWORD *)(v4 + 720) + (unsigned int)CcExtraWBThreadDelay
              && *(_QWORD *)(v4 + 208) == v4 + 208
              && (_QWORD *)*v6 != v6 )
            {
              v17 = (__int64 **)(v4 + 288);
              if ( *v17 != (__int64 *)v17 && !*(_DWORD *)(v4 + 304) )
              {
                v18 = *v17;
                v19 = **v17;
                if ( (__int64 **)(*v17)[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
                  __fastfail(3u);
                *v17 = (__int64 *)v19;
                *(_QWORD *)(v19 + 8) = v17;
                ++*(_DWORD *)(v4 + 304);
                if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
                  __fastfail(0xEu);
                *v18 = 0LL;
                ExQueueWorkItemToPartition((ULONG_PTR)v18);
                *(_QWORD *)(v4 + 720) = v7;
                v26 = 1;
              }
            }
            if ( v2 == v6 )
              _InterlockedIncrement((volatile signed __int32 *)(v4 + 328));
            else
              _InterlockedIncrement((volatile signed __int32 *)(v4 + 332));
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            if ( (xmmword_140401150 & 0x20000) != 0 )
            {
              if ( v26 )
                CcLogExtraWBThreadAction(v4, 2LL);
              if ( (xmmword_140401150 & 0x20000) != 0 )
              {
                v32[0] = NextWorkQueueEntry;
                v35[0] = v32;
                v35[1] = 8LL;
                EtwTraceKernelEvent((unsigned int)v35, 1, -2147352576, 5633, 4200706);
              }
            }
            v9 = *(unsigned __int8 *)(NextWorkQueueEntry + 120);
            if ( v9 == 2 )
            {
              CurrentThread = KeGetCurrentThread();
              *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
              v11 = 0;
              do
              {
                v31 = NextWorkQueueEntry;
                CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), (__int64)&v30);
                if ( v11 >= 0xA )
                  break;
                ++v11;
              }
              while ( v31 == 35422 );
              v12 = KeGetCurrentThread();
              *((_DWORD *)&v12[1].SwapListEntry + 3) &= ~2u;
            }
            else
            {
              v13 = v9 - 1;
              if ( v13 )
              {
                v14 = v13 - 2;
                if ( v14 )
                {
                  if ( v14 == 1 )
                  {
                    KeSetEvent(*(PRKEVENT *)(NextWorkQueueEntry + 16), 0, 0);
                    v27 = 1;
                  }
                }
                else
                {
                  CcLazyWriteScan(v4, NextWorkQueueEntry, *(_DWORD *)(NextWorkQueueEntry + 16));
                }
              }
              else
              {
                CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
              }
            }
            if ( v2 == (_QWORD *)(v4 + 256) )
              _InterlockedDecrement((volatile signed __int32 *)(v4 + 328));
            else
              _InterlockedDecrement((volatile signed __int32 *)(v4 + 332));
            if ( v31 == 35422 )
            {
              if ( (xmmword_140401150 & 0x20000) != 0 )
              {
                LOBYTE(v8) = 1;
                CcPerfLogWorkItemEnqueue(v2, NextWorkQueueEntry, v8, 0LL);
              }
            }
            else
            {
              if ( (xmmword_140401150 & 0x20000) != 0 )
              {
                v33 = NextWorkQueueEntry;
                v36[0] = &v33;
                v36[1] = 8LL;
                EtwTraceKernelEvent((unsigned int)v36, 1, -2147352576, 5634, 4200706);
              }
              CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
            }
            goto LABEL_3;
          }
        }
      }
      if ( !*(_DWORD *)(v4 + 316)
        || (unsigned int)(*(_DWORD *)(v4 + 332) + 1) < *(_DWORD *)(v4 + 200)
        || *(_DWORD *)(v4 + 304) )
      {
        if ( v2 != v6 )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
  }
  *(_BYTE *)(v4 + 737) = 0;
LABEL_44:
  if ( v28 == 2 )
  {
    v20 = *(_QWORD **)(v4 + 296);
    if ( *v20 != v4 + 288 )
      __fastfail(3u);
    *v1 = v4 + 288;
    v1[1] = v20;
    *v20 = v1;
    *(_QWORD *)(v4 + 296) = v1;
    --*(_DWORD *)(v4 + 304);
  }
  else
  {
    v15 = *(_QWORD **)(v4 + 216);
    if ( *v15 != v4 + 208 )
      __fastfail(3u);
    *v1 = v4 + 208;
    v1[1] = v15;
    *v15 = v1;
    *(_QWORD *)(v4 + 216) = v1;
    --*(_DWORD *)(v4 + 204);
  }
  if ( *(_BYTE *)(v4 + 736) && !*(_DWORD *)(v4 + 304) && *(_DWORD *)(v4 + 204) <= 1u )
  {
    *(_BYTE *)(v4 + 736) = 0;
    memset(*(void **)(v4 + 680), 0, 8LL * (unsigned int)(*(_DWORD *)(v4 + 308) + 1));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (xmmword_140401150 & 0x20000) != 0 && v28 == 2 )
    CcLogExtraWBThreadAction(v4, 3LL);
  return CcDereferencePartition(v4);
}
