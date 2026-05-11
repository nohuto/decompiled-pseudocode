/*
 * XREFs of DeviceCreate @ 0x1C0001BE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     McGenEventRegister @ 0x1C0001A38 (McGenEventRegister.c)
 *     InitializeSidebandContext @ 0x1C0006B80 (InitializeSidebandContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000A580 (memset.c)
 *     WmiRegisterProvider @ 0x1C001EDD0 (WmiRegisterProvider.c)
 */

__int64 __fastcall DeviceCreate(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // edi
  PETWENABLECALLBACK v4; // rdx
  LPCGUID v5; // rcx
  PDRIVER_CONTROL *PoolWithTag; // rax
  __int64 v7; // rdx
  PDRIVER_CONTROL *v8; // rbx
  const wchar_t *v9; // rdx
  __int64 v10; // rcx
  __int16 v11; // ax
  KIRQL v12; // al
  PDRIVER_CONTROL DeviceRoutine; // rcx
  PIO_CSQ_COMPLETE_CANCELED_IRP CsqCompleteCanceledIrp; // [rsp+30h] [rbp-40h]
  _COUNTED_REASON_CONTEXT Context; // [rsp+40h] [rbp-30h] BYREF

  v3 = -1073741670;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    1u,
    0xAu,
    (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
    a1);
  McGenEventRegister(v5, v4, &EXBUSAUD_PROVIDER_Context, &EXBUSAUD_PROVIDER_Context);
  EtwSetInformation(
    EXBUSAUD_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  PoolWithTag = (PDRIVER_CONTROL *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x3D0uLL, 0x41627845u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_18;
  v3 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), PoolWithTag, ExFreePool);
  if ( v3 < 0 )
  {
    ExFreePool(v8);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = v8;
    memset(v8, 0, 0x3D0uLL);
    InitializeSidebandContext(v8 + 87);
    WmiRegisterProvider(a1);
    KeInitializeSpinLock((PKSPIN_LOCK)v8 + 12);
    v8[14] = (PDRIVER_CONTROL)(v8 + 13);
    v8[13] = (PDRIVER_CONTROL)(v8 + 13);
    v9 = L"mmres.dll";
    v8[2] = (PDRIVER_CONTROL)a1;
    *((_BYTE *)v8 + 64) = 1;
    Context.ResourceReasonId = 900;
    v10 = 0x7FFFLL;
    Context.Version = 0;
    *(_QWORD *)&Context.Flags = 2LL;
    Context.StringCount = 0;
    Context.ReasonStrings = 0LL;
    Context.ResourceFileName.Buffer = 0LL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v10;
    }
    while ( v10 );
    if ( v10 )
      v11 = 0x7FFF - v10;
    else
      v11 = 0;
    if ( v10 )
    {
      Context.ResourceFileName.Buffer = L"mmres.dll";
      Context.ResourceFileName.Length = 2 * v11;
      Context.ResourceFileName.MaximumLength = 2 * v11 + 2;
      PoCreatePowerRequest((PVOID *)v8 + 63, *(PDEVICE_OBJECT *)(a1 + 24), &Context);
    }
    KeInitializeEvent((PRKEVENT)(v8 + 67), NotificationEvent, 1u);
    KeInitializeSpinLock((PKSPIN_LOCK)v8 + 78);
    KeInitializeSemaphore((PRKSEMAPHORE)(v8 + 81), 0, 0x7FFFFFFF);
    v8[80] = (PDRIVER_CONTROL)(v8 + 79);
    v8[79] = (PDRIVER_CONTROL)(v8 + 79);
    v3 = IoCsqInitialize(
           (PIO_CSQ)(v8 + 70),
           CsInsertIrp,
           CsRemoveIrp,
           CsPeekNextIrp,
           CsAcquireLock,
           CsReleaseLock,
           CsCompleteCanceledIrp);
    if ( v3 < 0 )
      goto LABEL_18;
    v3 = (*(__int64 (__fastcall **)(__int64))pExtBusDeviceDispatchTable)(a1);
    if ( v3 < 0 )
      goto LABEL_18;
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
    DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    ++WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    if ( *((struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 1) != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
      __fastfail(3u);
    *v8 = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    v8[1] = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    *((_QWORD *)DeviceRoutine + 1) = v8;
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v8;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v12);
  }
  if ( v3 < 0 )
  {
LABEL_18:
    LODWORD(CsqCompleteCanceledIrp) = v3;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1u,
      0xBu,
      (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
      a1,
      CsqCompleteCanceledIrp);
  }
  return (unsigned int)v3;
}
