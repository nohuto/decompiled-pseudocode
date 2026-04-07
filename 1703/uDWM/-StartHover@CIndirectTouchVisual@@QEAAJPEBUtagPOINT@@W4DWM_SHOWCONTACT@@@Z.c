/*
 * XREFs of ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F3EC
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180089C38 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001B52C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006F6F4 (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FBD8 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800956DC (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x180095780 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x180095848 (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::StartHover(__int64 a1)
{
  CIndirectTouchVisual *v2; // rcx
  int v3; // r8d
  const struct tagPOINT *v4; // r9
  __int64 v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // r8
  int v9; // eax
  int v10; // edi
  CIndirectTouchVisual *v11; // rcx

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *((_DWORD *)v2 + 87) = v3;
  CIndirectTouchVisual::UpdateLocation(v2, v4);
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v5 )
  {
    CTimelineBase::CTimelineBase(v5, *(float *)(a1 + 324), (float)*(int *)(a1 + 344), 0.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 352) = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x80u);
    goto LABEL_16;
  }
  v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v7 )
  {
    CTimelineBase::CTimelineBase(v7, *(float *)(a1 + 324), *(float *)(a1 + 340), 1.0, 0);
    *v8 = &CTimeline<float>::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 368) = v8;
  if ( !v8 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x83u);
LABEL_16:
    CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
    *(_DWORD *)(a1 + 344) = 0;
    *(_DWORD *)(a1 + 340) = 1065353216;
    CIndirectTouchVisual::UpdateOpacityAndSource(v11);
    return 0LL;
  }
  v9 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v10 = v9;
  if ( v9 >= 0 )
    CIndirectTouchVisual::SetETWAnimation(a1, 2LL);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x85u);
  if ( v10 < 0 )
    goto LABEL_16;
  return 0LL;
}
