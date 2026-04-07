/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x180098C1C
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x180085114 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180085DFC (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180004ED0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180004F70 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000677C (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180011A54 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180011CBC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180025A44 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180025B30 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180025D68 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180027300 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18002BAB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180082AF0 (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180099B58 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x180099E58 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this)
{
  unsigned int v2; // ebx
  __int128 *v3; // rdx
  CWindowList *v4; // r15
  bool v5; // dl
  CAnimatedTransitionVisual **v6; // rsi
  LONG v7; // r14d
  LONG v8; // eax
  struct CVisual *RootVisualForDesktop; // r14
  int inserted; // eax
  CAnimatedTransitionVisual *v11; // rcx
  __int64 v12; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  LONG v14; // r15d
  CAnimatedTransitionVisual *v15; // rcx
  CAnimatedTransitionVisual *v16; // rcx
  CAnimatedTransitionVisual *v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-39h]
  struct tagSIZE v20; // [rsp+30h] [rbp-29h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-21h] BYREF
  struct tagSIZE v22; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v23[20]; // [rsp+48h] [rbp-11h] BYREF
  int v24; // [rsp+5Ch] [rbp+3h]
  int v25; // [rsp+60h] [rbp+7h]
  int v26; // [rsp+6Ch] [rbp+13h]
  int v27; // [rsp+70h] [rbp+17h]
  struct tagRECT v28; // [rsp+78h] [rbp+1Fh] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 380) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v3 = (__int128 *)&UdwmHardwareExpression_Capture_Info;
LABEL_6:
      McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, v3);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v3 = (__int128 *)&UdwmScreenRotation_Capture_Info;
    goto LABEL_6;
  }
  GetDesktopID(1LL, &v21);
  v28.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 101);
  v28.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 103) + v28.left;
  v28.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 102);
  v28.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 104) + v28.top;
  v4 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56);
  if ( !*((_BYTE *)this + 328) || (v5 = 1, *((_DWORD *)this + 90) != -1) )
    v5 = 0;
  CScreenRotation::Stop(this, v5);
  v6 = (CAnimatedTransitionVisual **)((char *)this + 312);
  v7 = v28.right - v28.left;
  if ( v28.right - v28.left < 0 )
    v7 = 0;
  v8 = v28.bottom - v28.top;
  v20.cx = v7;
  if ( v28.bottom - v28.top < 0 )
    v8 = 0;
  v20.cy = v8;
  if ( *v6 )
  {
    v14 = 0;
    if ( v28.bottom - v28.top >= 0 )
      v14 = v28.bottom - v28.top;
    if ( *((_BYTE *)this + 331) )
    {
      CVisual::SetRotation(this, (double)*((int *)this + 84));
      CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((char *)this + 348));
      v15 = *v6;
      v24 = 0;
      v25 = 0;
      CAnimatedTransitionVisual::Translate2D(v15, (const struct TA_TRANSFORM_2D *)v23);
      v16 = *v6;
      v24 = 1065353216;
      v25 = 1065353216;
      v26 = 1056964608;
      v27 = 1056964608;
      CAnimatedTransitionVisual::Scale2D(v16, (const struct TA_TRANSFORM_2D *)v23);
      CAnimatedTransitionVisual::SetBeginAlpha(*v6, 0.0);
      *((_DWORD *)*v6 + 235) = 0;
    }
    if ( abs32(*((_DWORD *)this + 83)) == 90 )
    {
      v20.cy = v7;
      v20.cx = v14;
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v6, &v28);
      v17 = *v6;
      *(struct tagRECT *)((char *)v17 + 872) = v28;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v17 + 8), 4096);
    }
LABEL_34:
    VisualCollection::InsertRelative(
      (CScreenRotation *)((char *)this + 32),
      (struct CVisual **)(((unsigned __int64)*v6 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v6 >> 64)),
      0LL,
      0,
      1);
    CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v20, 1);
    return v2;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v4, v21);
  inserted = CAnimatedTransitionVisual::Create(
               *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
               (struct CAnimatedTransitionVisual **)this + 39);
  v2 = inserted;
  if ( inserted < 0 )
  {
    v19 = 98;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, v19);
    return v2;
  }
  if ( *v6 )
  {
    inserted = CAnimatedTransitionVisual::SetVisual((struct CResource **)*v6, RootVisualForDesktop, 1, &v28);
    v2 = inserted;
    if ( inserted < 0 )
    {
      v19 = 100;
      goto LABEL_17;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v6, &v28);
    v11 = *v6;
    *(struct tagRECT *)((char *)v11 + 872) = v28;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v11 + 8), 4096);
    v12 = (__int64)*v6 + 8;
    v22 = v20;
    (*(void (__fastcall **)(__int64, struct tagSIZE *))(*(_QWORD *)v12 + 80LL))(v12, &v22);
    *((struct tagSIZE *)*v6 + 119) = v20;
    CVisual::SetInterpolationMode((CAnimatedTransitionVisual *)((char *)*v6 + 8), 1);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v4, v21);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 (struct CVisual **)this,
                 0LL,
                 0,
                 1);
    v2 = inserted;
    if ( inserted < 0 )
    {
      v19 = 112;
      goto LABEL_17;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v2 = inserted;
    if ( inserted < 0 )
    {
      v19 = 113;
      goto LABEL_17;
    }
    goto LABEL_34;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x63u);
  return v2;
}
