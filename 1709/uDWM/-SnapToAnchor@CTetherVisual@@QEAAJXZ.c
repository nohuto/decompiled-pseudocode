/*
 * XREFs of ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180088078
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800826C0 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180083130 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180030FF0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x180088160 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18008A048 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::SnapToAnchor(CTetherVisual *this)
{
  __int64 v1; // rax
  bool v3; // zf
  char v4; // al
  __int64 v5; // rax
  _QWORD *v6; // r8
  unsigned int v7; // ebx
  int v8; // eax

  v1 = *((_QWORD *)this + 49);
  if ( v1 )
  {
    v3 = (*(_DWORD *)(v1 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v5 )
  {
    CTimelineBase::CTimelineBase(v5, *((float *)this + 102), 1.0, 0.0, 2);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 49) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x146u);
LABEL_12:
    CTetherVisual::Stop(this);
    return v7;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x148u);
    goto LABEL_12;
  }
  return v7;
}
