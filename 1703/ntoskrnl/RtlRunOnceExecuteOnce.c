/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x140545670
 * Callers:
 *     ExpCheckFullProcessInformationAccess @ 0x14045A830 (ExpCheckFullProcessInformationAccess.c)
 *     SdbGetIndex @ 0x1404B5AA0 (SdbGetIndex.c)
 *     SeQuerySigningPolicy @ 0x140545370 (SeQuerySigningPolicy.c)
 *     ExQueryBootEntropyInformation @ 0x1405A76B4 (ExQueryBootEntropyInformation.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1405BC340 (SdbpGetStringTableItemFromStringRef.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlRunOnceComplete @ 0x140451A10 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x140545750 (RtlRunOnceBeginInitialize.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v10;
}
