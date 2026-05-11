/*
 * XREFs of DeviceStart @ 0x1C0013270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001008 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001254 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qqddd @ 0x1C000159C (WPP_RECORDER_SF_qqddd.c)
 *     McTemplateK0 @ 0x1C0001954 (McTemplateK0.c)
 *     McTemplateK0zq @ 0x1C0001994 (McTemplateK0zq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 *     FilterCreateFilterFactory @ 0x1C0013EE8 (FilterCreateFilterFactory.c)
 *     RegistryGetIdleInfo @ 0x1C001A478 (RegistryGetIdleInfo.c)
 *     InitializeIrpThreadAndQueue @ 0x1C001AB38 (InitializeIrpThreadAndQueue.c)
 */

__int64 __fastcall DeviceStart(__int64 a1)
{
  __int64 v1; // rdi
  int FilterFactory; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  PULONG v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+50h] [rbp-28h] BYREF
  _DWORD v18[3]; // [rsp+54h] [rbp-24h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  FilterFactory = 0;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0xCu,
    (__int64)&WPP_82983b416a25373f9b248cd84a8a7ba2_Traceguids,
    a1);
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0(v5, &EXBUS_DEVICE_START_ENTER, v6);
  if ( !*(_BYTE *)(a1 + 48) )
  {
    *(_DWORD *)(v1 + 512) = 1;
    *(_BYTE *)(v1 + 64) = 0;
    FilterFactory = (*(__int64 (__fastcall **)(__int64))(pExtBusDeviceDispatchTable + 8))(a1);
    if ( FilterFactory < 0 )
      goto LABEL_10;
    FilterFactory = FilterCreateFilterFactory(a1);
    if ( FilterFactory < 0 )
      goto LABEL_10;
    if ( (int)RegistryGetIdleInfo(*(_QWORD *)(a1 + 32), &v19, &v17, v18) >= 0 )
    {
      *(_DWORD *)(v1 + 520) = v19;
      *(_DWORD *)(v1 + 524) = v17;
      *(_DWORD *)(v1 + 516) = v18[0];
    }
    v7 = PoRegisterDeviceForIdleDetection(
           *(PDEVICE_OBJECT *)(a1 + 32),
           *(_DWORD *)(v1 + 520),
           *(_DWORD *)(v1 + 524),
           (DEVICE_POWER_STATE)*(_DWORD *)(v1 + 516));
    *(_QWORD *)(v1 + 504) = v7;
    HIDWORD(v16) = HIDWORD(v7);
    WPP_RECORDER_SF_qqddd((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v14);
    v12 = InitializeIrpThreadAndQueue(v11, v1);
    FilterFactory = v12;
    if ( v12 < 0 )
    {
      LODWORD(v16) = v12;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xEu,
        (__int64)&WPP_82983b416a25373f9b248cd84a8a7ba2_Traceguids,
        a1,
        v16);
LABEL_10:
      *(_BYTE *)(v1 + 64) = 1;
      LODWORD(v15) = FilterFactory;
      WPP_RECORDER_SF_qd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xFu,
        (__int64)&WPP_82983b416a25373f9b248cd84a8a7ba2_Traceguids,
        a1,
        v15);
    }
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink & 1) != 0 )
    McTemplateK0zq(v5, v4, v6, *(const wchar_t **)(v1 + 24), FilterFactory);
  return (unsigned int)FilterFactory;
}
