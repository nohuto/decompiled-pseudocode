/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800229E0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800292A0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180020E8C (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020F40 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800211E0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180022794 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180022BB0 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180022EC8 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180035F78 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180067728 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180069658 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B6BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  int v3; // ecx
  int v4; // edi
  char v5; // al
  int started; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  CLivePreview *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  bool v15; // zf
  CTopLevelWindow *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  int v22; // eax
  unsigned int v23; // esi
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edi
  const struct CWindowData *v27; // rdx
  int v28; // [rsp+20h] [rbp-8h]
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
      v11 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
      if ( *((_BYTE *)v11 + 280) )
      {
        v27 = (const struct CWindowData *)*((_QWORD *)this + 41);
        if ( v27 )
        {
          if ( CLivePreview::_IsInLivePreview(v11, v27) )
            return 0LL;
        }
      }
      v12 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(*((_QWORD *)this + 41) + 400LL), 1);
      v13 = v12;
      if ( v12 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1ED,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v12,
        v28);
      return v13;
    }
    if ( *((_BYTE *)this + 288) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 41) + 592LL) & 0x40) == 0
        && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        if ( *((_QWORD *)this + 45) )
        {
          v21 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
          if ( v21 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1CD,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v21,
              v28);
        }
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
        v8 = started;
        if ( started < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1CF,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)started,
            v28);
          return v8;
        }
      }
    }
    else
    {
      v14 = *((_QWORD *)this + 41);
      v15 = (*(_BYTE *)(v14 + 595) & 0x10) == 0;
      v16 = *(CTopLevelWindow **)(v14 + 400);
      if ( v15 )
      {
        v17 = CTopLevelWindow::ShowWindow(v16, 0);
        v18 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1DE,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v17,
            v28);
          return v18;
        }
        *((_BYTE *)this + 480) = 1;
        v19 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        v20 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1E0,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v19,
            v28);
          return v20;
        }
      }
      else
      {
        v25 = CTopLevelWindow::ShowWindow(v16, 1);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1D6,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v25,
            v28);
          return v26;
        }
        *(_BYTE *)(*((_QWORD *)this + 41) + 595LL) &= ~0x10u;
      }
    }
    v9 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1E7,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v9,
        v28);
      return v10;
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
  v22 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
  v23 = v22;
  if ( v22 >= 0 )
  {
    *(_OWORD *)((char *)this + 308) = *(_OWORD *)(*((_QWORD *)this + 41) + 48LL);
    if ( v4 )
      v24 = 2;
    else
      v24 = 4;
    *((_DWORD *)this + 93) = v24;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1F9,
    (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)v22,
    v28);
  return v23;
}
