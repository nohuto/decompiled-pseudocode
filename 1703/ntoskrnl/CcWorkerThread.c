/*
 * XREFs of CcWorkerThread @ 0x1400AB860
 * Callers:
 *     <none>
 * Callees:
 *     CcPerformReadAhead @ 0x1400215AC (CcPerformReadAhead.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140023B2C (CcPerfLogWorkItemEnqueue.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFindNextWorkQueueEntry @ 0x1400AE398 (CcFindNextWorkQueueEntry.c)
 *     CcLazyWriteScan @ 0x1400AEDEC (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x1400AF884 (CcWriteBehind.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     CcReEngageWorkerThreads @ 0x140136378 (CcReEngageWorkerThreads.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x1401DD63C (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x1401DD6CC (CcOkToAddWriteBehindThread.c)
 */

__int64 __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 NextWorkQueueEntry; // r15
  int v3; // edx
  bool v4; // r12
  __int64 v5; // rsi
  int v6; // ebx
  _QWORD *v7; // r14
  signed __int64 v8; // rbx
  struct _WORK_QUEUE_ITEM **v9; // rax
  char v10; // bl
  int v11; // eax
  int v12; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ebx
  struct _KTHREAD *v15; // rax
  int v16; // ecx
  int v17; // ecx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  _QWORD *v20; // rcx
  __int64 result; // rax
  _QWORD *v22; // rcx
  struct _WORK_QUEUE_ITEM *v23; // rcx
  struct _LIST_ENTRY *v24; // rdx
  __int64 *v25; // rax
  struct _WORK_QUEUE_ITEM **v26; // r13
  int v27; // eax
  struct _WORK_QUEUE_ITEM *v28; // rcx
  struct _LIST_ENTRY *Flink; // rax
  char v30; // [rsp+48h] [rbp-C8h]
  char v31; // [rsp+49h] [rbp-C7h]
  int v33; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-A0h]
  _QWORD v35[4]; // [rsp+78h] [rbp-98h] BYREF
  __int64 v36; // [rsp+98h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v38[2]; // [rsp+C0h] [rbp-50h] BYREF
  _QWORD v39[2]; // [rsp+D0h] [rbp-40h] BYREF

  v1 = 0LL;
  NextWorkQueueEntry = 0LL;
  v31 = 0;
  v35[2] = a1;
  v33 = 0;
  v34 = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)(v3 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x16F5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = v3 == 2;
  v5 = *(_QWORD *)(a1 + 56);
  v35[3] = v5;
LABEL_3:
  v6 = 0;
  v30 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &LockHandle);
  if ( v31 )
  {
    *(_BYTE *)(v5 + 384) = 0;
    v31 = 0;
    CcReEngageWorkerThreads(v5, *(unsigned int *)(v5 + 392), *(unsigned int *)(v5 + 396));
  }
  if ( v34 == 35422 )
  {
    if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
      *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
    v25 = (__int64 *)v1[1];
    if ( (_QWORD *)*v25 != v1 )
      __fastfail(3u);
    *(_QWORD *)NextWorkQueueEntry = v1;
    *(_QWORD *)(NextWorkQueueEntry + 8) = v25;
    *v25 = NextWorkQueueEntry;
    v1[1] = NextWorkQueueEntry;
    v34 = 0LL;
  }
  if ( !v4 || !*(_BYTE *)(v5 + 809) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !v4 )
          {
            if ( (v6 & 1) == 0 )
            {
              v6 |= 1u;
              v1 = (_QWORD *)(v5 + 296);
              if ( (_QWORD *)*v1 != v1 )
                continue;
            }
            if ( (v6 & 2) == 0 )
            {
              v6 |= 2u;
              v1 = (_QWORD *)(v5 + 312);
              if ( (_QWORD *)*v1 != v1 )
                continue;
            }
          }
          if ( (v6 & 4) != 0 )
            goto LABEL_51;
          v6 |= 4u;
          v1 = (_QWORD *)(v5 + 328);
          if ( (_QWORD *)*v1 == v1 )
            goto LABEL_51;
        }
        while ( v4 && (unsigned int)CcMaxNumberOfWriteBehindThreads < *(_DWORD *)(v5 + 272) );
        v7 = (_QWORD *)(v5 + 328);
        if ( v1 != (_QWORD *)(v5 + 328) )
          break;
