/*
 * XREFs of VidSchiAdjustWorkerThreadPriority @ 0x1C0001070
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAdjustWorkerThreadPriority(__int64 a1)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  int v5; // r14d
  int v6; // eax
  __int64 v7; // r15
  int v8; // eax
  KPRIORITY v9; // r15d
  int v10; // r9d
  __int64 v11; // rcx
  KSPIN_LOCK *SpinLock; // [rsp+38h] [rbp-28h]
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int16 v15; // [rsp+58h] [rbp-8h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( (*(_DWORD *)(v2 + 2192) & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread == *(struct _KTHREAD **)(v2 + 144) || CurrentThread == *(struct _KTHREAD **)(v2 + 152) )
    {
      v4 = 1;
      if ( *(_DWORD *)(a1 + 772) )
        return;
      v5 = 16;
    }
    else
    {
      v4 = 0;
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
      {
        v5 = 31;
      }
      else
      {
        v5 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        if ( v5 <= 16 )
          return;
      }
    }
    SpinLock = (KSPIN_LOCK *)(v2 + 2120);
    v15 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 2120), &LockHandle);
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 772);
      LOBYTE(v15) = 1;
      if ( v4 )
      {
        if ( v6 )
          goto LABEL_12;
      }
      else if ( !v6 )
      {
        goto LABEL_12;
      }
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
      v8 = *(_DWORD *)(a1 + 392);
      if ( v8 != v5 )
      {
        v10 = 0;
        if ( v8 > 16 )
        {
          v11 = v8 - 17;
          if ( (*(_DWORD *)(v7 + 4 * v11 + 2132))-- == 1 )
          {
            v10 = 1;
            *(_DWORD *)(v7 + 2128) &= ~(1 << *(_DWORD *)(a1 + 392));
          }
        }
        if ( v5 > 16 && ++*(_DWORD *)(v7 + 4LL * v5 + 2064) == 1 )
        {
          v10 = 1;
          *(_DWORD *)(v7 + 2128) |= 1 << v5;
        }
        *(_DWORD *)(a1 + 392) = v5;
        if ( v10 )
        {
          if ( *(_DWORD *)(v7 + 2128) )
            *(_DWORD *)(v7 + 196) = RtlFindMostSignificantBit(*(unsigned int *)(v7 + 2128));
          else
            *(_DWORD *)(v7 + 196) = 16;
        }
      }
      v9 = *(_DWORD *)(v7 + 196);
      if ( v9 == KeQueryPriorityThread(*(PKTHREAD *)(v2 + 144)) )
        break;
      if ( (_BYTE)v15 )
      {
        if ( HIBYTE(v15) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        LOBYTE(v15) = 0;
      }
      KeSetPriorityThread(*(PKTHREAD *)(v2 + 144), v9);
      if ( HIBYTE(v15) )
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &LockHandle);
      else
        KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    }
    if ( !(_BYTE)v15 )
      return;
LABEL_12:
    if ( HIBYTE(v15) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
