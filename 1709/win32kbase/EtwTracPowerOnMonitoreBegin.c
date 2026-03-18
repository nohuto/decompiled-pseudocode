/*
 * XREFs of EtwTracPowerOnMonitoreBegin @ 0x1C0077F44
 * Callers:
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00DC7C0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     McTemplateK0q @ 0x1C00E271C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracPowerOnMonitoreBegin(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0q(a1, &PowerOnMonitorBegin, a3, (unsigned int)a1);
  return result;
}