LABEL_16:
        if ( *(_DWORD *)(v5 + 400) + 1 <= (unsigned int)CcMaxNumberOfWriteBehindThreads )
        {
LABEL_17:
          NextWorkQueueEntry = CcFindNextWorkQueueEntry(v5);
          v35[1] = NextWorkQueueEntry;
          if ( NextWorkQueueEntry )
          {
            v8 = MEMORY[0xFFFFF78000000014];
            if ( *(_BYTE *)(v5 + 808) )
            {
              if ( MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v5 + 800) + (unsigned int)CcExtraWBThreadDelay
                && *(_QWORD *)(v5 + 280) == v5 + 280 )
              {
                if ( *(_DWORD *)(v5 + 528) )
                {
                  if ( (_QWORD *)*v7 != v7 )
                  {
                    v26 = (struct _WORK_QUEUE_ITEM **)(v5 + 360);
                    if ( *v26 != (struct _WORK_QUEUE_ITEM *)v26 )
                    {
                      v27 = CcOkToAddWriteBehindThread(v5);
                      *(_QWORD *)(v5 + 800) = v8;
                      if ( *(_DWORD *)(v5 + 376) && v27 == 3 )
                        *(_BYTE *)(v5 + 809) = 1;
                      if ( v27 == 2 )
                      {
                        v28 = *v26;
                        Flink = (*v26)->List.Flink;
                        if ( (struct _WORK_QUEUE_ITEM **)(*v26)->List.Blink != v26
                          || (struct _WORK_QUEUE_ITEM *)Flink->Blink != v28 )
                        {
                          __fastfail(3u);
                        }
                        *v26 = (struct _WORK_QUEUE_ITEM *)Flink;
                        Flink->Blink = (struct _LIST_ENTRY *)v26;
                        ++*(_DWORD *)(v5 + 376);
                        v28->List.Flink = 0LL;
                        ExQueueWorkItem(v28, CriticalWorkQueue);
                        v30 = 1;
                      }
                    }
                  }
                }
              }
            }
            if ( v1 == v7 )
              *(_QWORD *)(v5 + 792) = v8;
            if ( (unsigned int)CcMaxNumberOfWriteBehindThreads < *(_DWORD *)(v5 + 272)
              || v8 < *(_QWORD *)(v5 + 792) + (unsigned int)CcExtraWBThreadDelay
              || *(_QWORD *)(v5 + 280) != v5 + 280
              || (_QWORD *)*v7 == v7
              || (v9 = (struct _WORK_QUEUE_ITEM **)(v5 + 360), *v9 == (struct _WORK_QUEUE_ITEM *)v9)
              || *(_DWORD *)(v5 + 376) )
            {
              v10 = v30;
            }
            else
            {
              v23 = *v9;
              v24 = (*v9)->List.Flink;
              if ( (struct _WORK_QUEUE_ITEM **)(*v9)->List.Blink != v9 || (struct _WORK_QUEUE_ITEM *)v24->Blink != v23 )
                __fastfail(3u);
              *v9 = (struct _WORK_QUEUE_ITEM *)v24;
              v24->Blink = (struct _LIST_ENTRY *)v9;
              ++*(_DWORD *)(v5 + 376);
              v23->List.Flink = 0LL;
              ExQueueWorkItem(v23, CriticalWorkQueue);
              *(_QWORD *)(v5 + 792) = v8;
              v10 = 1;
            }
            if ( v1 == v7 )
              _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
            else
              _InterlockedIncrement((volatile signed __int32 *)(v5 + 404));
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            v11 = xmmword_1403E4010;
            if ( (xmmword_1403E4010 & 0x20000) != 0 )
            {
              if ( v10 )
              {
                CcLogExtraWBThreadAction(v5, 2LL);
                v11 = xmmword_1403E4010;
              }
              if ( (v11 & 0x20000) != 0 )
              {
                v35[0] = NextWorkQueueEntry;
                v38[0] = v35;
                v38[1] = 8LL;
                EtwTraceKernelEvent((int)v38, 1, 0x80020000, 5633, 4200706);
              }
            }
            v12 = *(unsigned __int8 *)(NextWorkQueueEntry + 120);
            if ( v12 == 2 )
            {
              CurrentThread = KeGetCurrentThread();
              *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
              v14 = 0;
              do
              {
                v34 = NextWorkQueueEntry;
                CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), &v33);
                if ( v14 >= 0xA )
                  break;
                ++v14;
              }
              while ( v34 == 35422 );
              v15 = KeGetCurrentThread();
              *((_DWORD *)&v15[1].SwapListEntry + 3) &= ~2u;
            }
            else
            {
              v16 = v12 - 1;
              if ( v16 )
              {
                v17 = v16 - 2;
                if ( v17 )
                {
                  if ( v17 == 1 )
                  {
                    KeSetEvent(*(PRKEVENT *)(NextWorkQueueEntry + 16), 0, 0);
                    v31 = 1;
                  }
                }
                else
                {
                  CcLazyWriteScan(v5, NextWorkQueueEntry, *(unsigned int *)(NextWorkQueueEntry + 16));
                }
              }
              else
              {
                CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
              }
            }
            if ( v1 == (_QWORD *)(v5 + 328) )
              _InterlockedDecrement((volatile signed __int32 *)(v5 + 400));
            else
              _InterlockedDecrement((volatile signed __int32 *)(v5 + 404));
            if ( v34 == 35422 )
            {
              if ( (xmmword_1403E4010 & 0x20000) != 0 )
                CcPerfLogWorkItemEnqueue((__int64)v1, NextWorkQueueEntry, 1, 0);
            }
            else
            {
              if ( (xmmword_1403E4010 & 0x20000) != 0 )
              {
                v36 = NextWorkQueueEntry;
                v39[0] = &v36;
                v39[1] = 8LL;
                EtwTraceKernelEvent((int)v39, 1, 0x80020000, 5634, 4200706);
              }
              CurrentPrcb = KeGetCurrentPrcb();
              P = CurrentPrcb->PPLookasideList[6].P;
              ++P->TotalFrees;
              if ( LOWORD(P->ListHead.Alignment) < P->Depth
                || (++P->FreeMisses,
                    P = CurrentPrcb->PPLookasideList[6].L,
                    ++P->TotalFrees,
                    LOWORD(P->ListHead.Alignment) < P->Depth) )
              {
                RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)NextWorkQueueEntry);
              }
              else
              {
                ++P->FreeMisses;
                ((void (__fastcall *)(__int64))P->FreeEx)(NextWorkQueueEntry);
              }
            }
            goto LABEL_3;
          }
        }
      }
      if ( !*(_DWORD *)(v5 + 388)
        || (unsigned int)(*(_DWORD *)(v5 + 404) + 1) < *(_DWORD *)(v5 + 272)
        || *(_DWORD *)(v5 + 376) )
      {
        if ( v1 != v7 )
          goto LABEL_17;
        goto LABEL_16;
      }
    }
  }
  *(_BYTE *)(v5 + 809) = 0;
