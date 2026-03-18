/*
 * XREFs of ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0237E70
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ @ 0x1C0234328 (-_UpdatePnPDeviceInterfaceProperties@DXGMONITOR@@AEAAJXZ.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C023626C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RegisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  PVOID *v8; // rbx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  __int64 v16; // rax
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  struct _DRIVER_OBJECT *v18; // r9
  PVOID v19; // r8
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  int updated; // eax
  NTSTATUS v26; // eax
  __int64 v27; // rax
  DXGMONITOR *v28; // rbp
  __int64 v29; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 8) )
  {
    v6 = WdLogNewEntry5_WdDmmEvent(v5);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdDmmEvent(v6);
    return 0LL;
  }
  else
  {
    DeviceObject = 0LL;
    v8 = (PVOID *)((char *)this + 80);
    DeviceObjectPointer = IoGetDeviceObjectPointer(
                            (PUNICODE_STRING)((char *)this + 104),
                            0x80000000,
                            (PFILE_OBJECT *)this + 10,
                            &DeviceObject);
    v11 = DeviceObjectPointer;
    if ( DeviceObjectPointer == -1073741772 )
    {
      v12 = WdLogNewEntry5_WdDmmEvent(v10);
      *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 14);
      WdLogEvent5_WdDmmEvent(v12);
    }
    else if ( DeviceObjectPointer >= 0 )
    {
      if ( !*v8 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v10);
        WdLogEvent5_WdAssertion(v14);
      }
      v15 = DeviceObject;
      if ( !DeviceObject )
      {
        v16 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v16);
        v15 = DeviceObject;
      }
      AttachedDeviceReference = IoGetAttachedDeviceReference(v15);
      v18 = g_pDriverObject;
      v19 = *v8;
      *((_QWORD *)this + 9) = AttachedDeviceReference;
      v20 = IoRegisterPlugPlayNotification(
              EventCategoryTargetDeviceChange,
              0,
              v19,
              v18,
              (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DXGMONITOR::_PnPTargetDeviceChangeNotification,
              DeviceObject,
              (PVOID *)this + 8);
      v11 = v20;
      if ( v20 >= 0 )
      {
        v23 = IoRegisterDeviceInterface(
                *((PDEVICE_OBJECT *)this + 7),
                &GUID_DEVINTERFACE_MONITOR,
                0LL,
                (PUNICODE_STRING)((char *)this + 88));
        v11 = v23;
        if ( v23 < 0
          || (updated = DXGMONITOR::_UpdatePnPDeviceInterfaceProperties(this), v11 = updated, updated < 0)
          || (v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 88), 1u), v11 = v26, v26 < 0) )
        {
          v27 = WdLogNewEntry5_WdError(v24);
          *(_QWORD *)(v27 + 24) = *((unsigned int *)this + 11);
          *(_QWORD *)(v27 + 32) = v11;
          WdLogEvent5_WdError(v27);
        }
        v28 = this;
        if ( *((_DWORD *)this + 108) != 1 && *((_QWORD *)this + 55) )
          v28 = (DXGMONITOR *)*((_QWORD *)this + 55);
        if ( !v28 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v24);
          WdLogEvent5_WdAssertion(v29);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)((char *)v28 + 296), 1u);
        DXGMONITOR::_MonitorTelemetry((__int64)v28, (*((_DWORD *)this + 10) & 0x40) == 0);
        ExReleaseResourceLite((PERESOURCE)((char *)v28 + 296));
        KeLeaveCriticalRegion();
      }
      else
      {
        v22 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v22 + 24) = *((unsigned int *)this + 11);
        *(_QWORD *)(v22 + 32) = v11;
        WdLogEvent5_WdError(v22);
        ObfDereferenceObject(*v8);
        *v8 = 0LL;
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 14);
      *(_QWORD *)(v13 + 32) = v11;
      WdLogEvent5_WdError(v13);
    }
    return (unsigned int)v11;
  }
}
