/*
 * XREFs of ACPIWorkerThread @ 0x1C0021CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dqqq @ 0x1C005B574 (WPP_RECORDER_SF_dqqq.c)
 */

void __fastcall __noreturn ACPIWorkerThread(PVOID StartContext)
{
  KIRQL v1; // al
  _QWORD *v2; // rbx
  KIRQL v3; // di
  __int64 v4; // rax
  void (__fastcall *v5)(__int64); // rdi
  __int64 v6; // rsi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int WaitMode; // [rsp+20h] [rbp-58h]
  PVOID Object[5]; // [rsp+50h] [rbp-28h] BYREF

  ACPIThread = KeGetCurrentThread();
  Object[0] = &ACPIProcessWorkQueueEvent;
  Object[1] = &ACPITerminateEvent;
  while ( 1 )
  {
    if ( KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, &WaitBlockArray) == 1 )
      PsTerminateSystemThread(0);
    while ( 1 )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
      v2 = (_QWORD *)ACPIWorkQueue;
      v3 = v1;
      if ( (__int64 *)ACPIWorkQueue == &ACPIWorkQueue )
      {
        KeClearEvent(&ACPIProcessWorkQueueEvent);
        v2 = 0LL;
      }
      else
      {
        if ( *(__int64 **)(ACPIWorkQueue + 8) != &ACPIWorkQueue
          || (v4 = *(_QWORD *)ACPIWorkQueue, *(_QWORD *)(*(_QWORD *)ACPIWorkQueue + 8LL) != ACPIWorkQueue) )
        {
          __fastfail(3u);
        }
        ACPIWorkQueue = *(_QWORD *)ACPIWorkQueue;
        *(_QWORD *)(v4 + 8) = &ACPIWorkQueue;
        v2[1] = 0LL;
        *v2 = 0LL;
      }
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v3);
      if ( !v2 )
        break;
      v5 = (void (__fastcall *)(__int64))v2[2];
      v6 = v2[3];
      v5(v6);
      if ( KeGetCurrentIrql() )
        WPP_RECORDER_SF_dqqq(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          v8,
          v9,
          WaitMode,
          KeGetCurrentIrql(),
          (char)v5,
          v6,
          (char)v2);
    }
  }
}
