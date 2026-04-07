/*
 * XREFs of ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F75C
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
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

__int64 __fastcall CIndirectTouchVisual::StartIdle(__int64 a1)
{
  CIndirectTouchVisual *v2; // rcx
  int v3; // r8d
  const struct tagPOINT *v4; // r9
  __int64 v5; // rax
  _QWORD *v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // r8
  int v11; // eax
  int v12; // edi
  CIndirectTouchVisual *v13; // rcx

  CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
  *((_DWORD *)v2 + 87) = v3;
  CIndirectTouchVisual::UpdateLocation(v2, v4);
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v5 )
  {
    CTimelineBase::CTimelineBase(v5, *(float *)(a1 + 328), (float)*(int *)(a1 + 344), 0.0, 0);
    *v6 = &CTimeline<float>::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(a1 + 352) = v6;
  if ( !v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xA7u);
    goto LABEL_22;
  }
  if ( *(float *)(a1 + 332) == 0.0 )
  {
    v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    if ( v7 )
    {
      CTimelineBase::CTimelineBase(v7, *(float *)(a1 + 328), *(float *)(a1 + 340), 0.0, 0);
      *v8 = &CTimeline<float>::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    *(_QWORD *)(a1 + 368) = v8;
    if ( !v8 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xAEu);
LABEL_22:
      CIndirectTouchVisual::StopAllTimelines((CIndirectTouchVisual *)a1);
      *(_DWORD *)(a1 + 340) = 0;
      *(_DWORD *)(a1 + 344) = 0;
      CIndirectTouchVisual::UpdateOpacityAndSource(v13);
      return 0LL;
    }
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    if ( v9 )
    {
      CTimelineBase::CTimelineBase(
        v9,
        (float)(*(float *)(a1 + 328) * *(float *)(a1 + 332)),
        *(float *)(a1 + 340),
        *(float *)(a1 + 340),
        0);
      *v10 = &CTimeline<float>::`vftable';
    }
    else
    {
      v10 = 0LL;
    }
    *(_QWORD *)(a1 + 360) = v10;
    if ( !v10 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0xB3u);
      goto LABEL_22;
    }
  }
  v11 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v12 = v11;
  if ( v11 >= 0 )
    CIndirectTouchVisual::SetETWAnimation(a1, 1LL);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0xB6u);
  if ( v12 < 0 )
    goto LABEL_22;
  return 0LL;
}
