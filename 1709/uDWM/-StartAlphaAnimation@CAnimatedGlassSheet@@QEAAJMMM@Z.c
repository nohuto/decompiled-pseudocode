/*
 * XREFs of ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x18007E588
 * Callers:
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x18007E8E8 (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180030FF0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007E538 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18007E7C8 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StartAlphaAnimation(CAnimatedGlassSheet *this, float a2, float a3, float a4)
{
  __int64 v5; // rax
  bool v6; // zf
  char v7; // al
  __int64 v8; // rax
  _QWORD *v9; // r8
  unsigned int v10; // ebx
  int v11; // eax

  v5 = *((_QWORD *)this + 56);
  if ( v5 )
  {
    v6 = (*(_DWORD *)(v5 + 8))-- == 1;
    v7 = CDesktopManager::s_fTimelineDirty;
    if ( v6 )
      v7 = 1;
    CDesktopManager::s_fTimelineDirty = v7;
  }
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v8 )
  {
    CTimelineBase::CTimelineBase(v8, a4, a2, a3, 0);
    *v9 = &CTimeline<float>::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 56) = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x148u);
LABEL_12:
    CAnimatedGlassSheet::StopAnimation(this);
    return v10;
  }
  *((float *)this + 110) = a2;
  *((float *)this + 111) = a3;
  v11 = CAnimatedGlassSheet::RegisterGlobalTimer(this);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x14Du);
    goto LABEL_12;
  }
  return v10;
}
