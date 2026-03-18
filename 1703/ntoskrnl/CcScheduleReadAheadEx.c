/*
 * XREFs of CcScheduleReadAheadEx @ 0x14004D5C0
 * Callers:
 *     CcAsyncCopyRead @ 0x140023470 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x14009D6C0 (CcCopyReadEx.c)
 *     CcAsyncReadPrefetch @ 0x1401174FC (CcAsyncReadPrefetch.c)
 *     CcScheduleReadAhead @ 0x1401DDC90 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x140549510 (CcMdlRead.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     IoReferenceIoAttributionFromThread @ 0x140023A10 (IoReferenceIoAttributionFromThread.c)
 *     CcChargeThreadForReadAhead @ 0x14002E8B4 (CcChargeThreadForReadAhead.c)
 *     CcPerfLogScheduleReadAhead @ 0x140030A48 (CcPerfLogScheduleReadAhead.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     CcDetermineReadPattern @ 0x14004D9A4 (CcDetermineReadPattern.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1400AE214 (CcPostWorkQueue.c)
 *     CcCanIWriteStream @ 0x1400AE444 (CcCanIWriteStream.c)
 *     CcAllocateWorkQueueEntry @ 0x1400AFA58 (CcAllocateWorkQueueEntry.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 */

void __fastcall CcScheduleReadAheadEx(_QWORD *Object, _QWORD *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // r13
  int *v6; // rdi
  __int64 v8; // r15
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // r12d
  int Pattern; // eax
  int v15; // r15d
  signed __int64 v16; // rdx
  int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdx
  int PagePriorityThread; // eax
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // r15
  _QWORD *v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned __int64 v31; // rcx
  KIRQL v32; // al
  unsigned __int64 v33; // rbx
  __int64 v34; // [rsp+40h] [rbp-29h]
  __int64 v35; // [rsp+40h] [rbp-29h]
  __int64 v36; // [rsp+40h] [rbp-29h]
  __int64 v37; // [rsp+48h] [rbp-21h]
  __int64 v38; // [rsp+50h] [rbp-19h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+58h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-9h] BYREF
  KIRQL v41; // [rsp+D0h] [rbp+67h]
  unsigned int v43; // [rsp+E0h] [rbp+77h]
  int v44; // [rsp+E8h] [rbp+7Fh]

  v43 = a3;
  v4 = 0LL;
  v44 = 0;
  CurrentThread = a4;
  v6 = (int *)Object[6];
  v8 = a3;
  v10 = *(_QWORD *)(Object[5] + 8LL);
  v37 = 0LL;
  if ( v10 )
  {
    v4 = *(_QWORD *)(v10 + 528);
    v37 = v4;
  }
  if ( !a4 )
    CurrentThread = KeGetCurrentThread();
  if ( v6 )
  {
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 152);
      if ( (v11 & 1) == 0
        && (v11 & 0x2000) == 0
        && (Object[10] & 0x100000) == 0
        && (int)PsGetIoPriorityThread(CurrentThread) >= 2
        && (unsigned __int8)CcCanIWriteStream(Object, 0x1000000LL, 0LL, 4LL)
        && (!v4 || !*(_BYTE *)(v4 + 384)) )
      {
        v34 = v8;
        v12 = v8 + *a2;
        v13 = ~v6[1] & (v6[1] + v8);
        SpinLock = (PKSPIN_LOCK)(v6 + 20);
        v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 10);
        if ( (*v6 & 0x20000) == 0 )
          *v6 |= 0x20000u;
        Pattern = CcDetermineReadPattern(v6, a2);
        v15 = Pattern;
        if ( Pattern )
        {
          if ( Pattern > 0 )
          {
            if ( Pattern > 2 )
            {
              v28 = a2;
              if ( Pattern != 3 )
                goto LABEL_36;
              v36 = 2LL * *a2 - *((_QWORD *)v6 + 4);
              if ( v36 < 0 )
                goto LABEL_36;
              v19 = 4294963200LL;
              v30 = (v36 & 0xFFF) + v43;
              LODWORD(v36) = v36 & 0xFFFFF000;
              *((_QWORD *)v6 + 7) = v36;
              v43 = v30;
              v6[13] = (v30 + 4095) & 0xFFFFF000;
              goto LABEL_27;
            }
            v16 = *((_QWORD *)v6 + 8);
            if ( v12 + v34 + 2 * v13 >= v16 )
            {
              v35 = *((_QWORD *)v6 + 8);
              *((_QWORD *)v6 + 7) = v12 & 0xFFFFFFFFFFFFF000uLL;
              if ( (__int64)(v12 & 0xFFFFFFFFFFFFF000uLL) >= v16 )
                LODWORD(v35) = ~(v13 - 1) & (v13 + v12 - 1);
              ++v6[12];
              v17 = v13;
              v18 = v6[12];
              if ( Pattern == 1 || v18 >= 3 )
                v17 = 2 * v13;
              v19 = (unsigned int)(v35 - v6[14] + v17);
              if ( v18 >= 3 )
              {
                v29 = (unsigned int)v6[23];
                if ( (_DWORD)v29 )
                {
                  v31 = v29 * (unsigned __int64)(v43 * v18) / 0x64;
                  if ( v31 > 0xFFFFFFFF )
                    v31 = 0xFFFFFFFFLL;
                  if ( v31 > (unsigned int)v19 )
                    v19 = (unsigned int)v31;
                }
              }
              v6[13] = v19;
LABEL_27:
              v20 = (unsigned int)*v6;
              v44 = 1;
              if ( (v20 & 0x10000) == 0 )
              {
                *v6 = v20 | 0x10000;
                PagePriorityThread = PsGetPagePriorityThread(KeGetCurrentThread());
                *v6 = v22 ^ (v22 ^ (PagePriorityThread << 18)) & 0x1C0000;
                KxReleaseSpinLock((PKSPIN_LOCK)v6 + 10);
                __writecr8(v41);
                if ( (int)CcAllocateWorkQueueEntry(v23, &v38) < 0 )
                {
                  v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 10);
                  *v6 &= ~0x10000u;
                  v33 = v32;
                  KxReleaseSpinLock((PKSPIN_LOCK)v6 + 10);
                  __writecr8(v33);
                }
                else
                {
                  v26 = v38;
                  if ( (xmmword_1403E4010 & 0x20000) != 0 )
                    CcPerfLogScheduleReadAhead(v38, Object, a2, v43, v13, v15, 1);
                  if ( (*(_DWORD *)(v10 + 152) & 0x10000000) != 0 )
                    CcChargeThreadForReadAhead((__int64)Object, v24, v25, v15, CurrentThread);
                  ObfReferenceObjectWithTag(Object, 0x746C6644u);
                  v27 = v37;
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v37 + 64), &LockHandle);
                  ++*(_DWORD *)(v10 + 4);
                  *(_DWORD *)(v10 + 152) |= 0x4000u;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                  __writecr8(LockHandle.OldIrql);
                  *((_QWORD *)v6 + 14) = v26;
                  *(_BYTE *)(v26 + 120) = 1;
                  *(_QWORD *)(v26 + 16) = Object;
                  *(_QWORD *)(v26 + 24) = 0LL;
                  *(_QWORD *)(v26 + 128) = v27;
                  IoReferenceIoAttributionFromThread((__int64)CurrentThread, v26 + 24);
                  CcPostWorkQueue(v26, v27 + 312);
                }
                return;
              }
              if ( (*(_DWORD *)(v10 + 152) & 0x10000000) != 0 )
                CcChargeThreadForReadAhead((__int64)Object, v20, v19, v15, CurrentThread);
            }
          }
        }
        else
        {
          v6[12] = 0;
          *((_QWORD *)v6 + 8) = 0LL;
          *((_QWORD *)v6 + 9) = 0LL;
        }
        v28 = a2;
LABEL_36:
        if ( (xmmword_1403E4010 & 0x20000) != 0 )
          CcPerfLogScheduleReadAhead(0LL, Object, v28, v43, v13, v15, v44);
        KxReleaseSpinLock(SpinLock);
        __writecr8(v41);
      }
    }
  }
}
