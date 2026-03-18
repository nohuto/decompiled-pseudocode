/*
 * XREFs of EtwTracPowerOnMonitoreBegin @ 0x1C00657C0
 * Callers:
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00D63C8 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTracPowerOnMonitoreBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_q(a1, &PowerOnMonitorBegin, a3, (unsigned int)a1);
  return result;
}
