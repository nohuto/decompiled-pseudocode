/*
 * XREFs of ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C0108FA8
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115624 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2478 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(char *Tag, struct MONITOR_MGR *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  int v8; // ecx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v12; // rax
  _OWORD v13[2]; // [rsp+30h] [rbp-28h] BYREF

  *((_QWORD *)Tag + 2) = a2;
  v5 = 0xFFFFFFFFLL;
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
  *((_QWORD *)Tag + 18) = Tag + 136;
  *((_QWORD *)Tag + 17) = Tag + 136;
  *((_DWORD *)Tag + 38) = 0;
  *((_DWORD *)Tag + 39) = 1024;
  *((_QWORD *)Tag + 21) = Tag + 160;
  *((_QWORD *)Tag + 20) = Tag + 160;
  *((_QWORD *)Tag + 22) = 0LL;
  *((_QWORD *)Tag + 24) = Tag + 184;
  *((_QWORD *)Tag + 23) = Tag + 184;
  *((_DWORD *)Tag + 50) = 0;
  *((_QWORD *)Tag + 27) = Tag + 208;
  *((_QWORD *)Tag + 26) = Tag + 208;
  *((_QWORD *)Tag + 29) = Tag + 224;
  *((_QWORD *)Tag + 28) = Tag + 224;
  *((_QWORD *)Tag + 47) = 0LL;
  *((_QWORD *)Tag + 48) = 0LL;
  *((_QWORD *)Tag + 49) = 0LL;
  *((_QWORD *)Tag + 50) = 0LL;
  Tag[416] = 0;
  *((_QWORD *)Tag + 53) = 0LL;
  *((_DWORD *)Tag + 108) = -1;
  *((_QWORD *)Tag + 55) = 0LL;
  *((_DWORD *)Tag + 112) = 0;
  Tag[452] = 0;
  *((_QWORD *)Tag + 63) = 0LL;
  *((_QWORD *)Tag + 64) = 0LL;
  *((_DWORD *)Tag + 130) = 0;
  *((_WORD *)Tag + 262) = 0;
  *((_DWORD *)Tag + 147) = 0;
  *((_WORD *)Tag + 302) = 0;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  v7 = WdLogNewEntry5_WdTrace(v5, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = Tag;
  *(_QWORD *)(v7 + 32) = a2;
  *((_DWORD *)Tag + 6) = 0;
  v8 = *((_BYTE *)a2 + 5) != 0 ? 0x40 : 0;
  *(_QWORD *)(Tag + 548) = 0LL;
  *((_DWORD *)Tag + 6) = v8;
  *((_OWORD *)Tag + 33) = 0uLL;
  *((_DWORD *)Tag + 136) = 0;
  memset(v13, 0, sizeof(v13));
  v9 = v13[0];
  *((_QWORD *)Tag + 74) = 0LL;
  v10 = v13[1];
  *((_DWORD *)Tag + 150) = 0;
  *(_OWORD *)(Tag + 556) = v9;
  *(_OWORD *)(Tag + 572) = v10;
  *((_QWORD *)Tag + 1) = Tag;
  *(_QWORD *)Tag = Tag;
  ExInitializeResourceLite((PERESOURCE)(Tag + 240));
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 344), 0x4D677844u, 0, 0, 0x20u);
  *((_QWORD *)Tag + 10) = 0LL;
  *((_DWORD *)Tag + 18) = 0;
  *((_QWORD *)Tag + 12) = 0LL;
  *((_DWORD *)Tag + 22) = 0;
  *((_QWORD *)Tag + 58) = 0LL;
  *((_DWORD *)Tag + 114) = 0;
  *((_QWORD *)Tag + 60) = 0LL;
  *((_DWORD *)Tag + 118) = 0;
  *((_QWORD *)Tag + 62) = 0LL;
  *((_DWORD *)Tag + 122) = 0;
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 344), Tag, File, 1u, 0x20u);
  return (DXGMONITOR *)Tag;
}
