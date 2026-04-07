/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180089470
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800816A4 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18001373C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800193BC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x1800193F0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18002FD58 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180030FF0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003B0C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x180089640 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18008A048 (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // r8
  __int64 v9; // rax
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // r8
  unsigned int v15; // [rsp+20h] [rbp-28h]

  *((struct tagPOINT *)this + 37) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d((__int64)this, &UdwmPenPressHoldVisual_Start, 0);
  v4 = (struct CBitmapSource ***)((char *)this + 328);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (__int64)this + 328);
  v7 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v15 = 56;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, v15);
    goto LABEL_17;
  }
  v8 = (_DWORD *)((char *)this + 320);
  v9 = *((_QWORD *)**v4 + 3);
  *((_QWORD *)this + 40) = v9;
  if ( (int)v9 < 1 )
    *v8 = 1;
  if ( *((int *)this + 81) < 1 )
    *((_DWORD *)this + 81) = 1;
  v10 = a2->x - *v8 / 2;
  v11 = a2->y - *((_DWORD *)this + 81) / 2;
  CVisual::SetSize(*((struct tagSIZE **)this + 39), (const struct tagSIZE *)this + 40);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 39), v10);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 39), v11);
  CImage::SetBitmapSource(*((CImage **)this + 39), **v4);
  CVisual::SetOpacity(this, 1.0);
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v12 )
  {
    CTimelineBase::CTimelineBase(v12, 0.300000011920929, 0.0, 1.0, 0);
    *v13 = &CTimeline<float>::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  *((_QWORD *)this + 38) = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x53u);
LABEL_17:
    CPenPressHoldVisual::Stop(this);
    return v7;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  v7 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v15 = 85;
    goto LABEL_16;
  }
  return v7;
}
