/*
 * XREFs of ??1DXGMONITOR@@AEAA@XZ @ 0x1C0201600
 * Callers:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C0036D94 (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01092D0 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C010A268 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0200364 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ @ 0x1C0201770 (-_CleanupMonitorCCDName@DXGMONITOR@@AEAAXXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C0201864 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0202244 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rcx

  if ( *((_DWORD *)this + 122) )
  {
    v2 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v2[3] = *((unsigned int *)this + 122);
    v2[4] = this;
    v2[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL);
    WdLogEvent5_WdError(v2);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)this + 12, this, 0x20u);
  DXGMONITOR::_DestroyTtmDevice(this);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v3, v4);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this);
  DXGMONITOR::_CleanupMonitorDescriptors(this);
  v5 = (void *)*((_QWORD *)this + 12);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)this + 12) = 0LL;
  }
  DXGMONITOR::_CleanupMonitorCCDName(this);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 280));
}
