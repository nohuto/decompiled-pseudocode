/*
 * XREFs of ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x1800382A0
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180013788 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180031C10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800784F0 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000A424 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002EDF4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180032F40 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x18004A804 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004C608 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180075534 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x18007585C (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180075914 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x180075B44 (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180075F80 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ @ 0x180076380 (-_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x1800765FC (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateFinalLocation@CLivePreview@@AEAAXPEAUtagRECT@@@Z @ 0x180076CDC (-_UpdateFinalLocation@CLivePreview@@AEAAXPEAUtagRECT@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800789F8 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800836A0 (-FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180083B6C (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::Activate(
        __int64 a1,
        char a2,
        HWND a3,
        HWND a4,
        int a5,
        int a6,
        char a7,
        struct tagRECT *a8)
{
  unsigned int v12; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  __int64 v14; // rcx
  struct CWindowData *TabWindowData; // rsi
  signed int LastError; // eax
  int v18; // r9d
  DWORD v19; // r9d
  DWORD v20; // edx
  int v21; // eax
  int v22; // eax
  CDesktopManager *v23; // rax
  HMONITOR v24; // rax
  HMONITOR v25; // rbx
  bool v26; // al
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  int inserted; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  struct CVisual *v33; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned int v35; // eax
  int v36; // ecx
  __int64 v37; // rax
  int v38; // eax
  CBaseObject *v39; // rcx
  unsigned int v40; // [rsp+20h] [rbp-69h]
  __int64 v41; // [rsp+30h] [rbp-59h] BYREF
  __int64 v42; // [rsp+38h] [rbp-51h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-49h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+50h] [rbp-39h] BYREF

  v12 = 0;
  SetRectEmpty((LPRECT)(a1 + 588));
  *(_BYTE *)(a1 + 604) = 0;
  *(_BYTE *)(a1 + 283) = 0;
  GetDesktopID(1LL, &v42);
  GetDesktopID(2LL, &v41);
  if ( v42 == v41 || !a2 )
  {
    *(_QWORD *)(a1 + 288) = v41;
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                         a3);
    TabWindowData = WindowDataByHwnd;
    if ( a2 )
    {
      if ( WindowDataByHwnd
        || (TabWindowData = CWindowList::FindTabWindowData(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                              a3)) != 0LL )
      {
        a2 = *((_BYTE *)TabWindowData + 595) < 0x80u ? a2 : 0;
      }
      if ( a2 )
      {
        if ( TabWindowData
          && (*((_DWORD *)TabWindowData + 25) & 0x20000000) != 0
          && !*((_QWORD *)TabWindowData + 53)
          && !CWindowData::GetMDIOwner(TabWindowData) )
        {
          wndpl.length = 44;
          memset_0(&wndpl.flags, 0, 0x28uLL);
          SetLastError(0);
          if ( !GetWindowPlacement(*((HWND *)TabWindowData + 5), &wndpl) )
          {
            LastError = GetLastError();
            v12 = LastError;
            if ( LastError > 0 )
              v12 = (unsigned __int16)LastError | 0x80070000;
            v40 = 855;
            if ( (v12 & 0x80000000) == 0 )
              v12 = -2003304445;
            v18 = v12;
            goto LABEL_83;
          }
          if ( (wndpl.flags & 2) == 0 )
          {
            v19 = *((_DWORD *)TabWindowData + 26);
            v20 = *((_DWORD *)TabWindowData + 25);
            *(_QWORD *)&Rect.left = 0LL;
            *(_QWORD *)&Rect.right = 0LL;
            AdjustWindowRectEx(&Rect, v20, 0, v19);
            v21 = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
            if ( wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left < 0 )
              v21 = 0;
            if ( Rect.left + v21 - Rect.right <= 0 )
              goto LABEL_28;
            v22 = wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top;
            if ( wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top < 0 )
              v22 = 0;
            if ( Rect.top + v22 - Rect.bottom <= 0 )
LABEL_28:
              a2 = 0;
          }
        }
        if ( a2 )
        {
          if ( TabWindowData && (*((_BYTE *)TabWindowData + 592) & 4) != 0 )
            return v12;
          v23 = CDesktopManager::s_pDesktopManagerInstance;
          *(_QWORD *)(a1 + 536) = TabWindowData;
          *(_QWORD *)(a1 + 544) = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v23 + 51), a4);
          *(_DWORD *)(a1 + 560) = a5;
          if ( CLivePreview::_IsImmersiveAppOnTaskbar((CLivePreview *)a1) )
          {
            v24 = MonitorFromWindow(*(HWND *)(*(_QWORD *)(a1 + 536) + 40LL), 0);
            wndpl.length = 40;
            v25 = v24;
            memset_0(&wndpl.flags, 0, 0x24uLL);
            v26 = v25
               && GetMonitorInfoW(v25, (LPMONITORINFO)&wndpl)
               && (wndpl.showCmd != *((_DWORD *)TabWindowData + 13)
                || wndpl.ptMinPosition.y != *((_DWORD *)TabWindowData + 15));
            *(_BYTE *)(a1 + 283) = v26;
          }
          if ( !*(_QWORD *)(a1 + 552) )
          {
            v27 = CImmersiveState::Create((struct CImmersiveState **)(a1 + 552), *(_QWORD *)(a1 + 288));
            v12 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x37Bu);
              goto LABEL_88;
            }
          }
          v28 = *(_QWORD *)(a1 + 544);
          if ( v28 && ((*(_DWORD *)(v28 + 112) - 8) & 0xFFFFFFFD) == 0 )
            *(_QWORD *)(a1 + 544) = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 48LL);
          CLivePreview::_UpdateFinalLocation((CLivePreview *)a1, a8);
          *(_BYTE *)(a1 + 282) = a5 == 4;
          if ( *(_BYTE *)(a1 + 280) )
          {
            v32 = *(_QWORD *)(a1 + 544);
            if ( v32 )
              v33 = *(struct CVisual **)(v32 + 400);
            else
              v33 = 0LL;
            RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                                     *(_QWORD *)(a1 + 288));
            inserted = VisualCollection::InsertRelative(
                         (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                         (struct CVisual *)a1,
                         v33,
                         0,
                         1);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v40 = 931;
              goto LABEL_82;
            }
          }
          else
          {
            if ( !*(_DWORD *)(a1 + 328) )
            {
              v29 = CLivePreview::_CollectWindows((CLivePreview *)a1);
              v12 = v29;
              if ( v29 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x390u);
                goto LABEL_88;
              }
            }
            inserted = CDesktopManager::EnableLivePreviewInputHooks(1, a5 != 2);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v40 = 915;
              goto LABEL_82;
            }
            *(_DWORD *)(a1 + 296) = a6;
            *(_WORD *)(a1 + 280) = 257;
            inserted = CLivePreview::_FadeOutToGlass((CLivePreview *)a1, TabWindowData);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v40 = 920;
              goto LABEL_82;
            }
            if ( *(_DWORD *)(a1 + 328) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                TemplateEventDescriptor(v31, &UdwmLivePreviewAnimation_Start);
              NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 74), 0, 0);
            }
          }
          inserted = CLivePreview::_AnimateOpaqueVisuals((CLivePreview *)a1, TabWindowData);
          v12 = inserted;
          if ( inserted >= 0 )
            return v12;
          v40 = 934;
          goto LABEL_82;
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 280) )
      return v12;
    if ( *(_DWORD *)(a1 + 328) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor(v14, &UdwmLivePreviewAnimation_Start);
      NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 74), 0, 0);
    }
    inserted = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    v12 = inserted;
    if ( inserted >= 0 )
    {
      *(_BYTE *)(a1 + 281) = 1;
      if ( TabWindowData && (v35 = *((_DWORD *)TabWindowData + 28), v35 <= 0xA) && (v36 = 1282, _bittest(&v36, v35)) )
      {
        inserted = CLivePreview::_RemoveLauncherClones((CLivePreview *)a1);
        v12 = inserted;
        if ( inserted < 0 )
        {
          v40 = 958;
          goto LABEL_82;
        }
      }
      else
      {
        v37 = *(_QWORD *)(a1 + 552);
        if ( v37 && *(_BYTE *)(v37 + 56) && !TabWindowData )
          CLivePreview::_AnimateOpaqueVisuals((CLivePreview *)a1, 0LL);
      }
      inserted = CLivePreview::_FadeInToNormal((CLivePreview *)a1);
      v12 = inserted;
      if ( inserted >= 0 )
      {
        if ( v42 != v41 || a7 )
          CTimelineBase::JumpToFinalValue(*(CTimelineBase **)(a1 + 464));
        *(_BYTE *)(a1 + 280) = 0;
LABEL_88:
        if ( (v12 & 0x80000000) == 0 )
          return v12;
        goto LABEL_89;
      }
      v40 = 964;
      goto LABEL_82;
    }
    v40 = 949;
LABEL_82:
    v18 = inserted;
LABEL_83:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v40);
    goto LABEL_88;
  }
LABEL_89:
  while ( 1 )
  {
    v38 = CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)a1);
    v12 = v38;
    if ( v38 >= 0 )
      break;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x3DBu);
  }
  CLivePreview::_ClearAnimatedVisuals((CLivePreview *)a1);
  v39 = *(CBaseObject **)(a1 + 552);
  if ( v39 )
  {
    CBaseObject::Release(v39);
    *(_QWORD *)(a1 + 552) = 0LL;
  }
  return v12;
}
