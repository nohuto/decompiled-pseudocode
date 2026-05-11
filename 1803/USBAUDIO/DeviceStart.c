/*
 * XREFs of DeviceStart @ 0x1C0017260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqddd @ 0x1C0001710 (WPP_RECORDER_SF_qqddd.c)
 *     McTemplateK0 @ 0x1C0001A98 (McTemplateK0.c)
 *     McTemplateK0zq @ 0x1C0001AD8 (McTemplateK0zq.c)
 *     DeInitSideband @ 0x1C0006C2C (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 *     FilterCreateFilterFactory @ 0x1C0018328 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C001E82C (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C001EEE8 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(PVOID Context, __int64 a2)
{
  __int64 v2; // rsi
  int FilterFactory; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  PULONG v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v17; // rdx
  struct _IO_WORKITEM *WorkItem; // rbx
  PVOID PoolWithTag; // rax
  __int64 v20; // rdx
  int Timeout; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  int v24; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v25[3]; // [rsp+54h] [rbp-24h] BYREF
  int v26; // [rsp+80h] [rbp+8h] BYREF

  v2 = *((_QWORD *)Context + 2);
  FilterFactory = 0;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    1u,
    0xCu,
    (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
    Context);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0(v6, &EXBUS_DEVICE_START_ENTER, v7);
  if ( !*((_BYTE *)Context + 48) )
  {
    *(_DWORD *)(v2 + 520) = 1;
    *(_BYTE *)(v2 + 64) = 0;
    FilterFactory = (*(__int64 (__fastcall **)(PVOID))(pExtBusDeviceDispatchTable + 8))(Context);
    if ( FilterFactory < 0 )
      goto LABEL_10;
    *(_DWORD *)(v2 + 844) = 0;
    FilterFactory = FilterCreateFilterFactory(Context);
    if ( FilterFactory < 0 )
      goto LABEL_10;
    if ( (int)RegistryGetIdleInfo(*((_QWORD *)Context + 4), &v26, &v24, v25) >= 0 )
    {
      *(_DWORD *)(v2 + 528) = v26;
      *(_DWORD *)(v2 + 532) = v24;
      *(_DWORD *)(v2 + 524) = v25[0];
    }
    v8 = PoRegisterDeviceForIdleDetection(
           *((PDEVICE_OBJECT *)Context + 4),
           *(_DWORD *)(v2 + 528),
           *(_DWORD *)(v2 + 532),
           (DEVICE_POWER_STATE)*(_DWORD *)(v2 + 524));
    *(_QWORD *)(v2 + 512) = v8;
    HIDWORD(v23) = HIDWORD(v8);
    HIDWORD(v22) = HIDWORD(Context);
    WPP_RECORDER_SF_qqddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11, Timeout);
    v13 = InitializeIrpThreadAndQueue(v12, v2);
    FilterFactory = v13;
    if ( v13 < 0 )
    {
      LODWORD(v23) = v13;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v5,
        1u,
        0x10u,
        (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
        Context,
        v23);
LABEL_10:
      KeWaitForSingleObject((PVOID)(v2 + 736), Executive, 0, 0, 0LL);
      DeInitSideband((__int64)Context, v14);
      KeReleaseMutex((PRKMUTEX)(v2 + 736), 0);
      *(_BYTE *)(v2 + 64) = 1;
      LODWORD(v23) = FilterFactory;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v15,
        1u,
        0x13u,
        (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
        Context,
        v23);
      goto LABEL_11;
    }
    if ( (unsigned int)(*(_DWORD *)(v2 + 844) - 1) <= 1 )
    {
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 3));
      if ( !WorkItem )
      {
        LODWORD(v22) = FilterFactory;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v17,
          1u,
          0x11u,
          (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
          v22);
        FilterFactory = -1073741670;
      }
      if ( FilterFactory < 0 )
        goto LABEL_10;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x65627845u);
      *(_QWORD *)(v2 + 968) = PoolWithTag;
      if ( !PoolWithTag )
      {
        IoFreeWorkItem(WorkItem);
        WorkItem = 0LL;
        LODWORD(v22) = FilterFactory;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v20,
          1u,
          0x12u,
          (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
          v22);
        FilterFactory = -1073741670;
      }
      if ( FilterFactory < 0 )
        goto LABEL_10;
      KeInitializeEvent(*(PRKEVENT *)(v2 + 968), NotificationEvent, 0);
      IoQueueWorkItemEx(WorkItem, SidebandCapableDeferredFilterFactoryCreate, CriticalWorkQueue, Context);
      KeWaitForSingleObject((PVOID)(v2 + 944), Executive, 0, 0, 0LL);
    }
  }
LABEL_11:
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq(v6, v5, v7, *(const wchar_t **)(v2 + 24), FilterFactory);
  return (unsigned int)FilterFactory;
}
