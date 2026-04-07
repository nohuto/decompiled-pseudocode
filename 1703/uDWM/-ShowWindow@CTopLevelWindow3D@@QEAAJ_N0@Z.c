/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002E828
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18002CCB8 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ @ 0x18002E978 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18002EA50 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180074B18 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800763BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180081AD8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(const struct CWindowData **this, bool a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  const struct CWindowData *v7; // r11
  CLivePreview *v8; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // eax
  const struct CWindowData *v15; // rax
  int v16; // eax
  int v17; // eax
  int started; // eax
  unsigned int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 || (*((_BYTE *)this[41] + 596) & 1) != 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation((CTopLevelWindow3D *)this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0xF9u);
    }
    else if ( !this[45] || *((_DWORD *)this + 92) != 3 )
    {
      v11 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      v3 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x102u);
      }
      else
      {
        v12 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[41] + 50), 0LL);
        v3 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x104u);
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, a2) )
  {
    v16 = CTopLevelWindow3D::StartAnimation((__int64)this, 7u);
    v3 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xE2u);
  }
  else
  {
    if ( !CTopLevelWindow3D::ShouldShowTransition((CTopLevelWindow3D *)this) )
      goto LABEL_5;
    if ( !a3 )
    {
      v15 = this[41];
      if ( *((_DWORD *)v15 + 150) != 93 )
      {
LABEL_5:
        if ( !this[45] )
        {
          v7 = this[41];
          v8 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
          if ( !*((_BYTE *)v8 + 280) || !v7 || !CLivePreview::_IsInLivePreview(v8, this[41]) )
          {
            LOBYTE(v6) = 1;
            v10 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v7 + 50), v6);
            v3 = v10;
            if ( v10 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xF1u);
          }
        }
        return v3;
      }
      *((_DWORD *)v15 + 150) = 4095;
    }
    if ( this[45] )
    {
      v17 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE9,
          (unsigned int)"windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v17,
          v19);
    }
    v14 = CTopLevelWindow3D::StartAnimation((__int64)this, 1u);
    v3 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xEBu);
  }
  return v3;
}
