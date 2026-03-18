/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x140226E40
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiReleasePageFileInfo @ 0x1400C0554 (MiReleasePageFileInfo.c)
 *     MiPageFileLargestBitmapsRun @ 0x14011A3F8 (MiPageFileLargestBitmapsRun.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x14017C7A8 (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     ZwFsControlFile @ 0x14017DFE0 (ZwFsControlFile.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140226BFC (MiQueueSyncModifiedWriterApc.c)
 *     MiContractWsSwapPageFile @ 0x140444648 (MiContractWsSwapPageFile.c)
 */

void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // rsi
  volatile signed __int64 *v5; // r12
  unsigned int v6; // r13d
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int16 v9; // ax
  unsigned int v10; // eax
  __int64 updated; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 PteTimeStamp; // r15
  int Blink_high; // esi
  signed __int32 v16[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Event[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v19; // [rsp+94h] [rbp-74h]
  __int64 PageFilePte; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v21; // [rsp+A0h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  int v23[24]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD InputBuffer[3]; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v21 = CurrentThread;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 936);
  PageFilePte = MiMakePageFilePte(0LL);
  v4 = PageFilePte;
  if ( ExAcquireRundownProtection_0(v3) )
  {
    --CurrentThread->SpecialApcDisable;
    v5 = (volatile signed __int64 *)(a1 + 1112);
    ExAcquirePushLockExclusiveEx(a1 + 1112, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v6 = 0;
    v19 = *(_DWORD *)(a1 + 5784);
    if ( v19 )
    {
      v7 = (__int64 *)(a1 + 5792);
      do
      {
        v8 = *v7;
        v9 = *(_WORD *)(*v7 + 204);
        if ( (v9 & 0x40) == 0 && (v9 & 0x10) != 0 )
        {
          memset(Event, 0, sizeof(Event));
          Event[0].Header.Size = 6;
          Event[0].Header.WaitListHead.Blink = &Event[0].Header.WaitListHead;
          LOWORD(Event[0].Header.Lock) = 0;
          Event[0].Header.WaitListHead.Flink = &Event[0].Header.WaitListHead;
          Event[0].Header.SignalState = 0;
          Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v6 | 0x200000000000LL);
          *(_QWORD *)&Event[1].Header.Lock = a1;
          v10 = MiPageFileLargestBitmapsRun(v8);
          if ( v10 >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v23,
                (__int64)MiTrimUnusedPageFileRegionsApc,
                (__int64)Event,
                Event);
              if ( !HIDWORD(Event[1].Header.WaitListHead.Blink) )
                break;
              InputBuffer[0] = 0x100000000LL;
              InputBuffer[1] = (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) << 12;
              InputBuffer[2] = (unsigned __int64)HIDWORD(Event[1].Header.WaitListHead.Blink) << 12;
              KeResetEvent(Event);
              Status = ZwFsControlFile(
                         *(HANDLE *)(v8 + 224),
                         0LL,
                         (PIO_APC_ROUTINE)MiIrpCompletionApcRoutine,
                         Event,
                         &IoStatusBlock,
                         0x98208u,
                         InputBuffer,
                         0x18u,
                         0LL,
                         0);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
              updated = MiTransferSoftwarePte(v4, v8, (unsigned int)Event[1].Header.WaitListHead.Blink, 3);
              PteTimeStamp = MiGetPteTimeStamp(updated, v12, v13);
              if ( HIDWORD(Event[1].Header.WaitListHead.Blink) )
              {
                Blink_high = HIDWORD(Event[1].Header.WaitListHead.Blink);
                do
                {
                  MiReleasePageFileInfo((struct _KEVENT *)a1, updated, 2);
                  updated = MiUpdatePageFileHighInPte(updated, ++PteTimeStamp);
                  --Blink_high;
                }
                while ( Blink_high );
                v4 = PageFilePte;
              }
              if ( Status < 0 )
                break;
              KeResetEvent(Event);
              Event[1].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(unsigned int)(HIDWORD(Event[1].Header.WaitListHead.Blink)
                                                                                      + LODWORD(Event[1].Header.WaitListHead.Blink));
            }
            while ( (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) < *(_QWORD *)v8 );
          }
        }
        ++v6;
        ++v7;
      }
      while ( v6 < v19 );
      CurrentThread = v21;
      v5 = (volatile signed __int64 *)(a1 + 1112);
      v3 = (struct _EX_RUNDOWN_REF *)(a1 + 936);
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0(v3);
    *(_QWORD *)(a1 + 1064) = KiQueryUnbiasedInterruptTime();
    _InterlockedOr(v16, 0);
    *(_QWORD *)(a1 + 1056) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 168));
}
