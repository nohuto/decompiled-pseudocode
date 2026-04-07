/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180023074
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021240 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800214DC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x1800231C0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x1800232A8 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800702A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180072440 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180082794 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(const struct CWindowData **this, bool a2, char a3)
{
  unsigned int v3; // ebx
  const struct CWindowData *v6; // r11
  CLivePreview *v7; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // eax
  const struct CWindowData *v14; // rax
  int started; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( a2 && *((char *)this[41] + 595) >= 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, a2) )
    {
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 7u);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0xE2u);
    }
    else
    {
      if ( !CTopLevelWindow3D::ShouldShowTransition((CTopLevelWindow3D *)this) )
        goto LABEL_5;
      if ( !a3 )
      {
        v14 = this[41];
        if ( *((_DWORD *)v14 + 150) != 93 )
        {
LABEL_5:
          if ( !this[45] )
          {
            v6 = this[41];
            v7 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59);
            if ( !*((_BYTE *)v7 + 280) || !v6 || !CLivePreview::_IsInLivePreview(v7, this[41]) )
            {
              v9 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v6 + 49), 1);
              v3 = v9;
              if ( v9 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xF1u);
            }
          }
          return v3;
        }
        *((_DWORD *)v14 + 150) = 4095;
      }
      if ( this[45] )
      {
        v16 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE9,
            (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v16,
            v18);
      }
      v13 = CTopLevelWindow3D::StartAnimation((__int64)this, 1u);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xEBu);
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, 0) )
  {
    v17 = CTopLevelWindow3D::StartDelayHideAnimation((CTopLevelWindow3D *)this);
    v3 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xF9u);
  }
  else if ( !this[45] || *((_DWORD *)this + 92) != 3 )
  {
    v10 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x102u);
    }
    else
    {
      v11 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[41] + 49), 0);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x104u);
    }
  }
  return v3;
}
