/*
 * XREFs of ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C02350DC
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022A9B0 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022ABC0 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C00480F0 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(char *Tag, struct MONITOR_MGR *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  char *v13; // rdx
  _BYTE *v14; // r8
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _OWORD v26[2]; // [rsp+48h] [rbp-170h] BYREF
  _BYTE v27[320]; // [rsp+70h] [rbp-148h] BYREF

  *((_QWORD *)Tag + 4) = a2;
  v5 = 0xFFFFFFFFLL;
  *((_DWORD *)Tag + 11) = -1;
  *((_DWORD *)Tag + 12) = -2;
  *((_QWORD *)Tag + 7) = 0LL;
  *((_QWORD *)Tag + 8) = 0LL;
  *((_QWORD *)Tag + 9) = 0LL;
  *((_QWORD *)Tag + 10) = 0LL;
  *((_DWORD *)Tag + 30) = 3;
  *(_QWORD *)(Tag + 124) = 1LL;
  *((_DWORD *)Tag + 33) = 0;
  *((_QWORD *)Tag + 17) = 0LL;
  *((_QWORD *)Tag + 18) = 0LL;
  *((_DWORD *)Tag + 38) = 0;
  *((_QWORD *)Tag + 20) = 0LL;
  *((_QWORD *)Tag + 25) = Tag + 192;
  *((_QWORD *)Tag + 24) = Tag + 192;
  *((_DWORD *)Tag + 52) = 0;
  *((_DWORD *)Tag + 53) = 1024;
  *((_QWORD *)Tag + 28) = Tag + 216;
  *((_QWORD *)Tag + 27) = Tag + 216;
  *((_QWORD *)Tag + 29) = 0LL;
  *((_QWORD *)Tag + 31) = Tag + 240;
  *((_QWORD *)Tag + 30) = Tag + 240;
  *((_DWORD *)Tag + 64) = 0;
  *((_QWORD *)Tag + 34) = Tag + 264;
  *((_QWORD *)Tag + 33) = Tag + 264;
  *((_QWORD *)Tag + 36) = Tag + 280;
  *((_QWORD *)Tag + 35) = Tag + 280;
  *((_QWORD *)Tag + 54) = 0LL;
  *((_QWORD *)Tag + 55) = 0LL;
  *((_QWORD *)Tag + 56) = 0LL;
  *((_QWORD *)Tag + 57) = 0LL;
  Tag[476] = 0;
  *((_QWORD *)Tag + 60) = 0LL;
  *((_DWORD *)Tag + 122) = -1;
  *((_QWORD *)Tag + 62) = 0LL;
  *((_DWORD *)Tag + 126) = 0;
  Tag[508] = 0;
  *((_QWORD *)Tag + 70) = 0LL;
  *((_QWORD *)Tag + 71) = 0LL;
  *((_QWORD *)Tag + 72) = 0LL;
  *((_DWORD *)Tag + 162) = 0;
  *((_DWORD *)Tag + 166) = 1000;
  Tag[668] = 0;
  *((_DWORD *)Tag + 168) = 0;
  *((_WORD *)Tag + 338) = 0;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = WdLogNewEntry5_WdTrace(v5, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = Tag;
  *(_QWORD *)(v8 + 32) = a2;
  *((_DWORD *)Tag + 10) = 0;
  v9 = *((_BYTE *)a2 + 5) != 0 ? 0x40 : 0;
  *((_QWORD *)Tag + 76) = 0LL;
  *((_DWORD *)Tag + 10) = v9;
  *(_OWORD *)(Tag + 588) = 0uLL;
  *((_DWORD *)Tag + 151) = 0;
  memset(v26, 0, sizeof(v26));
  v10 = v26[0];
  *(_QWORD *)(Tag + 652) = 0LL;
  v11 = v26[1];
  *((_DWORD *)Tag + 165) = 0;
  *(_OWORD *)(Tag + 616) = v10;
  *(_OWORD *)(Tag + 632) = v11;
  *((_QWORD *)Tag + 3) = Tag + 16;
  *((_QWORD *)Tag + 2) = Tag + 16;
  ExInitializeResourceLite((PERESOURCE)(Tag + 296));
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 400), 0x4D677844u, 0, 0, 0x20u);
  *((_QWORD *)Tag + 12) = 0LL;
  *((_DWORD *)Tag + 22) = 0;
  *((_QWORD *)Tag + 14) = 0LL;
  *((_DWORD *)Tag + 26) = 0;
  *((_QWORD *)Tag + 65) = 0LL;
  *((_DWORD *)Tag + 128) = 0;
  *((_QWORD *)Tag + 67) = 0LL;
  *((_DWORD *)Tag + 132) = 0;
  *((_QWORD *)Tag + 69) = 0LL;
  *((_DWORD *)Tag + 136) = 0;
  memset(v27, 0, 0x13CuLL);
  v12 = 2LL;
  v13 = Tag + 680;
  v14 = v27;
  do
  {
    v15 = *((_OWORD *)v14 + 1);
    *(_OWORD *)v13 = *(_OWORD *)v14;
    v16 = *((_OWORD *)v14 + 2);
    *((_OWORD *)v13 + 1) = v15;
    v17 = *((_OWORD *)v14 + 3);
    *((_OWORD *)v13 + 2) = v16;
    v18 = *((_OWORD *)v14 + 4);
    *((_OWORD *)v13 + 3) = v17;
    v19 = *((_OWORD *)v14 + 5);
    *((_OWORD *)v13 + 4) = v18;
    v20 = *((_OWORD *)v14 + 6);
    *((_OWORD *)v13 + 5) = v19;
    v21 = *((_OWORD *)v14 + 7);
    v14 += 128;
    *((_OWORD *)v13 + 6) = v20;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v21;
    --v12;
  }
  while ( v12 );
  v22 = *((_QWORD *)v14 + 6);
  v23 = *((_OWORD *)v14 + 1);
  *(_OWORD *)v13 = *(_OWORD *)v14;
  v24 = *((_OWORD *)v14 + 2);
  *((_OWORD *)v13 + 1) = v23;
  *((_OWORD *)v13 + 2) = v24;
  *((_QWORD *)v13 + 6) = v22;
  *((_DWORD *)v13 + 14) = *((_DWORD *)v14 + 14);
  *((_QWORD *)Tag + 1) = MEMORY[0xFFFFF78000000014];
  *Tag = 0;
  DisplayID_Initialize((struct DisplayIDObj *)(Tag + 168), 0LL, 0);
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(Tag + 400), Tag, File, 1u, 0x20u);
  return (DXGMONITOR *)Tag;
}
