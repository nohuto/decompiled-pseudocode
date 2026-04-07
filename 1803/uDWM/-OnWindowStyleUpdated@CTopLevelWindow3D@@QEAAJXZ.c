/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180022CA0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028CE0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18002118C (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021240 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800214DC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180022A48 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180022E6C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x1800231C0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180038148 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800702A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180072440 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  int v3; // ecx
  int v4; // edi
  char v5; // al
  __int64 v7; // rax
  int started; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r11
  CLivePreview *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  CTopLevelWindow *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edi
  int v27; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 41);
  v3 = *(_DWORD *)(v1 + 100) & 0x20000000;
  v4 = *(_DWORD *)(v1 + 100) & 0x1000000;
  v5 = v4 != 0;
  if ( *((_BYTE *)this + 288) != (v3 != 0) )
  {
    *((_BYTE *)this + 288) = v3 != 0;
    *((_BYTE *)this + 289) = v5;
    if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
    {
      v12 = *((_QWORD *)this + 41);
      v13 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59);
      if ( *((_BYTE *)v13 + 280)
        && v12
        && CLivePreview::_IsInLivePreview(v13, *((const struct CWindowData **)this + 41)) )
      {
        return 0LL;
      }
      v14 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v12 + 392), 1);
      v15 = v14;
      if ( v14 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1ED,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v14,
        v27);
      return v15;
    }
    v7 = *((_QWORD *)this + 41);
    if ( *((_BYTE *)this + 288) )
    {
      if ( (*(_BYTE *)(v7 + 592) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        if ( *((_QWORD *)this + 45) )
        {
          v24 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
          if ( v24 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1CD,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v24,
              v27);
        }
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
        v9 = started;
        if ( started < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1CF,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)started,
            v27);
          return v9;
        }
      }
    }
    else
    {
      v16 = *(CTopLevelWindow **)(v7 + 392);
      if ( (*(_BYTE *)(v7 + 595) & 8) != 0 )
      {
        v25 = CTopLevelWindow::ShowWindow(v16, 1);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1D6,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v25,
            v27);
          return v26;
        }
        *(_BYTE *)(*((_QWORD *)this + 41) + 595LL) &= ~8u;
      }
      else
      {
        v17 = CTopLevelWindow::ShowWindow(v16, 0);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1DE,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v17,
            v27);
          return v18;
        }
        *((_BYTE *)this + 480) = 1;
        v19 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1E0,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v19,
            v27);
          return v20;
        }
      }
    }
    v10 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E7,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v10,
        v27);
      return v11;
    }
    return 0LL;
  }
  if ( v5 == *((_BYTE *)this + 289) )
    return 0LL;
  if ( v3 )
    return 0LL;
  *((_BYTE *)this + 289) = v5;
  if ( !CTopLevelWindow3D::ShouldShowTransition(this) )
    return 0LL;
  v21 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
  v22 = v21;
  if ( v21 >= 0 )
  {
    *(_OWORD *)((char *)this + 308) = *(_OWORD *)(*((_QWORD *)this + 41) + 48LL);
    if ( v4 )
      v23 = 2;
    else
      v23 = 4;
    *((_DWORD *)this + 93) = v23;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F9,
    (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)v21,
    v27);
  return v22;
}
