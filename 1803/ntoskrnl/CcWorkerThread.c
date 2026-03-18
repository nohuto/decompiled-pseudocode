/*
 * XREFs of CcWorkerThread @ 0x140043080
 * Callers:
 *     <none>
 * Callees:
 *     CcLazyWriteScan @ 0x140042058 (CcLazyWriteScan.c)
 *     CcWriteBehind @ 0x140042EF0 (CcWriteBehind.c)
 *     CcFindNextWorkQueueEntry @ 0x140043690 (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     CcReEngageWorkerThreads @ 0x14014CBA0 (CcReEngageWorkerThreads.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14017D810 (CcPerfLogWorkItemEnqueue.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CcLogExtraWBThreadAction @ 0x14021FBAC (CcLogExtraWBThreadAction.c)
 *     CcOkToAddWriteBehindThread @ 0x14021FC44 (CcOkToAddWriteBehindThread.c)
 */

__int64 __fastcall CcWorkerThread(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 NextWorkQueueEntry; // r12
  int v3; // r15d
  __int64 v4; // rsi
  int v5; // ebx
  _QWORD *v6; // r14
  signed __int64 v7; // rbx
  char v8; // bl
  __int64 v9; // rax
  volatile signed __int32 *v10; // r14
  __int64 v11; // r8
  int v12; // ecx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ebx
  struct _KTHREAD *v15; // rax
  int v16; // ecx
  int v17; // ecx
  _QWORD *v18; // rcx
  _QWORD *v20; // rax
  __int64 *v21; // r10
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  __int64 *v24; // rax
  __int64 **v25; // r13
  int v26; // eax
  __int64 *v27; // r10
  __int64 v28; // rax
  char v29; // [rsp+48h] [rbp-E8h]
  char v30; // [rsp+49h] [rbp-E7h]
  int v32; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+78h] [rbp-B8h]
  __int64 v34; // [rsp+80h] [rbp-B0h]
  _QWORD v35[5]; // [rsp+88h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-78h] BYREF
  _QWORD v38[2]; // [rsp+D8h] [rbp-58h] BYREF
  _QWORD v39[2]; // [rsp+E8h] [rbp-48h] BYREF

  v1 = 0LL;
  NextWorkQueueEntry = 0LL;
  v30 = 0;
  v35[2] = a1;
  v32 = 0;
  v33 = 0LL;
  v3 = *(_DWORD *)(a1 + 32);
  if ( (unsigned int)(v3 - 1) > 1 )
    KeBugCheckEx(0x34u, 0x1665uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 56);
  v35[3] = v4;
  v34 = v4;
  while ( 1 )
  {
    v5 = 0;
    v29 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 192), &LockHandle);
    if ( v30 )
    {
      *(_BYTE *)(v4 + 312) = 0;
      v30 = 0;
      CcReEngageWorkerThreads(v4, *(unsigned int *)(v4 + 320), *(unsigned int *)(v4 + 324));
    }
    if ( v33 == 35422 )
    {
      if ( *(_BYTE *)(NextWorkQueueEntry + 120) == 2 )
        *(_QWORD *)(*(_QWORD *)(NextWorkQueueEntry + 16) + 496LL) = NextWorkQueueEntry;
      v24 = (__int64 *)v1[1];
      if ( (_QWORD *)*v24 != v1 )
        __fastfail(3u);
      *(_QWORD *)NextWorkQueueEntry = v1;
      *(_QWORD *)(NextWorkQueueEntry + 8) = v24;
      *v24 = NextWorkQueueEntry;
      v1[1] = NextWorkQueueEntry;
      v33 = 0LL;
    }
    if ( v3 == 2 )
      break;
    while ( 1 )
    {
      if ( (v5 & 1) != 0 || (v5 |= 1u, v1 = (_QWORD *)(v4 + 224), (_QWORD *)*v1 == v1) )
      {
        if ( (v5 & 2) != 0 || (v5 |= 2u, v1 = (_QWORD *)(v4 + 240), (_QWORD *)*v1 == v1) )
        {
LABEL_11:
          if ( (v5 & 4) != 0 )
            goto LABEL_42;
          v5 |= 4u;
          v1 = (_QWORD *)(v4 + 256);
          if ( (_QWORD *)*v1 == v1 )
            goto LABEL_42;
        }
      }
      if ( v3 != 2 || *(_DWORD *)(v4 + 896) >= *(_DWORD *)(v4 + 200) )
      {
        v6 = (_QWORD *)(v4 + 256);
        if ( v1 == (_QWORD *)(v4 + 256) )
          goto LABEL_15;
        if ( !*(_DWORD *)(v4 + 316)
          || (unsigned int)(*(_DWORD *)(v4 + 332) + 1) < *(_DWORD *)(v4 + 200)
          || *(_DWORD *)(v4 + 304) )
        {
          break;
        }
      }
LABEL_59:
      if ( v3 == 2 )
        goto LABEL_11;
    }
    if ( v1 != v6 )
      goto LABEL_16;
LABEL_15:
    if ( (unsigned int)(*(_DWORD *)(v4 + 328) + 1) > *(_DWORD *)(v4 + 896) )
      goto LABEL_59;
