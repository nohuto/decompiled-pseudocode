/*
 * XREFs of ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x180087678
 * Callers:
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x1800879E0 (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180013AB0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x180087628 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x1800878B4 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StartAlphaAnimation(CAnimatedGlassSheet *this, float a2, float a3, float a4)
{
  __int64 v5; // rax
  bool v6; // zf
  char v7; // al
  __int64 v8; // rax
  _QWORD *v9; // r8
  int v10; // edi
  unsigned int v11; // eax

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
    v11 = 328;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v11);
    CAnimatedGlassSheet::StopAnimation(this);
    return (unsigned int)v10;
  }
  *((float *)this + 110) = a2;
  *((float *)this + 111) = a3;
  v10 = CAnimatedGlassSheet::RegisterGlobalTimer(this);
  if ( v10 < 0 )
  {
    v11 = 333;
    goto LABEL_12;
  }
  return (unsigned int)v10;
}
