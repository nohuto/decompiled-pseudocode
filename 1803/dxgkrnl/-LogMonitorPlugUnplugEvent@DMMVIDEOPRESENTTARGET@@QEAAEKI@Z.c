/*
 * XREFs of ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C0044CA0
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217CE0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(
        DMMVIDEOPRESENTTARGET *this,
        unsigned int a2,
        int a3)
{
  __int64 v3; // rax
  int v4; // r9d
  __int64 v5; // rax

  v3 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)this + (*((_DWORD *)this + 96) & 0x1F) + 16) = MEMORY[0xFFFFF78000000320];
  v4 = *((_DWORD *)this + 96) + 1;
  *((_DWORD *)this + 96) = v4;
  if ( !a3 )
    return 0;
  v5 = v3 > a2 ? v3 - a2 : 0LL;
  if ( *((_QWORD *)this + (((unsigned __int8)v4 - (unsigned __int8)a3) & 0x1F) + 16) <= v5 || *((_BYTE *)this + 388) )
    return 0;
  *((_BYTE *)this + 388) = 1;
  return 1;
}
