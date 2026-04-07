/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E490
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030490 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18001692C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18002C96C (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002CCB8 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18002E244 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002E660 (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x18002E978 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800720D0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074B18 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800763BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  int v3; // ecx
  int v4; // edi
  char v5; // al
  __int64 v7; // rdx
  int started; // eax
  unsigned int v9; // edi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r11
  CLivePreview *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  __int64 v19; // rcx
  bool v20; // zf
  CTopLevelWindow *v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  int v27; // eax
  unsigned int v28; // edi
  int v29; // [rsp+20h] [rbp-8h]
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
      v13 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
      if ( *((_BYTE *)v13 + 280)
        && v12
        && CLivePreview::_IsInLivePreview(v13, *((const struct CWindowData **)this + 41)) )
      {
        return 0LL;
      }
      LOBYTE(v7) = 1;
      v14 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v12 + 400), v7);
      v15 = v14;
      if ( v14 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1ED,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v14,
        v29);
      return v15;
    }
    if ( *((_BYTE *)this + 288) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 41) + 592LL) & 0x40) == 0
        && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
      {
        if ( *((_QWORD *)this + 45) )
        {
          v26 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
          if ( v26 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1CD,
              (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v26,
              v29);
        }
        started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
        v9 = started;
        if ( started < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1CF,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)started,
            v29);
          return v9;
        }
      }
    }
    else
    {
      v19 = *((_QWORD *)this + 41);
      v20 = (*(_BYTE *)(v19 + 595) & 0x10) == 0;
      v21 = *(CTopLevelWindow **)(v19 + 400);
      if ( v20 )
      {
        v22 = CTopLevelWindow::ShowWindow(v21, 0LL);
        v23 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1DE,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v22,
            v29);
          return v23;
        }
        *((_BYTE *)this + 480) = 1;
        v24 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1E0,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v24,
            v29);
          return v25;
        }
      }
      else
      {
        LOBYTE(v7) = 1;
        v27 = CTopLevelWindow::ShowWindow(v21, v7);
        v28 = v27;
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1D6,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v27,
            v29);
          return v28;
        }
        *(_BYTE *)(*((_QWORD *)this + 41) + 595LL) &= ~0x10u;
      }
    }
    v10 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1E7,
        (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v10,
        v29);
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
  v16 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
  v17 = v16;
  if ( v16 >= 0 )
  {
    *(_OWORD *)((char *)this + 308) = *(_OWORD *)(*((_QWORD *)this + 41) + 48LL);
    if ( v4 )
      v18 = 2;
    else
      v18 = 4;
    *((_DWORD *)this + 93) = v18;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1F9,
    (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)v16,
    v29);
  return v17;
}
