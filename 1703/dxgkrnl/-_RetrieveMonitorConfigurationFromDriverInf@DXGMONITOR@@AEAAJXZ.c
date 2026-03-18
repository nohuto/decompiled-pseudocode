/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0107C3C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01089B4 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0107D1C (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(PDEVICE_OBJECT *this)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  DeviceRegKey = 0LL;
  if ( this[5] && ((_DWORD)this[3] & 0x10) != 0 )
  {
    v3 = IoOpenDeviceRegistryKey(this[5], 2u, 0x20019u, &DeviceRegKey);
    v6 = v3;
    if ( v3 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v8 + 24) = v6;
      WdLogEvent5_WdError(v8);
    }
    else
    {
      LODWORD(v6) = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry((DXGMONITOR *)this, DeviceRegKey, 1u);
    }
    v2 = DeviceRegKey;
  }
  else
  {
    LODWORD(v6) = -1073741275;
  }
  if ( v2 )
    ZwClose(v2);
  return (unsigned int)v6;
}
