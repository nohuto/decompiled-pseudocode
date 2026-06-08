/*
 * XREFs of CpcConnectNativeInterrupt @ 0x1C00221B8
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcConnectNativeInterrupt(PDEVICE_OBJECT *DeferredContext)
{
  PDEVICE_OBJECT v1; // rsi
  PIO_WORKITEM WorkItem; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  v1 = DeferredContext[30];
  WorkItem = IoAllocateWorkItem(*DeferredContext);
  v1[1].NextDevice = (_DEVICE_OBJECT *)WorkItem;
  if ( WorkItem )
  {
    KeInitializeDpc(
      (PRKDPC)&v1->DeviceLock.Header.WaitListHead,
      (PKDEFERRED_ROUTINE)CpcNativeInterruptDpc,
      DeferredContext);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    KeSetTargetProcessorDpcEx((PKDPC)&v1->DeviceLock.Header.WaitListHead, &ProcNumber);
    KeSetImportanceDpc((PRKDPC)&v1->DeviceLock.Header.WaitListHead, MediumHighImportance);
    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( (int)((__int64 (__fastcall *)(PDEVICE_OBJECT *))qword_1C00115B8)(DeferredContext) >= 0 )
    {
      LOBYTE(v1->Queue.Wcb.DeviceRoutine) = 1;
      ((void (*)(void))qword_1C00115C8)();
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x10u,
      (__int64)&WPP_bbe5d8c4bcba361b69193d125a2ae7a9_Traceguids);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
