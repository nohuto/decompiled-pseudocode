/*
 * XREFs of ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0238468
 * Callers:
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022AF74 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B610 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0237460 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_UnregisterPnPTargetDeviceNotification(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  LODWORD(v5) = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_QWORD *)this + 12) )
  {
    v6 = IoSetDeviceInterfaceState((PUNICODE_STRING)((char *)this + 88), 0);
    v5 = v6;
    if ( v6 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = *((unsigned int *)this + 11);
      *(_QWORD *)(v8 + 32) = v5;
      WdLogEvent5_WdError(v8);
    }
  }
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    IoUnregisterPlugPlayNotification(v9);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 12) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)this + 88));
    *((_QWORD *)this + 12) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 9);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    *((_QWORD *)this + 9) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 10);
  if ( v11 )
  {
    ObfDereferenceObject(v11);
    *((_QWORD *)this + 10) = 0LL;
  }
  return (unsigned int)v5;
}
