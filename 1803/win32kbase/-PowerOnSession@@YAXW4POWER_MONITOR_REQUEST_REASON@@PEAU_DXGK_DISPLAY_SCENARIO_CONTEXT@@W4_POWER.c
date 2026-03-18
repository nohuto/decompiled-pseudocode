/*
 * XREFs of ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00A29A8
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     PowerInputEvent @ 0x1C006CD20 (PowerInputEvent.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A31F8 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     SqmPowerState @ 0x1C00A5330 (SqmPowerState.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00AB574 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C00AC6B8 (EtwTracePowerOnMonitorEnd.c)
 */

__int64 __fastcall PowerOnSession(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, int a3)
{
  int v4; // ebx
  int v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = a3;
  v4 = 0;
  EtwTracPowerOnMonitoreBegin(0LL);
  if ( !gProtocolType )
  {
    v6 = 1;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v6, 4LL, 0LL, 0LL, 0, 0);
    v4 = 1;
    PowerInputEvent(1);
    if ( gSqmIsOptedIn )
      SqmPowerState();
  }
  UpdateSessionPowerState(1, a1);
  if ( v4 )
  {
    v6 = 3;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v6, 4LL, 0LL, 0LL, 0, 0);
  }
  return EtwTracePowerOnMonitorEnd(0LL);
}
