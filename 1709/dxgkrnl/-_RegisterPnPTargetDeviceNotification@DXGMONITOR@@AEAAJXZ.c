/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0109C84
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010C874 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rcx
  PVOID *v4; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  struct _DEVICE_OBJECT *v8; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v10; // r9
  PVOID v11; // r8
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  DXGMONITOR *v17; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( *((_QWORD *)this + 6) )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v3);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdDmmEvent(v19);
    return 0LL;
  }
  else
  {
    DeviceObject = 0LL;
    v4 = (PVOID *)((char *)this + 64);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 88),
                            0x80000000,
                            (PFILE_OBJECT *)this + 8,
                            &DeviceObject);
    v7 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v20 = WdLogNewEntry5_WdDmmEvent(v6);
      *(_QWORD *)(v20 + 24) = *((_QWORD *)this + 12);
      WdLogEvent5_WdDmmEvent(v20);
    }
    else if ( DeviceObjectPointer < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v21 + 24) = *((_QWORD *)this + 12);
      *(_QWORD *)(v21 + 32) = v7;
      WdLogEvent5_WdError(v21);
    }
    else
    {
      if ( !*v4 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v22);
      }
      v8 = DeviceObject;
      if ( !DeviceObject )
      {
        v23 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v23);
        v8 = DeviceObject;
      }
      AttachedDeviceReference = IoGetAttachedDeviceReference(v8);
      v10 = g_pDriverObject;
      v11 = *v4;
      *((_QWORD *)this + 7) = AttachedDeviceReference;
      v12 = IoRegisterPlugPlayNotification(
              EventCategoryTargetDeviceChange,
              0,
              v11,
              v10,
              DXGMONITOR::_PnPTargetDeviceChangeNotification,
              DeviceObject,
              (PVOID *)this + 6);
      v7 = v12;
      if ( v12 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v24 + 24) = *((unsigned int *)this + 7);
        *(_QWORD *)(v24 + 32) = v7;
        WdLogEvent5_WdError(v24);
        ObfDereferenceObject(*v4);
        *v4 = 0LL;
      }
      else
      {
        v14 = IoRegisterDeviceInterface(
                *((PDEVICE_OBJECT *)this + 5),
                &GUID_DEVINTERFACE_MONITOR,
                0LL,
                (PUNICODE_STRING)((char *)this + 72));
        v7 = v14;
        if ( v14 < 0 || (v16 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 72), 1u), v7 = v16, v16 < 0) )
        {
          v25 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v25 + 24) = *((unsigned int *)this + 7);
          *(_QWORD *)(v25 + 32) = v7;
          WdLogEvent5_WdError(v25);
        }
        v17 = this;
        if ( *((_DWORD *)this + 104) != 1 && *((_QWORD *)this + 53) )
          v17 = (DXGMONITOR *)*((_QWORD *)this + 53);
        if ( !v17 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v26);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 280), 1u);
        DXGMONITOR::_MonitorTelemetry(v17, (*((_DWORD *)this + 6) & 0x40) == 0);
        ExReleaseResourceLite((PERESOURCE)((char *)v17 + 280));
        KeLeaveCriticalRegion();
      }
    }
    return (unsigned int)v7;
  }
}
