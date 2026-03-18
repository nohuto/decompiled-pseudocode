/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1404F4560
 * Callers:
 *     RtlpHpMetadataHeapStart @ 0x140295DD8 (RtlpHpMetadataHeapStart.c)
 *     SeQuerySigningPolicy @ 0x1404F40E0 (SeQuerySigningPolicy.c)
 *     ExCheckFullProcessInformationAccess @ 0x140540610 (ExCheckFullProcessInformationAccess.c)
 *     SdbGetIndex @ 0x1405FD89C (SdbGetIndex.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14061F4D0 (SdbpGetStringTableItemFromStringRef.c)
 *     ExQueryBootEntropyInformation @ 0x140655288 (ExQueryBootEntropyInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlRunOnceBeginInitialize @ 0x1404F4640 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x14057EF60 (RtlRunOnceComplete.c)
 */

NTSTATUS __stdcall RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // eax
  int v10; // ebx
  PVOID v12; // r8
  NTSTATUS v13; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_12;
  if ( v9 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      if ( Context )
        v12 = *Context;
      else
        v12 = 0LL;
      v10 = RtlRunOnceComplete(RunOnce, 0, v12);
      if ( v10 >= 0 )
      {
        v10 = 0;
        goto LABEL_3;
      }
    }
    else
    {
      v10 = -1073741823;
      v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v13 >= 0 )
        goto LABEL_3;
      v10 = v13;
    }
LABEL_12:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    RtlRaiseStatus(v10);
  }
LABEL_3:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
