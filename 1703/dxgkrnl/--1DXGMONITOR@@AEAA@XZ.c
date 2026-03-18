/*
 * XREFs of ??1DXGMONITOR@@AEAA@XZ @ 0x1C01E6D90
 * Callers:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0045BFC (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0106D24 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0107B84 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01E5DAC (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C01E6E44 (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C01E6F38 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C01E7928 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rcx

  if ( *((_DWORD *)this + 112) )
  {
    v3 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
    v3[3] = *((unsigned int *)this + 112);
    v3[4] = this;
    v3[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL);
    WdLogEvent5_WdError(v3);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)((char *)this + 344), this, 0x20u);
  DXGMONITOR::_DestroyTtmDevice(this);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v4, v5, v6);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this, v7, v8, v9);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this, v10, v11, v12);
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  v13 = (void *)*((_QWORD *)this + 12);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)this + 12) = 0LL;
  }
  DXGMONITOR::_CleanupMonitorCCDName(this);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 240));
}
