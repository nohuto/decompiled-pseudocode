/*
 * XREFs of ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800880F8
 * Callers:
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800845E0 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002EDF4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180032F40 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x1800872A0 (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x1800874E0 (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x180087B94 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180087EBC (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x180088390 (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementStart(
        struct CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v4; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  CWindowArrangementTransition *v6; // rcx
  struct CWindowData *v7; // r14
  struct CRenderDataVisual *RootVisualForDesktop; // r15
  int v9; // eax
  struct CVisual *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int inserted; // eax
  struct CAnimatedGlassSheet *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  const struct tagRECT *v18; // r8
  LONG v19; // ecx
  CAnimatedGlassSheet *v20; // rcx
  int started; // eax
  int updated; // eax
  CRippleEffect *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  struct tagRECT v29; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                       *((HWND *)a2 + 1));
  *((_BYTE *)this + 24) = 0;
  v7 = WindowDataByHwnd;
  if ( WindowDataByHwnd && CWindowArrangementTransition::ShouldShowTransition(v6, WindowDataByHwnd) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                             *((_QWORD *)v7 + 15));
    v9 = CWindowArrangementTransition::EnsureAnimationObjects(this);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x67u);
      return v4;
    }
    v10 = *this;
    if ( *this
      && (v11 = *((_QWORD *)v10 + 3)) != 0
      && (v12 = VisualCollection::Remove((VisualCollection *)(v11 + 32), v10), v4 = v12, v12 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x70u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                   *this,
                   *((struct CVisual **)v7 + 50),
                   0,
                   1);
      v4 = inserted;
      if ( inserted >= 0 )
      {
        v14 = this[1];
        if ( v14 )
        {
          v15 = *((_QWORD *)v14 + 3);
          if ( v15 )
          {
            v16 = VisualCollection::Remove((VisualCollection *)(v15 + 32), v14);
            v4 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x78u);
              return v4;
            }
          }
          v17 = VisualCollection::InsertRelative(
                  (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                  this[1],
                  *((struct CVisual **)v7 + 50),
                  1u,
                  1);
          v4 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x7Au);
            return v4;
          }
        }
        v18 = (const struct tagRECT *)((char *)a2 + 16);
        v19 = *((_DWORD *)a2 + 8);
        v29.top = *((_DWORD *)a2 + 9);
        v29.bottom = v29.top;
        v29.left = v19;
        v29.right = v19;
        v20 = *this;
        if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
        {
          started = CAnimatedGlassSheet::StartRectAnimation(v20, &v29, v18, 0.2);
          v4 = started;
          if ( started < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x83u);
            return v4;
          }
          updated = CAnimatedGlassSheet::UpdateAlphaAnimation(*this, 1.0, 0.1);
          v4 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x84u);
            return v4;
          }
          v23 = this[1];
          if ( v23 )
          {
            v24 = CRippleEffect::Start(v23, (const struct tagPOINT *)a2 + 4, 0.2);
            v4 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x87u);
              return v4;
            }
          }
        }
        else
        {
          v25 = CAnimatedGlassSheet::StartRectAnimation(v20, &v29, v18, 0.000001);
          v4 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0x92u);
            return v4;
          }
          v26 = CAnimatedGlassSheet::UpdateAlphaAnimation(*this, 1.0, 0.000001);
          v4 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x93u);
            return v4;
          }
        }
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          TemplateEventDescriptor((__int64)v23, (__int64)&UdwmGlassSheetAnimation_Start);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            TemplateEventDescriptor(v27, (__int64)&UdwmRippleAnimation_Start);
        }
        this[2] = (struct CAnimatedGlassSheet *)*((_QWORD *)a2 + 1);
        *((_BYTE *)this + 24) = 1;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x72u);
      }
    }
  }
  return v4;
}
