/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0107654
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010963C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PVOID *v9; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  struct _DEVICE_OBJECT *v16; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v18; // r9
  PVOID v19; // r8
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  DXGMONITOR *v29; // rbp
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 6) )
  {
    v31 = WdLogNewEntry5_WdDmmEvent(v6, v5, v7, v8);
    *(_QWORD *)(v31 + 24) = this;
    WdLogEvent5_WdDmmEvent(v31);
    return 0LL;
  }
  else
  {
    DeviceObject = 0LL;
    v9 = (PVOID *)((char *)this + 64);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 88),
                            0x80000000,
                            (PFILE_OBJECT *)this + 8,
                            &DeviceObject);
    v15 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v32 = WdLogNewEntry5_WdDmmEvent(v12, v11, v13, v14);
      *(_QWORD *)(v32 + 24) = *((_QWORD *)this + 12);
      WdLogEvent5_WdDmmEvent(v32);
    }
    else if ( DeviceObjectPointer < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v33 + 24) = *((_QWORD *)this + 12);
      *(_QWORD *)(v33 + 32) = v15;
      WdLogEvent5_WdError(v33);
    }
    else
    {
      if ( !*v9 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
        WdLogEvent5_WdAssertion(v34);
      }
      v16 = DeviceObject;
      if ( !DeviceObject )
      {
        v35 = WdLogNewEntry5_WdAssertion(0LL, v11, v13, v14);
        WdLogEvent5_WdAssertion(v35);
        v16 = DeviceObject;
      }
      AttachedDeviceReference = IoGetAttachedDeviceReference(v16);
      v18 = g_pDriverObject;
      v19 = *v9;
      *((_QWORD *)this + 7) = AttachedDeviceReference;
      v20 = IoRegisterPlugPlayNotification(
              EventCategoryTargetDeviceChange,
              0,
              v19,
              v18,
              DXGMONITOR::_PnPTargetDeviceChangeNotification,
              DeviceObject,
              (PVOID *)this + 6);
      v15 = v20;
      if ( v20 < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v36 + 24) = *((unsigned int *)this + 7);
        *(_QWORD *)(v36 + 32) = v15;
        WdLogEvent5_WdError(v36);
        ObfDereferenceObject(*v9);
        *v9 = 0LL;
      }
      else
      {
        v23 = IoRegisterDeviceInterface(
                *((PDEVICE_OBJECT *)this + 5),
                &GUID_DEVINTERFACE_MONITOR,
                0LL,
                (PUNICODE_STRING)((char *)this + 72));
        v15 = v23;
        if ( v23 < 0 || (v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 72), 1u), v15 = v26, v26 < 0) )
        {
          v37 = WdLogNewEntry5_WdError(v25, v24);
          *(_QWORD *)(v37 + 24) = *((unsigned int *)this + 7);
          *(_QWORD *)(v37 + 32) = v15;
          WdLogEvent5_WdError(v37);
        }
        v29 = this;
        if ( *((_DWORD *)this + 94) != 1 && *((_QWORD *)this + 48) )
          v29 = (DXGMONITOR *)*((_QWORD *)this + 48);
        if ( !v29 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
          WdLogEvent5_WdAssertion(v38);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v29 + 240), 1u);
        DXGMONITOR::_MonitorTelemetry(v29, (*((_DWORD *)this + 6) & 0x40) == 0);
        ExReleaseResourceLite((PERESOURCE)((char *)v29 + 240));
        KeLeaveCriticalRegion();
      }
    }
    return (unsigned int)v15;
  }
}
