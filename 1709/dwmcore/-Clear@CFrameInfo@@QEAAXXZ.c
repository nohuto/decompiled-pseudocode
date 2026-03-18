/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800BE210
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180015304 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180126338 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // rdi
  unsigned int v3; // edx
  __int64 j; // rdi
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v5; // rcx

  memset_0(this, 0, 0x498uLL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 300); i = (unsigned int)(i + 1) )
    WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)this + 147) + 8 * i));
  *((_DWORD *)this + 300) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1176, 8u);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 308); j = (unsigned int)(j + 1) )
  {
    v5 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 151) + 8 * j);
    if ( v5 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v5, v3);
  }
  *((_DWORD *)this + 308) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1208, 8u);
  CFrameInfo::ReleaseResponses(this);
}
