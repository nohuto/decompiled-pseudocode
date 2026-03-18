/*
 * XREFs of MiTrimUnusedPageFileRegionsWorker @ 0x14021A770
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     MiPageFileLargestBitmapsRun @ 0x14007DC78 (MiPageFileLargestBitmapsRun.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     MiReleasePageFileInfo @ 0x1400ABFD4 (MiReleasePageFileInfo.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiMakePageFilePte @ 0x14017CF3C (MiMakePageFilePte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     ZwFsControlFile @ 0x14017E660 (ZwFsControlFile.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14021A624 (MiQueueSyncModifiedWriterApc.c)
 *     MiContractWsSwapPageFile @ 0x1404C90EC (MiContractWsSwapPageFile.c)
 */

char __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // rsi
  __int64 UnbiasedInterruptTime; // rax
  volatile signed __int64 *v6; // r12
  unsigned int v7; // r13d
  __int64 *v8; // rbx
  __int64 v9; // r12
  __int16 v10; // ax
  unsigned int v11; // eax
  __int64 updated; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 PteTimeStamp; // r15
  int Blink_high; // esi
  signed __int32 v19[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-B0h]
  struct _KEVENT Event[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v22; // [rsp+94h] [rbp-74h]
  __int64 PageFilePte; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *v24; // [rsp+A0h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  int v26[24]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD InputBuffer[3]; // [rsp+118h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 984);
  PageFilePte = MiMakePageFilePte(0LL);
  v4 = PageFilePte;
  LOBYTE(UnbiasedInterruptTime) = ExAcquireRundownProtection(v3);
  if ( (_BYTE)UnbiasedInterruptTime )
  {
    --CurrentThread->SpecialApcDisable;
    v6 = (volatile signed __int64 *)(a1 + 1160);
    ExAcquirePushLockExclusiveEx(a1 + 1160, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v7 = 0;
    v22 = *(_DWORD *)(a1 + 5592);
    if ( v22 )
    {
      v8 = (__int64 *)(a1 + 5600);
      do
      {
        v9 = *v8;
        v10 = *(_WORD *)(*v8 + 204);
        if ( (v10 & 0x40) == 0 && (v10 & 0x10) != 0 )
        {
          memset(Event, 0, sizeof(Event));
          Event[0].Header.Size = 6;
          Event[0].Header.WaitListHead.Blink = &Event[0].Header.WaitListHead;
          LOWORD(Event[0].Header.Lock) = 0;
          Event[0].Header.WaitListHead.Flink = &Event[0].Header.WaitListHead;
          Event[0].Header.SignalState = 0;
          Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v7 | 0x200000000000LL);
          *(_QWORD *)&Event[1].Header.Lock = a1;
          v11 = MiPageFileLargestBitmapsRun(v9);
          if ( v11 >= HIDWORD(Event[1].Header.WaitListHead.Flink) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v26,
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
                         *(HANDLE *)(v9 + 224),
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
              updated = MiTransferSoftwarePte(v4, v9, (unsigned int)Event[1].Header.WaitListHead.Blink, 3);
              PteTimeStamp = MiGetPteTimeStamp(updated, v13, v14, v15);
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
            while ( (unsigned __int64)LODWORD(Event[1].Header.WaitListHead.Blink) < *(_QWORD *)v9 );
          }
        }
        ++v7;
        ++v8;
      }
      while ( v7 < v22 );
      CurrentThread = v24;
      v6 = (volatile signed __int64 *)(a1 + 1160);
      v3 = (struct _EX_RUNDOWN_REF *)(a1 + 984);
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection(v3);
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    *(_QWORD *)(a1 + 1112) = UnbiasedInterruptTime;
    _InterlockedOr(v19, 0);
    *(_QWORD *)(a1 + 1104) = 0LL;
  }
  return UnbiasedInterruptTime;
}
