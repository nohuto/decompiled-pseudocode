/*
 * XREFs of MiNoPagesLastChance @ 0x140265B58
 * Callers:
 *     MiWaitForFreePage @ 0x14026B8B0 (MiWaitForFreePage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockShared @ 0x1400A5E30 (ExReleaseSpinLockShared.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  const void *v4; // r15
  int v5; // edi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r10
  unsigned int v10; // eax
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // r8
  int v15; // r14d
  ULONG v16; // ebp
  const void *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  volatile LONG *v21; // rdi
  KIRQL v22; // al
  __int64 v23; // rbx
  __int64 *v24; // rbx
  __int64 v25; // rdi
  unsigned __int64 *v26; // r14
  __int64 v27; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r12
  ULONG_PTR v33; // r15
  __int64 PrototypePteDirect; // rax
  __int64 v35; // r13
  char v36; // cl
  struct _WORK_QUEUE_ITEM *v37; // rbx
  int v38; // [rsp+40h] [rbp-98h]
  unsigned int BugCheckParameter3; // [rsp+44h] [rbp-94h]
  ULONG_PTR BugCheckParameter3_4; // [rsp+48h] [rbp-90h]
  unsigned __int64 v41; // [rsp+50h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-78h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+78h] [rbp-60h]
  __int64 v45; // [rsp+80h] [rbp-58h]
  __int64 v46; // [rsp+88h] [rbp-50h]
  __int64 v47; // [rsp+90h] [rbp-48h]
  int v49; // [rsp+F8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 664);
  v3 = *(_DWORD *)(a1 + 660);
  v4 = *(const void **)(a1 + 7536);
  v5 = v3;
  v7 = a2;
  BugCheckParameter2 = (ULONG_PTR)v4;
  if ( v2 >= 0 )
    v2 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( v3 >= 0 )
    v5 = v2;
  v10 = *(_DWORD *)(a1 + 6872);
  v11 = (*(_DWORD *)(a1 + 664) >> 31) | 2;
  v38 = v5;
  if ( v3 >= 0 )
    v11 = *(_DWORD *)(a1 + 664) >> 31;
  if ( !v10 )
    goto LABEL_13;
  v12 = a1 + 6880;
  v13 = v10;
  do
  {
    v14 = *(_QWORD **)v12;
    if ( (*(_WORD *)(*(_QWORD *)v12 + 204LL) & 0x50) == 0 )
    {
      v8 += v14[1] - *v14;
      v9 += v14[3];
    }
    v12 += 8LL;
    --v13;
  }
  while ( v13 );
  if ( v9 < 0x400 )
LABEL_13:
    v11 |= 4u;
  v15 = v11 | 8;
  if ( v8 >= 0x400 )
    v15 = v11;
  BugCheckParameter3 = v15;
  if ( dword_1403CBDA4 )
  {
    v16 = 243;
  }
  else
  {
    v17 = *(const void **)(a1 + 7488);
    v18 = *(_QWORD *)(a1 + 7424) >> 2;
    if ( (unsigned __int64)v17 < v18 )
    {
      v16 = *(_QWORD *)(a1 + 7536) < v18 ? 235 : 77;
    }
    else
    {
      v16 = 253;
      BugCheckParameter2 = *(_QWORD *)(a1 + 7488);
      v4 = v17;
    }
  }
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 104LL);
  if ( *(_QWORD *)(v19 + 944) )
  {
    v20 = *(_QWORD *)(v19 + 944);
    v21 = (volatile LONG *)(v20 + 1440);
    v22 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v20 + 1440));
    v23 = *(_QWORD *)(v20 + 1488);
    ExReleaseSpinLockShared(v21, v22);
    if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime() - v23) < -MiNoPagesTimeout.QuadPart )
      return;
    v5 = v38;
  }
  if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
  {
    v49 = 0;
  }
  else
  {
    DbgPrintEx(
      0x66u,
      0,
      "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
      v16,
      *(const void **)(a1 + 7424),
      v4,
      v15,
      v5);
    if ( (MiFlags & 8) != 0 )
      __debugbreak();
    v49 = 1;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, v7)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4820), 1, 0) )
  {
    v24 = (__int64 *)(a1 + 3408);
    v25 = 0LL;
    v41 = 0LL;
    v26 = (unsigned __int64 *)(a1 + 3424);
    v27 = 16LL;
    BugCheckParameter3_4 = 16LL;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Lock = v26;
      LockHandle.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v26);
      v32 = *v24;
      if ( *v24 != 0xFFFFFFFFFLL )
      {
        do
        {
          v47 = v25;
          v45 = 48 * v32;
          v46 = v25;
          v33 = 48 * v32 - 0x58000000000LL;
          v32 = *(_QWORD *)v33 & 0xFFFFFFFFFLL;
          PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v33 + 16), v29, v30, v31);
          v35 = *(_QWORD *)PrototypePteDirect;
          if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x28) == 0
            && (!v25 || v25 == v35)
            && !_interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
          {
            SpinLock = (PEX_SPIN_LOCK)(v35 + 72);
            ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v35 + 72));
            if ( (*(_DWORD *)(v35 + 56) & 8) != 0 )
            {
              ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              if ( !v25 )
                v41 = ObFastReferenceObjectLocked((_QWORD *)(v35 + 64));
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v35 + 72));
              MiUnlinkPageFromList(v33, 1uLL);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v36 = *(_BYTE *)(v33 + 34);
              *(_QWORD *)(v33 + 24) &= 0xC000000000000000uLL;
              *(_BYTE *)(v33 + 34) = v36 & 0xEF;
              MiPfnReferenceCountIsZero(v33, v45 / 48);
              _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              ++dword_1403CB494;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              LockHandle.LockQueue.Lock = v26;
              LockHandle.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v26);
              v25 = v35;
              v32 = *v24;
              if ( v46 )
                v25 = v47;
            }
          }
        }
        while ( v32 != 0xFFFFFFFFFLL );
        v27 = BugCheckParameter3_4;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      v26 += 5;
      v24 += 5;
      BugCheckParameter3_4 = --v27;
    }
    while ( v27 );
    v37 = (struct _WORK_QUEUE_ITEM *)(a1 + 4776);
    if ( v25 )
    {
      *(_QWORD *)(a1 + 4808) = v41;
      *(_DWORD *)(a1 + 4816) = -1073741566;
      *(_QWORD *)(a1 + 4792) = MiLdwPopupWorker;
      *(_QWORD *)(a1 + 4800) = a1 + 4776;
      v37->List.Flink = 0LL;
      ExQueueWorkItem(v37, DelayedWorkQueue);
      ++dword_1403CB490;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(a1 + 4820), 0);
      if ( !v49 )
        KeBugCheckEx(v16, *(_QWORD *)(a1 + 7424), BugCheckParameter2, BugCheckParameter3, v38);
    }
  }
}
