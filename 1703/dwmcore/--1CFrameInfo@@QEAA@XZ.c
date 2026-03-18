/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x18013B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800289FC (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800B3EEC (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  __int64 i; // rbx
  __int64 j; // rbx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v4; // rcx

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
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 157);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 153);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 149);
}
