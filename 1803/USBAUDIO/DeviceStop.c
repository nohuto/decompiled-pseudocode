/*
 * XREFs of DeviceStop @ 0x1C0017730
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011A8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00013EC (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0 @ 0x1C0001A98 (McTemplateK0.c)
 *     McTemplateK0q @ 0x1C0001B74 (McTemplateK0q.c)
 *     ExitIrpThreadAndQueue @ 0x1C0002668 (ExitIrpThreadAndQueue.c)
 *     DeInitSideband @ 0x1C0006C2C (DeInitSideband.c)
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall DeviceStop(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rcx
  struct _KSFILTERFACTORY *v11; // rcx
  NTSTATUS result; // eax
  int v13; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    a2,
    1u,
    0x16u,
    (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
    a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    McTemplateK0(v5, &EXBUS_DEVICE_STOP_ENTER, v6);
  if ( !*(_BYTE *)(v2 + 64) )
  {
    *(_BYTE *)(v2 + 64) = 1;
    ExitIrpThreadAndQueue(v2);
  }
  KeWaitForSingleObject((PVOID)(v2 + 736), Executive, 0, 0, 0LL);
  DeInitSideband(a1, v7);
  KeReleaseMutex((PRKMUTEX)(v2 + 736), 0);
  v10 = *(void **)(v2 + 968);
  if ( v10 )
  {
    KeWaitForSingleObject(v10, Executive, 0, 0, 0LL);
    ExFreePoolWithTag(*(PVOID *)(v2 + 968), 0x65627845u);
    *(_QWORD *)(v2 + 968) = 0LL;
  }
  if ( !*(_BYTE *)(v2 + 67) )
    v4 = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 16))(a1);
  v11 = *(struct _KSFILTERFACTORY **)(v2 + 120);
  if ( v11 )
    KsFilterFactorySetDeviceClassesState(v11, 0);
  if ( v4 < 0 )
  {
    v13 = v4;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      1u,
      0x17u,
      (__int64)&WPP_f0533e5d5f783f1fc772c257a08fb41e_Traceguids,
      a1,
      v13);
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 2) != 0 )
    return McTemplateK0q((__int64)v11, v8, v9, v4);
  return result;
}
