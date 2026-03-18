/*
 * XREFs of CcScheduleReadAheadEx @ 0x1400625A0
 * Callers:
 *     CcAsyncCopyRead @ 0x140020890 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x14007AB90 (CcCopyReadEx.c)
 *     CcAsyncReadPrefetch @ 0x1400BBA90 (CcAsyncReadPrefetch.c)
 *     CcScheduleReadAhead @ 0x1401E0CD0 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x140507110 (CcMdlRead.c)
 * Callees:
 *     CcChargeThreadForReadAhead @ 0x1400091D4 (CcChargeThreadForReadAhead.c)
 *     IoReferenceIoAttributionFromThread @ 0x140020D8C (IoReferenceIoAttributionFromThread.c)
 *     CcPostWorkQueue @ 0x140022504 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140023330 (CcAllocateWorkQueueEntry.c)
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDetermineReadPattern @ 0x140064684 (CcDetermineReadPattern.c)
 *     CcCanIWriteStream @ 0x140064730 (CcCanIWriteStream.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcPerfLogScheduleReadAhead @ 0x1401E2A40 (CcPerfLogScheduleReadAhead.c)
 */

void __fastcall CcScheduleReadAheadEx(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        struct _KTHREAD *CurrentThread)
{
  __int64 v4; // rax
  int v5; // r14d
  int *Next; // rdi
  __int64 v8; // r15
  __int64 Partition; // r13
  _DWORD *v12; // rsi
  int v13; // eax
  __int64 v14; // rbx
  int Pattern; // eax
  __int64 v16; // r8
  int v17; // r15d
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // edx
  int v21; // edx
  signed __int64 v22; // rcx
  int v23; // r8d
  unsigned int v24; // ecx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  int PagePriorityThread; // eax
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // r8
  PSLIST_ENTRY v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  KIRQL v35; // al
  unsigned __int64 v36; // rbx
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-78h]
  PSLIST_ENTRY v38; // [rsp+48h] [rbp-70h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  int v41; // [rsp+C0h] [rbp+8h]
  unsigned int v43; // [rsp+D0h] [rbp+18h]
  __int64 v44; // [rsp+D8h] [rbp+20h]
  __int64 v45; // [rsp+D8h] [rbp+20h]
  __int64 v46; // [rsp+D8h] [rbp+20h]

  v43 = a3;
  v4 = *((_QWORD *)&Object[2].Next + 1);
  v5 = 0;
  Next = (int *)Object[3].Next;
  v8 = a3;
  Partition = 0LL;
  v12 = *(_DWORD **)(v4 + 8);
  if ( v12 )
    Partition = CcGetPartition(*(_QWORD *)(v4 + 8));
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  if ( Next )
  {
    if ( v12 )
    {
      v13 = v12[38];
      if ( (v13 & 1) == 0
        && (v13 & 0x2000) == 0
        && ((__int64)Object[5].Next & 0x100000) == 0
        && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2
        && (unsigned __int8)CcCanIWriteStream(Partition, (_DWORD)Object, 0x1000000, 0, 4)
        && (!Partition || !*(_BYTE *)(Partition + 312)) )
      {
        v14 = v8 + *a2;
        v44 = v8;
        v41 = ~Next[1] & (Next[1] + v8);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        SpinLock = (PKSPIN_LOCK)(Next + 20);
        KxAcquireSpinLock((PKSPIN_LOCK)Next + 10);
        if ( (*Next & 0x20000) == 0 )
          *Next |= 0x20000u;
        Pattern = CcDetermineReadPattern(Next, a2);
        v17 = Pattern;
        if ( Pattern == 2 )
          goto LABEL_29;
        if ( !Pattern )
        {
          Next[12] = 0;
          *((_QWORD *)Next + 8) = 0LL;
          *((_QWORD *)Next + 9) = 0LL;
LABEL_23:
          v21 = v41;
LABEL_24:
          v19 = (int)a2;
LABEL_25:
          if ( (xmmword_140401150 & 0x20000) != 0 )
            CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v19, v43, v21, v17, v5);
          KxReleaseSpinLock(SpinLock);
          __writecr8(CurrentIrql);
          return;
        }
        v18 = Pattern - 1;
        if ( !v18 )
        {
LABEL_29:
          v21 = v41;
          v22 = *((_QWORD *)Next + 8);
          if ( v14 + v44 + (unsigned int)(2 * v41) < v22 )
            goto LABEL_24;
          v46 = *((_QWORD *)Next + 8);
          *((_QWORD *)Next + 7) = v14 & 0xFFFFFFFFFFFFF000uLL;
          if ( (__int64)(v14 & 0xFFFFFFFFFFFFF000uLL) >= v22 )
            LODWORD(v46) = ~(v41 - 1) & (v14 + v41 - 1);
          ++Next[12];
          v23 = v41;
          v24 = Next[12];
          if ( v17 == 1 || v24 >= 3 )
            v23 = 2 * v41;
          v16 = (unsigned int)(v46 - Next[14] + v23);
          if ( v24 >= 3 )
          {
            v25 = (unsigned int)Next[23];
            if ( (_DWORD)v25 )
            {
              v26 = v25 * (unsigned __int64)(v43 * v24) / 0x64;
              if ( v26 > 0xFFFFFFFF )
                v26 = 0xFFFFFFFFLL;
              if ( v26 > (unsigned int)v16 )
                v16 = (unsigned int)v26;
            }
          }
          Next[13] = v16;
        }
        else
        {
          v19 = (int)a2;
          if ( v18 != 2 || (v45 = 2LL * *a2 - *((_QWORD *)Next + 4), v45 < 0) )
          {
            v21 = v41;
            goto LABEL_25;
          }
          v20 = (v45 & 0xFFF) + v43;
          LODWORD(v45) = v45 & 0xFFFFF000;
          *((_QWORD *)Next + 7) = v45;
          v43 = v20;
          Next[13] = (v20 + 4095) & 0xFFFFF000;
        }
        v27 = (unsigned int)*Next;
        if ( (v27 & 0x10000) == 0 )
        {
          *Next = v27 | 0x10000;
          PagePriorityThread = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
          *Next = v29 ^ (v29 ^ (PagePriorityThread << 18)) & 0x1C0000;
          KxReleaseSpinLock((PKSPIN_LOCK)Next + 10);
          __writecr8(CurrentIrql);
          if ( (int)CcAllocateWorkQueueEntry(Partition, &v38) < 0 )
          {
            v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Next + 10);
            *Next &= ~0x10000u;
            v36 = v35;
            KxReleaseSpinLock((PKSPIN_LOCK)Next + 10);
            __writecr8(v36);
          }
          else
          {
            v32 = v38;
            if ( (xmmword_140401150 & 0x20000) != 0 )
              CcPerfLogScheduleReadAhead((_DWORD)v38, (_DWORD)Object, (_DWORD)a2, v43, v41, v17, 1);
            if ( (v12[38] & 0x10000000) != 0 )
              CcChargeThreadForReadAhead((__int64)Object, v30, v31, v17, CurrentThread);
            ObfReferenceObjectWithTag(Object, 0x746C6644u);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
            ++v12[1];
            ++v12[134];
            v12[38] |= 0x4000u;
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            __writecr8(LockHandle.OldIrql);
            *((_QWORD *)Next + 14) = v32;
            *((_BYTE *)&v32[7].Next + 8) = 1;
            v32[1].Next = Object;
            *((_QWORD *)&v32[1].Next + 1) = 0LL;
            IoReferenceIoAttributionFromThread((__int64)CurrentThread, (__int64)(&v32[1].Next + 1));
            CcPostWorkQueue((__int64)v32, Partition + 240, v33, v34);
          }
          return;
        }
        v5 = 1;
        if ( (v12[38] & 0x10000000) != 0 )
          CcChargeThreadForReadAhead((__int64)Object, v27, v16, v17, CurrentThread);
        goto LABEL_23;
      }
    }
  }
}
