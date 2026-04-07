/*
 * XREFs of ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F080
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x1800708B8 (-NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180089C38 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008A934 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008ACC4 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800195DC (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18001B52C (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180040D60 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180040D90 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180040DDC (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FBD8 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDirectTouchVisual::StartDown(
        __int64 a1,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        int a4)
{
  __int64 v7; // rax
  bool v8; // zf
  char v9; // al
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rax
  _QWORD *v13; // r8
  int v14; // edi
  int v15; // eax
  double v16; // xmm1_8

  *(_BYTE *)(a1 + 400) = 0;
  *(_DWORD *)(a1 + 368) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(a1, &UdwmDirectTouchDownAnimation_BeginDraw_Info);
  v7 = *(_QWORD *)(a1 + 384);
  if ( v7 )
  {
    v8 = (*(_DWORD *)(v7 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    *(_QWORD *)(a1 + 384) = 0LL;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  CDirectTouchVisual::StopDownTimeline((CDirectTouchVisual *)a1);
  v10 = *(_QWORD *)(a1 + 392);
  if ( v10 )
  {
    v8 = (*(_DWORD *)(v10 + 8))-- == 1;
    v11 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v11 = 1;
    *(_QWORD *)(a1 + 392) = 0LL;
    CDesktopManager::s_fTimelineDirty = v11;
  }
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v12 )
  {
    CTimelineBase::CTimelineBase(v12, *(float *)(a1 + 364), 0.0, 0.0, 0);
    *v13 = &CTimeline<float>::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(a1 + 392) = v13;
  if ( !v13 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x67u);
LABEL_23:
    CDirectTouchVisual::StopTimer((CDirectTouchVisual *)a1);
    CVisual::SetOpacity((CVisual *)a1, 0.0);
    return (unsigned int)v14;
  }
  v15 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v14 = v15;
  if ( v15 >= 0 )
  {
    CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, *(float *)(a1 + 352));
    CImage::SetBitmapSource(*(CImage **)(a1 + 408), *(struct CBitmapSource **)(a1 + 416));
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
      v16 = *(float *)(a1 + 344);
    else
      v16 = 0.0;
    CVisual::SetOpacity((CVisual *)a1, v16);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x69u);
  }
  if ( v14 < 0 )
    goto LABEL_23;
  return (unsigned int)v14;
}
