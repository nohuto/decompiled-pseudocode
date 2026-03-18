/*
 * XREFs of ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C00358CC
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DF40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(
        DMMVIDEOPRESENTTARGET *this,
        unsigned int a2,
        int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)this + ((*((_DWORD *)this + 96))++ & 0x1F) + 16) = MEMORY[0xFFFFF78000000320];
  if ( !a3 )
    return 0;
  v4 = v3 > a2 ? v3 - a2 : 0LL;
  if ( *((_QWORD *)this + (((unsigned __int8)*((_DWORD *)this + 96) - (unsigned __int8)a3) & 0x1F) + 16) <= v4
    || *((_BYTE *)this + 388) )
  {
    return 0;
  }
  *((_BYTE *)this + 388) = 1;
  return 1;
}
