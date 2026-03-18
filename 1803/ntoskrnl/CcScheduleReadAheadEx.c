/*
 * XREFs of CcScheduleReadAheadEx @ 0x1401357B0
 * Callers:
 *     CcAsyncReadPrefetch @ 0x140098ACC (CcAsyncReadPrefetch.c)
 *     CcCopyReadEx @ 0x14011D5C0 (CcCopyReadEx.c)
 *     CcAsyncCopyRead @ 0x1401392C0 (CcAsyncCopyRead.c)
 *     CcScheduleReadAhead @ 0x1402203D0 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x1405392E0 (CcMdlRead.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     CcPostWorkQueue @ 0x1400428A8 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400437A8 (CcAllocateWorkQueueEntry.c)
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     CcCanIWriteStream @ 0x140133A34 (CcCanIWriteStream.c)
 *     CcDetermineReadPattern @ 0x140135BC4 (CcDetermineReadPattern.c)
 *     IoReferenceIoAttributionFromThread @ 0x140137A70 (IoReferenceIoAttributionFromThread.c)
 *     CcChargeThreadForReadAhead @ 0x140137B8C (CcChargeThreadForReadAhead.c)
 *     CcPerfLogScheduleReadAhead @ 0x14017C9E8 (CcPerfLogScheduleReadAhead.c)
 */