LABEL_16:
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(v4, v1);
    v35[1] = NextWorkQueueEntry;
    if ( !NextWorkQueueEntry )
      goto LABEL_59;
    v7 = MEMORY[0xFFFFF78000000014];
    if ( *(_BYTE *)(v4 + 736) )
    {
      if ( MEMORY[0xFFFFF78000000014] >= *(_QWORD *)(v4 + 728) + (unsigned int)CcExtraWBThreadDelay
        && *(_QWORD *)(v4 + 208) == v4 + 208 )
      {
        if ( *(_DWORD *)(v4 + 456) )
        {
          if ( (_QWORD *)*v6 != v6 )
          {
            v25 = (__int64 **)(v4 + 288);
            if ( *v25 != (__int64 *)v25 )
            {
              v26 = CcOkToAddWriteBehindThread(v4);
              *(_QWORD *)(v4 + 728) = v7;
              if ( *(_DWORD *)(v4 + 304) && v26 == 3 )
                *(_BYTE *)(v4 + 737) = 1;
              if ( v26 == 2 )
              {
                v27 = *v25;
                v28 = **v25;
                if ( (__int64 **)(*v25)[1] != v25 || *(__int64 **)(v28 + 8) != v27 )
                  __fastfail(3u);
                *v25 = (__int64 *)v28;
                *(_QWORD *)(v28 + 8) = v25;
                ++*(_DWORD *)(v4 + 304);
                if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
                  __fastfail(0xEu);
                *v27 = 0LL;
                ExQueueWorkItemToPartition((ULONG_PTR)v27);
                v29 = 1;
              }
            }
          }
        }
      }
    }
    if ( v1 == v6 )
      *(_QWORD *)(v4 + 720) = v7;
    if ( *(_DWORD *)(v4 + 896) < *(_DWORD *)(v4 + 200)
      || v7 < *(_QWORD *)(v4 + 720) + (unsigned int)CcExtraWBThreadDelay
      || *(_QWORD *)(v4 + 208) != v4 + 208
      || (_QWORD *)*v6 == v6
      || (v20 = (_QWORD *)(v4 + 288), v21 = *(__int64 **)(v4 + 288), v21 == (__int64 *)(v4 + 288))
      || *(_DWORD *)(v4 + 304) )
    {
      v8 = v29;
    }
    else
    {
      v22 = *v21;
      if ( (_QWORD *)v21[1] != v20 || *(__int64 **)(v22 + 8) != v21 )
        __fastfail(3u);
      *v20 = v22;
      *(_QWORD *)(v22 + 8) = v20;
      ++*(_DWORD *)(v4 + 304);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 904)) <= 1 )
        __fastfail(0xEu);
      *v21 = 0LL;
      ExQueueWorkItemToPartition((ULONG_PTR)v21);
      *(_QWORD *)(v4 + 720) = v7;
      v8 = 1;
    }
    v9 = 332LL;
    if ( v1 == v6 )
      v9 = 328LL;
    v10 = (volatile signed __int32 *)(v9 + v34);
    v35[4] = v9 + v34;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + v34));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (xmmword_14044C2D0 & 0x20000) != 0 )
    {
      if ( v8 )
        CcLogExtraWBThreadAction(v4, 2LL);
      if ( (xmmword_14044C2D0 & 0x20000) != 0 )
      {
        v35[0] = NextWorkQueueEntry;
        v38[0] = v35;
        v38[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v38, 1, -2147352576, 5633, 4200706);
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
        v33 = NextWorkQueueEntry;
        CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), (__int64)&v32);
        if ( v14 >= 0xA )
          break;
        ++v14;
      }
      while ( v33 == 35422 );
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
            v30 = 1;
          }
        }
        else
        {
          CcLazyWriteScan(v4, NextWorkQueueEntry, *(unsigned int *)(NextWorkQueueEntry + 16));
        }
      }
      else
      {
        CcPerformReadAhead(NextWorkQueueEntry, *(_QWORD *)(NextWorkQueueEntry + 16));
      }
    }
    _InterlockedDecrement(v10);
    if ( v33 == 35422 )
    {
      if ( (xmmword_14044C2D0 & 0x20000) != 0 )
      {
        LOBYTE(v11) = 1;
        CcPerfLogWorkItemEnqueue(v1, NextWorkQueueEntry, v11, 0LL);
      }
    }
    else
    {
      if ( (xmmword_14044C2D0 & 0x20000) != 0 )
      {
        v36 = NextWorkQueueEntry;
        v39[0] = &v36;
        v39[1] = 8LL;
        EtwTraceKernelEvent((unsigned int)v39, 1, -2147352576, 5634, 4200706);
      }
      CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
    }
  }
  if ( !*(_BYTE *)(v4 + 737) )
    goto LABEL_59;
  *(_BYTE *)(v4 + 737) = 0;
LABEL_42:
  if ( v3 == 2 )
  {
    v23 = *(_QWORD **)(v4 + 296);
    if ( *v23 != v4 + 288 )
      __fastfail(3u);
    *(_QWORD *)a1 = v4 + 288;
    *(_QWORD *)(a1 + 8) = v23;
    *v23 = a1;
    *(_QWORD *)(v4 + 296) = a1;
    --*(_DWORD *)(v4 + 304);
  }
  else
  {
    v18 = *(_QWORD **)(v4 + 216);
    if ( *v18 != v4 + 208 )
      __fastfail(3u);
    *(_QWORD *)a1 = v4 + 208;
    *(_QWORD *)(a1 + 8) = v18;
    *v18 = a1;
    *(_QWORD *)(v4 + 216) = a1;
    --*(_DWORD *)(v4 + 204);
  }
  if ( *(_BYTE *)(v4 + 736) && !*(_DWORD *)(v4 + 304) && *(_DWORD *)(v4 + 204) <= 1u )
  {
    *(_BYTE *)(v4 + 736) = 0;
    memset(*(void **)(v4 + 680), 0, 8LL * (unsigned int)(*(_DWORD *)(v4 + 308) + 1));
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (xmmword_14044C2D0 & 0x20000) != 0 && v3 == 2 )
    CcLogExtraWBThreadAction(v4, 3LL);
  return CcDereferencePartition(v4);
}
