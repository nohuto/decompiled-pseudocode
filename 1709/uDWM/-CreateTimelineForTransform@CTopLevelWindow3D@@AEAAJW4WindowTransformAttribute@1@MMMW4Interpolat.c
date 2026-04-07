/*
 * XREFs of ?CreateTimelineForTransform@CTopLevelWindow3D@@AEAAJW4WindowTransformAttribute@1@MMMW4InterpolationMode@@@Z @ 0x180023044
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800211E0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180030FF0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::CreateTimelineForTransform(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rax
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *, size_t); // rax
  void *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r8
  bool v11; // zf
  char v12; // al

  v2 = 0;
  v3 = a2;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 376);
  if ( v5 )
  {
    v11 = (*(_DWORD *)(v5 + 8))-- == 1;
    v12 = CDesktopManager::s_fTimelineDirty;
    if ( v11 )
      v12 = 1;
    *(_QWORD *)(a1 + 8LL * a2 + 376) = 0LL;
    CDesktopManager::s_fTimelineDirty = v12;
  }
  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v6 == WPF::ProcessHeapImpl::AllocClear )
    v7 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x50uLL);
  else
    v7 = v6(WPF::g_pProcessHeap, 80LL);
  if ( v7 )
  {
    CTimelineBase::CTimelineBase(v7, v8, v7);
    *v9 = &CTimeline<float>::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 8 * v3 + 376) = v9;
  if ( !v9 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7Au);
  }
  return v2;
}
