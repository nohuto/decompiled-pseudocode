/*
 * XREFs of ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C010C3CC
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DAA4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCC38 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0014168 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(char *Tag, struct MONITOR_MGR *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  int v6; // ecx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v10; // rax
  _OWORD v11[2]; // [rsp+30h] [rbp-28h] BYREF

  *((_QWORD *)Tag + 2) = a2;
  v3 = 0xFFFFFFFFLL;
  *((_DWORD *)Tag + 7) = -1;
  *((_DWORD *)Tag + 8) = -2;
  *((_QWORD *)Tag + 5) = 0LL;
  *((_QWORD *)Tag + 6) = 0LL;
  *((_QWORD *)Tag + 7) = 0LL;
  *((_QWORD *)Tag + 8) = 0LL;
  *((_DWORD *)Tag + 26) = 3;
  *(_QWORD *)(Tag + 108) = 1LL;
  *((_DWORD *)Tag + 29) = 0;
  *((_QWORD *)Tag + 15) = 0LL;
  *((_QWORD *)Tag + 16) = 0LL;
  *((_DWORD *)Tag + 34) = 0;
  *((_QWORD *)Tag + 18) = 0LL;
  *((_QWORD *)Tag + 23) = Tag + 176;
  *((_QWORD *)Tag + 22) = Tag + 176;
  *((_DWORD *)Tag + 48) = 0;
  *((_DWORD *)Tag + 49) = 1024;
  *((_QWORD *)Tag + 26) = Tag + 200;
  *((_QWORD *)Tag + 25) = Tag + 200;
  *((_QWORD *)Tag + 27) = 0LL;
  *((_QWORD *)Tag + 29) = Tag + 224;
  *((_QWORD *)Tag + 28) = Tag + 224;
  *((_DWORD *)Tag + 60) = 0;
  *((_QWORD *)Tag + 32) = Tag + 248;
  *((_QWORD *)Tag + 31) = Tag + 248;
  *((_QWORD *)Tag + 34) = Tag + 264;
  *((_QWORD *)Tag + 33) = Tag + 264;
  *((_QWORD *)Tag + 52) = 0LL;
  *((_QWORD *)Tag + 53) = 0LL;
  *((_QWORD *)Tag + 54) = 0LL;
  *((_QWORD *)Tag + 55) = 0LL;
  Tag[456] = 0;
  *((_QWORD *)Tag + 58) = 0LL;
  *((_DWORD *)Tag + 118) = -1;
  *((_QWORD *)Tag + 60) = 0LL;
  *((_DWORD *)Tag + 122) = 0;
  Tag[492] = 0;
  *((_QWORD *)Tag + 68) = 0LL;
  *((_QWORD *)Tag + 69) = 0LL;
  *((_DWORD *)Tag + 140) = 0;
  *((_WORD *)Tag + 282) = 0;
  *((_DWORD *)Tag + 157) = 0;
  *((_DWORD *)Tag + 161) = 1000;
  *((_WORD *)Tag + 324) = 0;
  Tag[650] = 0;
  *((_DWORD *)Tag + 163) = 0;
  *((_QWORD *)Tag + 106) = 0LL;
  *((_QWORD *)Tag + 107) = 0LL;
  *((_QWORD *)Tag + 108) = 0LL;
  *((_QWORD *)Tag + 109) = 0LL;
  *((_QWORD *)Tag + 110) = 0LL;
  *((_QWORD *)Tag + 111) = 0LL;
  *((_QWORD *)Tag + 112) = 0LL;
  *((_QWORD *)Tag + 113) = 0LL;
  *((_QWORD *)Tag + 114) = 0LL;
  *((_QWORD *)Tag + 115) = 0LL;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    WdLogEvent5_WdAssertion(v10);
  }
  v5 = WdLogNewEntry5_WdTrace(v3, a2);
  *(_QWORD *)(v5 + 24) = Tag;
  *(_QWORD *)(v5 + 32) = a2;
  *((_DWORD *)Tag + 6) = 0;
  v6 = *((_BYTE *)a2 + 5) != 0 ? 0x40 : 0;
  *(_QWORD *)(Tag + 588) = 0LL;
  *((_DWORD *)Tag + 6) = v6;
  *(_OWORD *)(Tag + 568) = 0uLL;
  *((_DWORD *)Tag + 146) = 0;
  memset(v11, 0, sizeof(v11));
  v7 = v11[0];
  *((_QWORD *)Tag + 79) = 0LL;
  v8 = v11[1];
  *((_DWORD *)Tag + 160) = 0;
  *(_OWORD *)(Tag + 596) = v7;
  *(_OWORD *)(Tag + 612) = v8;
  *((_QWORD *)Tag + 1) = Tag;
  *(_QWORD *)Tag = Tag;
  ExInitializeResourceLite((PERESOURCE)(Tag + 280));
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)Tag + 12, 0x4D677844u, 0, 0, 0x20u);
  *((_QWORD *)Tag + 10) = 0LL;
  *((_DWORD *)Tag + 18) = 0;
  *((_QWORD *)Tag + 12) = 0LL;
  *((_DWORD *)Tag + 22) = 0;
  *((_QWORD *)Tag + 63) = 0LL;
  *((_DWORD *)Tag + 124) = 0;
  *((_QWORD *)Tag + 65) = 0LL;
  *((_DWORD *)Tag + 128) = 0;
  *((_QWORD *)Tag + 67) = 0LL;
  *((_DWORD *)Tag + 132) = 0;
  DisplayID_Initialize((struct DisplayIDObj *)(Tag + 152), 0LL, 0);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)Tag + 12, Tag, File, 1u, 0x20u);
  return (DXGMONITOR *)Tag;
}
