/*
 * XREFs of ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x180095890
 * Callers:
 *     <none>
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001B52C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180041590 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800956DC (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x180095780 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x180095798 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800957C8 (-StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800957F8 (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x180095848 (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::UpdateTransition(CIndirectTouchVisual *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // r8
  CTouchVisual *v8; // rcx

  v2 = *((_QWORD *)this + 44);
  if ( v2 )
  {
    v3 = (int)((float)*(double *)(v2 + 48) + 0.5);
    if ( v3 >= 0xF )
      v3 = 14;
    *((_DWORD *)this + 86) = v3;
    if ( *(_BYTE *)(v2 + 72) )
      CIndirectTouchVisual::StopFrameTimeline(this);
  }
  v4 = *((_QWORD *)this + 46);
  if ( v4 )
  {
    *((float *)this + 85) = *(double *)(v4 + 48);
    if ( *(_BYTE *)(v4 + 72) )
      CIndirectTouchVisual::StopOpacityTimeline(this);
  }
  v5 = *((_QWORD *)this + 45);
  if ( v5 && *(_BYTE *)(v5 + 72) )
  {
    if ( *((float *)this + 84) == 0.0
      || ((v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                  WPF::g_pProcessHeap,
                  80LL)) == 0
        ? (v7 = 0LL)
        : (_QWORD *)(CTimelineBase::CTimelineBase(
                       v6,
                       (float)(*((float *)this + 82) * *((float *)this + 84)),
                       *((float *)this + 85),
                       0.0,
                       0),
                     *v7 = &CTimeline<float>::`vftable'),
          (*((_QWORD *)this + 46) = v7) == 0LL) )
    {
      *((_DWORD *)this + 85) = 0;
    }
    CIndirectTouchVisual::StopTimeoutTimeline(this);
  }
  CIndirectTouchVisual::UpdateOpacityAndSource((CImage **)this);
  if ( !*((_QWORD *)this + 44) && !*((_QWORD *)this + 46) && !*((_QWORD *)this + 45) )
  {
    CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
    CIndirectTouchVisual::StopAllTimelines(this);
    CTouchVisual::UnRegisterGlobalTimer(v8);
  }
  return 0LL;
}
