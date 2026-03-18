/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x14025FF60
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     MiPageFileLargestBitmapsRun @ 0x14009D2DC (MiPageFileLargestBitmapsRun.c)
 *     MiReleasePageFileInfo @ 0x1400D6FBC (MiReleasePageFileInfo.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x1401A65FC (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401A6710 (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 *     ZwFsControlFile @ 0x1401A7BE0 (ZwFsControlFile.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14025FE10 (MiQueueSyncModifiedWriterApc.c)
 *     MiContractWsSwapPageFile @ 0x14052C90C (MiContractWsSwapPageFile.c)
 */

void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int64 v4; // rsi
  volatile signed __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // r13d
  __int64 *v10; // rbx
  __int64 v11; // r12
  __int16 v12; // ax
  unsigned int v13; // eax
  __int64 updated; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 PteTimeStamp; // r15
  int Blink_high; // esi
  signed __int32 v20[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Event[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v23; // [rsp+94h] [rbp-74h]
  __int64 PageFilePte; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v25; // [rsp+A0h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  int v27[24]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD InputBuffer[3]; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v25 = CurrentThread;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 936);
  PageFilePte = MiMakePageFilePte(0LL);
  v4 = PageFilePte;
  if ( ExAcquireRundownProtection(v3) )
  {
    --CurrentThread->SpecialApcDisable;
    v5 = (volatile signed __int64 *)(a1 + 1112);
    ExAcquirePushLockExclusiveEx(a1 + 1112, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v9 = 0;
    v23 = *(_DWORD *)(a1 + 6872);
    if ( v23 )
    {
      v10 = (__int64 *)(a1 + 6880);
      do
      {
        v11 = *v10;
        v12 = *(_WORD *)(*v10 + 204);
        if ( (v12 & 0x40) == 0 && (v12 & 0x10) != 0 )
        {
          memset(Event, 0, sizeof(Event));
          Event[0].Header.Size = 6;
          Event[0].Header.WaitListHead.Blink = &Event[0].Header.WaitListHead;
          LOWORD(Event[0].Header.Lock) = 0;
          Event[0].Header.WaitListHead.Flink = &Event[0].Header.WaitListHead;
          Event[0].Header.SignalState = 0;
          Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v9 | 0x200000000000LL);
          *(_QWORD *)&Event[1].Header.Lock = a1;
          v13 = MiPageFileLargestBitmapsRun(v11);
          if ( v13 >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v27,
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
                         *(HANDLE *)(v11 + 224),
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
              updated = MiTransferSoftwarePte(v4, v11, (unsigned int)Event[1].Header.WaitListHead.Blink, 3);
              PteTimeStamp = MiGetPteTimeStamp(updated, v15, v16, v17);
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
            while ( (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) < *(_QWORD *)v11 );
          }
        }
        ++v9;
        ++v10;
      }
      while ( v9 < v23 );
      CurrentThread = v25;
      v5 = (volatile signed __int64 *)(a1 + 1112);
      v3 = (struct _EX_RUNDOWN_REF *)(a1 + 936);
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5, v6, v7, v8);
    KeAbPostRelease((ULONG_PTR)v5);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection(v3);
    *(_QWORD *)(a1 + 1064) = KiQueryUnbiasedInterruptTime();
    _InterlockedOr(v20, 0);
    *(_QWORD *)(a1 + 1056) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 168));
}
