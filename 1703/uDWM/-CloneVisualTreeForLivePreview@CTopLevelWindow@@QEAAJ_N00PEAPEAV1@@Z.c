/*
 * XREFs of ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000B6E8
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000A0E4 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000AE30 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180038224 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004C608 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006E8CC (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18008054C (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18009DBF8 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18009E31C (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18000BF6C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18000C124 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??$?0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18000C2A0 (--$-0$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180024A00 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CloneVisualTreeForLivePreview(
        CTopLevelWindow *this,
        bool a2,
        __int64 a3,
        __int64 a4,
        struct CTopLevelWindow **a5)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // r15d
  char *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  bool v24; // al
  CVisual *v25; // r14
  _BYTE v26[320]; // [rsp+30h] [rbp-188h] BYREF

  WindowFrameLoggingTelemetry::CloneWindow::CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v26);
  v7 = *((_QWORD *)this + 35);
  if ( v7 )
  {
    v24 = !a2 && *(_DWORD *)(v7 + 272);
    *(_BYTE *)(v7 + 84) &= ~8u;
    *(_BYTE *)(v7 + 84) |= 8 * !v24;
  }
  v8 = *((_QWORD *)this + 36);
  if ( v8 )
  {
    *(_BYTE *)(v8 + 84) &= ~8u;
    *(_BYTE *)(v8 + 84) |= 8 * a2;
  }
  v9 = *((_QWORD *)this + 65);
  if ( v9 )
  {
    *(_BYTE *)(v9 + 84) &= ~8u;
    *(_BYTE *)(v9 + 84) |= 8 * a2;
  }
  v10 = *((_QWORD *)this + 67);
  if ( v10 )
  {
    *(_BYTE *)(v10 + 84) &= ~8u;
    *(_BYTE *)(v10 + 84) |= 8 * a2;
  }
  v11 = *((_QWORD *)this + 64);
  if ( v11 )
  {
    *(_BYTE *)(v11 + 84) &= ~8u;
    *(_BYTE *)(v11 + 84) |= 8 * a2;
  }
  v12 = 0;
  v13 = (char *)this + 480;
  do
  {
    v14 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 )
    {
      *(_BYTE *)(v14 + 84) &= ~8u;
      *(_BYTE *)(v14 + 84) |= 8 * a2;
      if ( !a2 )
      {
        v25 = *(CVisual **)v13;
        v17 = 0;
        if ( *(_QWORD *)(*(_QWORD *)v13 + 392LL) )
        {
          *((_BYTE *)v25 + 280) |= 0x40u;
          CVisual::SetDirtyFlags(v25, 0x10000u);
          v17 = CVisual::RenderRecursive(v25);
        }
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x1486u);
          goto LABEL_26;
        }
      }
    }
    ++v12;
    v13 += 8;
  }
  while ( v12 < 4 );
  v15 = *((_QWORD *)this + 33);
  if ( v15 )
    *(_BYTE *)(v15 + 84) &= ~8u;
  v16 = CTopLevelWindow::CloneVisualTree(this, a5, 1, a2, (*((_DWORD *)this + 146) & 0x20) == 0);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1497u);
  }
  else
  {
    v18 = *((_QWORD *)this + 35);
    if ( v18 )
      *(_BYTE *)(v18 + 84) &= ~8u;
    v19 = *((_QWORD *)this + 36);
    if ( v19 )
      *(_BYTE *)(v19 + 84) &= ~8u;
    v20 = *((_QWORD *)this + 65);
    if ( v20 )
      *(_BYTE *)(v20 + 84) &= ~8u;
    v21 = *((_QWORD *)this + 67);
    if ( v21 )
      *(_BYTE *)(v21 + 84) &= ~8u;
    v22 = *((_QWORD *)this + 64);
    if ( v22 )
      *(_BYTE *)(v22 + 84) &= ~8u;
  }
LABEL_26:
  wil::ActivityBase<WindowFrameLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v26, (unsigned int)v17);
  WindowFrameLoggingTelemetry::CloneWindow::~CloneWindow((WindowFrameLoggingTelemetry::CloneWindow *)v26);
  return (unsigned int)v17;
}
