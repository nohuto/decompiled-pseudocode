/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3F28
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068F08 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180134160 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013D770 (-Reinitialize@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 *     ?UpdateFrameIndices@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013E70C (-UpdateFrameIndices@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820 (-UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800289FC (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // rdi
  __int64 j; // rdi
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v4; // rcx

  memset_0(this, 0, 0x4A8uLL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 304); i = (unsigned int)(i + 1) )
    WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)this + 149) + 8 * i));
  *((_DWORD *)this + 304) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1192, 8u);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 312); j = (unsigned int)(j + 1) )
  {
    v4 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 153) + 8 * j);
    if ( v4 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v4);
  }
  *((_DWORD *)this + 312) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1224, 8u);
  CFrameInfo::ReleaseResponses(this);
}