void __fastcall CcScheduleReadAheadEx(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        struct _KTHREAD *CurrentThread)
{
  __int64 v4; // rax
  int v5; // edi
  _SLIST_ENTRY *Next; // rsi
  __int64 v8; // r15
  __int64 Partition; // r13
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rbx
  int Pattern; // eax
  int v16; // r15d
  int v17; // r8d
  signed __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // r8d
  int v21; // edx
  int PagePriorityThread; // eax
  int v23; // edx
  int v24; // edx
  int v25; // r8d
  PSLIST_ENTRY v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // edx
  __int64 v30; // rdx
  unsigned int v31; // edx
  unsigned __int64 v32; // rcx
  KIRQL v33; // al
  unsigned __int64 v34; // rbx
  __int64 v35; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+40h] [rbp-78h]
  PSLIST_ENTRY v37; // [rsp+48h] [rbp-70h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  KIRQL v40; // [rsp+C0h] [rbp+8h]
  unsigned int v42; // [rsp+D0h] [rbp+18h]
  int v43; // [rsp+D8h] [rbp+20h]

  v42 = a3;
  v4 = *((_QWORD *)&Object[2].Next + 1);
  v5 = 0;
  Next = Object[3].Next;
  v8 = a3;
  Partition = 0LL;
  v12 = *(_QWORD *)(v4 + 8);
  if ( v12 )
    Partition = CcGetPartition(*(_QWORD **)(v4 + 8), (__int64)a2);
  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  if ( Next )
  {
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 152);
      if ( (v13 & 1) == 0
        && (v13 & 0x2000) == 0
        && ((__int64)Object[5].Next & 0x100000) == 0
        && (int)PsGetIoPriorityThread((__int64)CurrentThread) >= 2
        && CcCanIWriteStream((KSPIN_LOCK *)Partition, (__int64)Object, 0x1000000u, 0, 4)
        && (!Partition || !*(_BYTE *)(Partition + 312)) )
      {
        v35 = v8;
        v14 = v8 + *a2;
        v43 = ~HIDWORD(Next->Next) & (HIDWORD(Next->Next) + v8);
        SpinLock = (PKSPIN_LOCK)&Next[5];
        v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
        if ( ((__int64)Next->Next & 0x20000) == 0 )
          LODWORD(Next->Next) |= 0x20000u;
        Pattern = CcDetermineReadPattern(Next, a2);
        v16 = Pattern;
        if ( Pattern )
        {
          if ( Pattern > 0 )
          {
            if ( Pattern > 2 )
            {
              v29 = (int)a2;
              if ( Pattern != 3 || (v36 = 2LL * *a2 - (unsigned __int64)Next[2].Next, v36 < 0) )
              {
                v17 = v43;
                goto LABEL_35;
              }
              v31 = (v36 & 0xFFF) + v42;
              LODWORD(v36) = v36 & 0xFFFFF000;
              v42 = v31;
              *((_QWORD *)&Next[3].Next + 1) = v36;
              v20 = (v31 + 4095) & 0xFFFFF000;
            }
            else
            {
              v17 = v43;
              v18 = (signed __int64)Next[4].Next;
              if ( v14 + v35 + (unsigned int)(2 * v43) < v18 )
              {
LABEL_34:
                v29 = (int)a2;
LABEL_35:
                if ( (xmmword_14044C2D0 & 0x20000) != 0 )
                  CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v29, v42, v17, v16, v5);
                KxReleaseSpinLock(SpinLock);
                __writecr8(v40);
                return;
              }
              *((_QWORD *)&Next[3].Next + 1) = v14 & 0xFFFFFFFFFFFFF000uLL;
              if ( (__int64)(v14 & 0xFFFFFFFFFFFFF000uLL) >= v18 )
                LODWORD(v18) = ~(v43 - 1) & (v14 + v43 - 1);
              v19 = LODWORD(Next[3].Next) + 1;
              LODWORD(Next[3].Next) = v19;
              if ( v16 == 1 || v19 >= 3 )
                v17 = 2 * v43;
              v20 = v18 - (v14 & 0xFFFFF000) + v17;
              if ( v19 >= 3 )
              {
                v30 = *((unsigned int *)&Next[5].Next + 3);
                if ( (_DWORD)v30 )
                {
                  v32 = v30 * (unsigned __int64)(v42 * v19) / 0x64;
                  if ( v32 > 0xFFFFFFFF )
                    v32 = 0xFFFFFFFFLL;
                  if ( v32 > v20 )
                    v20 = v32;
                }
              }
            }
            HIDWORD(Next[3].Next) = v20;
            v21 = (int)Next->Next;
            if ( ((__int64)Next->Next & 0x10000) == 0 )
            {
              LODWORD(Next->Next) = v21 | 0x10000;
              PagePriorityThread = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
              LODWORD(Next->Next) = v23 ^ (v23 ^ (PagePriorityThread << 18)) & 0x1C0000;
              KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
              __writecr8(v40);
              if ( (int)CcAllocateWorkQueueEntry(Partition, &v37) < 0 )
              {
                v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
                LODWORD(Next->Next) &= ~0x10000u;
                v34 = v33;
                KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
                __writecr8(v34);
              }
              else
              {
                v26 = v37;
                if ( (xmmword_14044C2D0 & 0x20000) != 0 )
                  CcPerfLogScheduleReadAhead((_DWORD)v37, (_DWORD)Object, (_DWORD)a2, v42, v43, v16, 1);
                if ( (*(_DWORD *)(v12 + 152) & 0x10000000) != 0 )
                  CcChargeThreadForReadAhead((_DWORD)Object, v24, v25, v16, (__int64)CurrentThread);
                ObfReferenceObjectWithTag(Object, 0x746C6644u);
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
                ++*(_DWORD *)(v12 + 4);
                *(_DWORD *)(v12 + 152) |= 0x4000u;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                __writecr8(LockHandle.OldIrql);
                Next[7].Next = v26;
                *((_BYTE *)&v26[7].Next + 8) = 1;
                v26[1].Next = Object;
                *((_QWORD *)&v26[1].Next + 1) = 0LL;
                IoReferenceIoAttributionFromThread(CurrentThread, &v26[1].Next + 1);
                CcPostWorkQueue((__int64)v26, Partition + 240, v27, v28);
              }
              return;
            }
            v5 = 1;
            if ( (*(_DWORD *)(v12 + 152) & 0x10000000) != 0 )
              CcChargeThreadForReadAhead((_DWORD)Object, v21, v20, v16, (__int64)CurrentThread);
          }
        }
        else
        {
          LODWORD(Next[3].Next) = 0;
          Next[4].Next = 0LL;
          *((_QWORD *)&Next[4].Next + 1) = 0LL;
        }
        v17 = v43;
        goto LABEL_34;
      }
    }
  }
}
