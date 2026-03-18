/*
 * XREFs of ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0202114
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCFEC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0201980 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_UnregisterPnPTargetDeviceNotification(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rdi
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  LODWORD(v3) = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( *((_QWORD *)this + 10) )
  {
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 72), 0);
    v3 = v4;
    if ( v4 < 0 )
    {
      v6 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v6 + 24) = *((unsigned int *)this + 7);
      *(_QWORD *)(v6 + 32) = v3;
      WdLogEvent5_WdError(v6);
    }
  }
  v7 = (void *)*((_QWORD *)this + 6);
  if ( v7 )
  {
    IoUnregisterPlugPlayNotification(v7);
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((_QWORD *)this + 10) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 72));
    *((_QWORD *)this + 10) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 7);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    *((_QWORD *)this + 8) = 0LL;
  }
  return (unsigned int)v3;
}
