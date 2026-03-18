/*
 * XREFs of MiNoPagesLastChance @ 0x14022B0B8
 * Callers:
 *     MiWaitForFreePage @ 0x14023059C (MiWaitForFreePage.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockShared @ 0x1400A6680 (ExReleaseSpinLockShared.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  int v2; // r8d
  const void *v3; // r12
  int v4; // r15d
  unsigned __int64 v5; // r13
  unsigned int v6; // r8d
  unsigned int v8; // eax
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  int v14; // r14d
  ULONG v15; // ebp
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  volatile LONG *v19; // rdi
  KIRQL v20; // al
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 *v24; // rbx
  unsigned __int64 *v25; // r14
  unsigned __int8 CurrentIrql; // si
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 PrototypePteDirect; // rax
  __int64 v32; // r15
  __int64 v33; // rdx
  struct _WORK_QUEUE_ITEM *v34; // rbx
  int v35; // [rsp+40h] [rbp-88h]
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-84h]
  ULONG_PTR BugCheckParameter3_4; // [rsp+48h] [rbp-80h]
  unsigned __int64 v38; // [rsp+50h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-68h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp-50h]
  __int64 v42; // [rsp+80h] [rbp-48h]
  int v44; // [rsp+E8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 664);
  v3 = *(const void **)(a1 + 6448);
  v4 = 0;
  if ( v2 < 0 )
    v4 = *(_DWORD *)(a1 + 664);
  v5 = a2;
  v6 = (unsigned int)v2 >> 31;
  BugCheckParameter2 = *(_QWORD *)(a1 + 6448);
  v35 = v4;
  if ( *(int *)(a1 + 660) < 0 )
  {
    v4 = *(_DWORD *)(a1 + 660);
    v35 = v4;
    v6 |= 2u;
  }
  v8 = *(_DWORD *)(a1 + 5784);
  v9 = 0LL;
  v10 = 0LL;
  if ( !v8 )
    goto LABEL_11;
  v11 = a1 + 5792;
  v12 = v8;
  do
  {
    v13 = *(_QWORD **)v11;
    if ( (*(_WORD *)(*(_QWORD *)v11 + 204LL) & 0x50) == 0 )
    {
      v9 += v13[1] - *v13;
      v10 += v13[3];
    }
    v11 += 8LL;
    --v12;
  }
  while ( v12 );
  if ( v10 < 0x400 )
LABEL_11:
    v6 |= 4u;
  v14 = v6 | 8;
  if ( v9 >= 0x400 )
    v14 = v6;
  BugCheckParameter3 = v14;
  if ( dword_140388B0C )
  {
    v15 = 243;
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 6336) >> 2;
    if ( *(_QWORD *)(a1 + 6400) < v16 )
    {
      v15 = *(_QWORD *)(a1 + 6448) < v16 ? 235 : 77;
    }
    else
    {
      v15 = 253;
      BugCheckParameter2 = *(_QWORD *)(a1 + 6400);
      v3 = (const void *)BugCheckParameter2;
    }
  }
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 104LL);
  if ( !*(_QWORD *)(v17 + 944)
    || (v18 = *(_QWORD *)(v17 + 944),
        v19 = (volatile LONG *)(v18 + 1440),
        v20 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v18 + 1440)),
        v21 = *(_QWORD *)(v18 + 1488),
        ExReleaseSpinLockShared(v19, v20),
        (unsigned __int64)(KiQueryUnbiasedInterruptTime() - v21) >= -MiNoPagesTimeout.QuadPart) )
  {
    if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
    {
      v44 = 0;
    }
    else
    {
      DbgPrintEx(
        0x66u,
        0,
        "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
        v15,
        *(const void **)(a1 + 6336),
        v3,
        v14,
        v4);
      if ( (MiFlags & 8) != 0 )
        __debugbreak();
      v44 = 1;
    }
    if ( !(unsigned int)MiSufficientAvailablePages(a1, v5)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4732), 1, 0) )
    {
      v22 = 0LL;
      v38 = 0LL;
      v23 = 16LL;
      v24 = (__int64 *)(a1 + 3344);
      v25 = (unsigned __int64 *)(a1 + 3360);
      BugCheckParameter3_4 = 16LL;
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = v25;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v25);
        v29 = *v24;
        if ( *v24 != 0xFFFFFFFFFLL )
        {
          do
          {
            v42 = 48 * v29;
            v30 = 48 * v29 - 0x58000000000LL;
            v29 = *(_QWORD *)v30 & 0xFFFFFFFFFLL;
            PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v30 + 16), v27, v28);
            v32 = *(_QWORD *)PrototypePteDirect;
            if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x28) == 0
              && (!v22 || v22 == v32)
              && !_interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              SpinLock = (PEX_SPIN_LOCK)(v32 + 72);
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v32 + 72));
              if ( (*(_DWORD *)(v32 + 56) & 8) != 0 )
              {
                ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
                _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              else
              {
                if ( !v22 )
                {
                  v38 = ObFastReferenceObjectLocked((_QWORD *)(v32 + 64));
                  v22 = v32;
                }
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v32 + 72));
                MiUnlinkPageFromList(v30, 1LL);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                *(_QWORD *)(v30 + 24) &= 0xC000000000000000uLL;
                v33 = (unsigned __int128)(v42 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
                *(_BYTE *)(v30 + 34) &= ~0x10u;
                MiPfnReferenceCountIsZero(v30, ((unsigned __int64)v33 >> 63) + (v33 >> 3));
                _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(CurrentIrql);
                ++dword_1403882F4;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = v25;
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v25);
                v29 = *v24;
              }
            }
          }
          while ( v29 != 0xFFFFFFFFFLL );
          v23 = BugCheckParameter3_4;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(CurrentIrql);
        v25 += 5;
        v24 += 5;
        BugCheckParameter3_4 = --v23;
      }
      while ( v23 );
      v34 = (struct _WORK_QUEUE_ITEM *)(a1 + 4688);
      if ( v22 )
      {
        *(_QWORD *)(a1 + 4720) = v38;
        *(_DWORD *)(a1 + 4728) = -1073741566;
        v34->List.Flink = 0LL;
        *(_QWORD *)(a1 + 4704) = MiLdwPopupWorker;
        *(_QWORD *)(a1 + 4712) = a1 + 4688;
        ExQueueWorkItem(v34, DelayedWorkQueue);
        ++dword_1403882F0;
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 4732), 0);
        if ( !v44 )
          KeBugCheckEx(v15, *(_QWORD *)(a1 + 6336), BugCheckParameter2, BugCheckParameter3, v35);
      }
    }
  }
}
