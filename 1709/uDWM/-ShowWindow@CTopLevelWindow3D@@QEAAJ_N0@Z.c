/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022D78
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180020F40 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800211E0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x180022EC8 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180022F90 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180069658 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B6BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800795AC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(const struct CWindowData **this, bool a2, char a3)
{
  unsigned int v3; // ebx
  CLivePreview *v6; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // eax
  const struct CWindowData *v13; // rax
  int v14; // eax
  int v15; // eax
  const struct CWindowData *v16; // rdx
  int started; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 || (*((_BYTE *)this[41] + 596) & 1) != 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation((CTopLevelWindow3D *)this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0xF9u);
    }
    else if ( !this[45] || *((_DWORD *)this + 92) != 3 )
    {
      v9 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      v3 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x102u);
      }
      else
      {
        v10 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[41] + 50), 0);
        v3 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x104u);
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, a2) )
  {
    v14 = CTopLevelWindow3D::StartAnimation((__int64)this, 7u);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xE2u);
  }
  else
  {
    if ( !CTopLevelWindow3D::ShouldShowTransition((CTopLevelWindow3D *)this) )
      goto LABEL_5;
    if ( !a3 )
    {
      v13 = this[41];
      if ( *((_DWORD *)v13 + 150) != 93 )
      {
LABEL_5:
        if ( !this[45] )
        {
          v6 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60);
          if ( !*((_BYTE *)v6 + 280) || (v16 = this[41]) == 0LL || !CLivePreview::_IsInLivePreview(v6, v16) )
          {
            v8 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[41] + 50), 1);
            v3 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xF1u);
          }
        }
        return v3;
      }
      *((_DWORD *)v13 + 150) = 4095;
    }
    if ( this[45] )
    {
      v15 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE9,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v15,
          v18);
    }
    v12 = CTopLevelWindow3D::StartAnimation((__int64)this, 1u);
    v3 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xEBu);
  }
  return v3;
}