LABEL_51:
  if ( v4 )
  {
    v22 = *(_QWORD **)(v5 + 368);
    if ( *v22 != v5 + 360 )
      __fastfail(3u);
    *(_QWORD *)a1 = v5 + 360;
    *(_QWORD *)(a1 + 8) = v22;
    *v22 = a1;
    *(_QWORD *)(v5 + 368) = a1;
    --*(_DWORD *)(v5 + 376);
  }
  else
  {
    v20 = *(_QWORD **)(v5 + 288);
    if ( *v20 != v5 + 280 )
      __fastfail(3u);
    *(_QWORD *)a1 = v5 + 280;
    *(_QWORD *)(a1 + 8) = v20;
    *v20 = a1;
    *(_QWORD *)(v5 + 288) = a1;
    --*(_DWORD *)(v5 + 276);
  }
  if ( *(_BYTE *)(v5 + 808) && !*(_DWORD *)(v5 + 376) && *(_DWORD *)(v5 + 276) <= 1u )
  {
    *(_BYTE *)(v5 + 808) = 0;
    memset(*(void **)(v5 + 752), 0, 8LL * (unsigned int)(*(_DWORD *)(v5 + 380) + 1));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( (xmmword_1403E4010 & 0x20000) != 0 && v4 )
    return CcLogExtraWBThreadAction(v5, 3LL);
  return result;
}
