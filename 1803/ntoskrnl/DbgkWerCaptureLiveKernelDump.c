/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x140712560
 * Callers:
 *     PopUserPresentSet @ 0x14016DB68 (PopUserPresentSet.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1402BCD80 (ExpResourceTimeoutCaptureLiveDump.c)
 *     MiForceCrashForInvalidAccess @ 0x1407499E8 (MiForceCrashForInvalidAccess.c)
 *     PopWin32CalloutWatchdogCallbackLiveDump @ 0x14076DC90 (PopWin32CalloutWatchdogCallbackLiveDump.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x14076DD98 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14076DFD0 (PopDripsWatchdogTakeAction.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 *     TtmpCalloutWatchdogCallback @ 0x140771230 (TtmpCalloutWatchdogCallback.c)
 *     ExpIoPoolDeadlockWorker @ 0x1407C5540 (ExpIoPoolDeadlockWorker.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14006D220 (RtlStringCchLengthW.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     DbgkpWerCleanupContext @ 0x140712A70 (DbgkpWerCleanupContext.c)
 *     DbgkpWerProcessPolicyResult @ 0x140712F78 (DbgkpWerProcessPolicyResult.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        NTSTRSAFE_PCWSTR pszSrc,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v15; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v17; // rsi
  unsigned int v18; // r11d
  int v19; // eax
  int v20; // eax
  char v21[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-24h] BYREF
  __int64 v23[4]; // [rsp+28h] [rbp-20h] BYREF

  v21[0] = 1;
  if ( KeGetCurrentIrql() )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called at IRQL > PASSIVE_LEVEL\n");
    return 3221225800LL;
  }
  if ( !DbgkpWerInitialized )
  {
    DbgPrintEx(5u, 1u, "DBGK: DbgkWerCaptureLiveKernelDump: called before initialization.\n");
    return 3221225635LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(&DbgkpBusy, 1) != 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x57676244u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB8uLL);
      v15 = RtlStringCchLengthW(pszSrc, 0x10uLL, 0LL);
      if ( v15 >= 0 )
      {
        v15 = RtlStringCchCopyW(v17, v18, pszSrc);
        if ( v15 >= 0 )
        {
          *((_QWORD *)v17 + 7) = a5;
          *((_QWORD *)v17 + 8) = a6;
          *((_QWORD *)v17 + 9) = a7;
          *((_QWORD *)v17 + 10) = a8;
          *((_DWORD *)v17 + 22) = a9;
          v19 = DbgkpWerDefaultPolicy;
          *((_DWORD *)v17 + 8) = a2;
          *((_QWORD *)v17 + 5) = a3;
          *((_QWORD *)v17 + 6) = a4;
          v22 = v19;
          v23[0] = 0LL;
          v20 = WerLiveKernelCreateReport(v17, &v22, v23);
          v15 = v20;
          if ( v20 >= 0 )
          {
            v15 = DbgkpWerProcessPolicyResult(v17, v22, v23[0], v21);
            if ( !v21[0] )
              goto LABEL_16;
          }
          else
          {
            DbgPrintEx(
              5u,
              0,
              "DBGK: DbgkWerCaptureLiveKernelDump: WerLiveKernelCreateReport failed, status 0x%x.\n\n",
              v20);
          }
        }
      }
      DbgkpWerCleanupContext(v17);
      ExFreePoolWithTag(v17, 0x57676244u);
    }
    else
    {
      v15 = -1073741670;
    }
    _InterlockedExchange(&DbgkpBusy, 0);
    goto LABEL_16;
  }
  v15 = -1073741267;
LABEL_16:
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
