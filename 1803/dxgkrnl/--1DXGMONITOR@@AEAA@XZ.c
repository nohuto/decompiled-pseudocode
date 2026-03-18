/*
 * XREFs of ??1DXGMONITOR@@AEAA@XZ @ 0x1C0235428
 * Callers:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0046DA4 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0232210 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02322F4 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0235518 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C02357B0 (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02359A0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0238FA8 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C02390E4 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  GUID ActivityId; // [rsp+20h] [rbp-28h] BYREF

  EtwActivityIdControl(3u, &ActivityId);
  LOBYTE(v2) = 1;
  DXGMONITOR::LogMonitorObjectOnOffState(this, &ActivityId, 0LL, v2);
  if ( *((_DWORD *)this + 126) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(v3);
    v4[3] = *((unsigned int *)this + 126);
    v4[4] = this;
    v4[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    WdLogEvent5_WdError(v4);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)((char *)this + 400), this, 0x20u);
  DXGMONITOR::_DestroyTtmDevice(this);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this);
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    operator delete[](v5);
    *((_QWORD *)this + 14) = 0LL;
  }
  DXGMONITOR::_CleanupMonitorCCDName(this);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 296));
}
