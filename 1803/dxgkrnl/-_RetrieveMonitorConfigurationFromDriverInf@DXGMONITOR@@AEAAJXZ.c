/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C023357C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236E24 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0233678 (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(PDEVICE_OBJECT *this)
{
  void *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  DeviceRegKey = 0LL;
  if ( this[7] && ((_DWORD)this[5] & 0x10) != 0 )
  {
    v3 = IoOpenDeviceRegistryKey(this[7], 2u, 0x20019u, &DeviceRegKey);
    v5 = v3;
    if ( v3 >= 0 )
    {
      LODWORD(v5) = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry((DXGMONITOR *)this, DeviceRegKey, 1u);
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = v5;
      WdLogEvent5_WdError(v6);
    }
    v2 = DeviceRegKey;
  }
  else
  {
    LODWORD(v5) = -1073741275;
  }
  if ( v2 )
    ZwClose(v2);
  return (unsigned int)v5;
}
