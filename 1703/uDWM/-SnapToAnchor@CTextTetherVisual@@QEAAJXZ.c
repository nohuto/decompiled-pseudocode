/*
 * XREFs of ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FAE8
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008ACC4 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001B52C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FBD8 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x18008BFD0 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CTextTetherVisual::SnapToAnchor(CTextTetherVisual *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al
  __int64 v5; // rax
  _QWORD *v6; // r8
  unsigned int v7; // edi
  int v8; // eax

  v2 = *((_QWORD *)this + 37);
  *((_BYTE *)this + 425) = 1;
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
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
    CTimelineBase::CTimelineBase(v5, *((float *)this + 76), 1.0, 0.0, 2);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 37) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xF3u);
LABEL_12:
    CTextTetherVisual::Stop(this);
    return v7;
  }
  v8 = CTouchVisual::RegisterGlobalTimer(this);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xF5u);
    goto LABEL_12;
  }
  return v7;
}
