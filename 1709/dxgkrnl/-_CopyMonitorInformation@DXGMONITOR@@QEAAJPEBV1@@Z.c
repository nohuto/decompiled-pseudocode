/*
 * XREFs of ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0202364
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0120768 (MonitorNotifyDeviceNodeReady.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01FD878 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01092D0 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C010A268 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0200364 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0202244 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CopyMonitorInformation(DXGMONITOR *this, const struct DXGMONITOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  const struct DXGMONITOR *i; // rax
  char *v12; // rax
  void **v13; // rcx
  DXGMONITOR *v14; // rcx
  DXGMONITOR **v15; // r8
  char *v16; // rdi
  const struct DXGMONITOR *j; // rax
  __int64 v18; // rax
  _OWORD *v20; // rax
  DXGMONITOR **v21; // rdx
  DXGMONITOR *v22; // rax
  char *v23; // rdi
  PVOID v24; // rax
  void *v25; // rcx

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 104) == 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v6, v7);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this);
  if ( *((_DWORD *)this + 48) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_DWORD *)this + 60) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ *((_DWORD *)a2 + 6)) & 8;
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  for ( i = (const struct DXGMONITOR *)*((_QWORD *)a2 + 25);
        i != (const struct DXGMONITOR *)((char *)a2 + 200);
        i = (const struct DXGMONITOR *)*((_QWORD *)v16 + 12) )
  {
    v16 = (char *)i - 96;
    if ( !i )
      v16 = 0LL;
    if ( !v16 )
      break;
    v12 = (char *)operator new(0x78uLL, 0x4D677844u, PagedPool);
    if ( !v12 )
      goto LABEL_21;
    v14 = (DXGMONITOR *)(v12 + 96);
    *(_OWORD *)v12 = *(_OWORD *)v16;
    *((_OWORD *)v12 + 1) = *((_OWORD *)v16 + 1);
    *((_OWORD *)v12 + 2) = *((_OWORD *)v16 + 2);
    *((_OWORD *)v12 + 3) = *((_OWORD *)v16 + 3);
    *((_OWORD *)v12 + 4) = *((_OWORD *)v16 + 4);
    *((_OWORD *)v12 + 5) = *((_OWORD *)v16 + 5);
    *((_OWORD *)v12 + 6) = *((_OWORD *)v16 + 6);
    *((_QWORD *)v12 + 14) = *((_QWORD *)v16 + 14);
    v15 = (DXGMONITOR **)*((_QWORD *)this + 26);
    if ( *v15 != (DXGMONITOR *)((char *)this + 200) )
      __fastfail(3u);
    *(_QWORD *)v14 = (char *)this + 200;
    *((_QWORD *)v12 + 13) = v15;
    *v15 = v14;
    *((_QWORD *)this + 26) = v14;
    ++*((_DWORD *)this + 48);
    if ( v16 == *((char **)a2 + 27) )
      *((_QWORD *)this + 27) = v12;
  }
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  for ( j = (const struct DXGMONITOR *)*((_QWORD *)a2 + 31);
        j != (const struct DXGMONITOR *)((char *)a2 + 248);
        j = (const struct DXGMONITOR *)*((_QWORD *)v23 + 6) )
  {
    v23 = (char *)j - 48;
    if ( !j )
      v23 = 0LL;
    if ( !v23 )
      break;
    v20 = operator new(0x40uLL, 0x4D677844u, PagedPool);
    if ( !v20 )
      goto LABEL_21;
    *v20 = *(_OWORD *)v23;
    v20[1] = *((_OWORD *)v23 + 1);
    v20[2] = *((_OWORD *)v23 + 2);
    v20[3] = *((_OWORD *)v23 + 3);
    v21 = (DXGMONITOR **)*((_QWORD *)this + 32);
    v22 = (DXGMONITOR *)(v20 + 3);
    if ( *v21 != (DXGMONITOR *)((char *)this + 248) )
      __fastfail(3u);
    *(_QWORD *)v22 = (char *)this + 248;
    *((_QWORD *)v22 + 1) = v21;
    *v21 = v22;
    *((_QWORD *)this + 32) = v22;
    ++*((_DWORD *)this + 60);
  }
  if ( *((_QWORD *)a2 + 16) )
  {
    v24 = operator new(8uLL, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 15) = v24;
    if ( !v24
      || (**((_QWORD **)this + 15) = operator new(0x9FuLL, 0x4D677844u, PagedPool),
          v13 = (void **)*((_QWORD *)this + 15),
          !*v13) )
    {
LABEL_21:
      v18 = WdLogNewEntry5_WdLowResource(v13);
      WdLogEvent5_WdLowResource(v18);
      return 3221225495LL;
    }
    *((_DWORD *)this + 28) = 1;
    v25 = *v13;
    *((_QWORD *)this + 16) = v25;
    memmove(v25, *((const void **)a2 + 16), 0x9FuLL);
  }
  return 0LL;
}
