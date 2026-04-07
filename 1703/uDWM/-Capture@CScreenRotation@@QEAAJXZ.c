/*
 * XREFs of ?Capture@CScreenRotation@@QEAAJXZ @ 0x180093F7C
 * Callers:
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x1800841C0 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800850C4 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 * Callees:
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800076F0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180007790 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016DE8 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180023320 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x1800233E0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002EF7C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180032F40 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800378B0 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180037B2C (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x180081E50 (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180094EB0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800951C0 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::Capture(CScreenRotation *this)
{
  unsigned int v2; // ebx
  void *v3; // rdx
  CWindowList *v4; // r12
  bool v5; // dl
  CAnimatedTransitionVisual **v6; // rsi
  LONG v7; // r14d
  LONG v8; // r15d
  struct CVisual *RootVisualForDesktop; // r14
  int inserted; // eax
  CAnimatedTransitionVisual *v11; // rcx
  __int64 v12; // rcx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CAnimatedTransitionVisual *v14; // rcx
  CAnimatedTransitionVisual *v15; // rcx
  CAnimatedTransitionVisual *v16; // rcx
  unsigned int v18; // [rsp+28h] [rbp-39h]
  struct tagSIZE v19; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-21h] BYREF
  struct tagSIZE v21; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v22[20]; // [rsp+50h] [rbp-11h] BYREF
  int v23; // [rsp+64h] [rbp+3h]
  int v24; // [rsp+68h] [rbp+7h]
  int v25; // [rsp+74h] [rbp+13h]
  int v26; // [rsp+78h] [rbp+17h]
  struct tagRECT v27; // [rsp+80h] [rbp+1Fh] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 380) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v3 = &UdwmHardwareExpression_Capture_Info;
LABEL_6:
      TemplateEventDescriptor((__int64)this, (__int64)v3);
    }
  }
  else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v3 = &UdwmScreenRotation_Capture_Info;
    goto LABEL_6;
  }
  GetDesktopID(1LL, &v20);
  v27.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 89);
  v27.right = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 91) + v27.left;
  v27.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 90);
  v27.bottom = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 92) + v27.top;
  v4 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51);
  if ( !*((_BYTE *)this + 328) || (v5 = 1, *((_DWORD *)this + 90) != -1) )
    v5 = 0;
  CScreenRotation::Stop(this, v5);
  v6 = (CAnimatedTransitionVisual **)((char *)this + 312);
  v7 = v27.right - v27.left;
  if ( v27.right - v27.left < 0 )
    v7 = 0;
  v8 = v27.bottom - v27.top;
  v19.cx = v7;
  if ( v27.bottom - v27.top < 0 )
    v8 = 0;
  v19.cy = v8;
  if ( *v6 )
  {
    if ( *((_BYTE *)this + 331) )
    {
      CVisual::SetRotation(this, (double)*((int *)this + 84));
      CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((char *)this + 348));
      v14 = *v6;
      v23 = 0;
      v24 = 0;
      CAnimatedTransitionVisual::Translate2D(v14, (const struct TA_TRANSFORM_2D *)v22);
      v15 = *v6;
      v23 = 1065353216;
      v24 = 1065353216;
      v25 = 1056964608;
      v26 = 1056964608;
      CAnimatedTransitionVisual::Scale2D(v15, (const struct TA_TRANSFORM_2D *)v22);
      CAnimatedTransitionVisual::SetBeginAlpha(*v6, 0.0);
      *((_DWORD *)*v6 + 235) = 0;
    }
    if ( abs32(*((_DWORD *)this + 83)) == 90 )
    {
      v19.cy = v7;
      v19.cx = v8;
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v6, &v27);
      v16 = *v6;
      *(struct tagRECT *)((char *)v16 + 872) = v27;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v16 + 8), 4096);
    }
LABEL_32:
    VisualCollection::InsertRelative(
      (CScreenRotation *)((char *)this + 32),
      (struct CVisual *)(((unsigned __int64)*v6 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)*v6 >> 64)),
      0LL,
      0,
      1);
    CScreenRotation::UpdateBackgroundInstructionsAndSize(this, &v19, 1);
    return v2;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v4, v20);
  inserted = CAnimatedTransitionVisual::Create(
               *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
               (struct CAnimatedTransitionVisual **)this + 39);
  v2 = inserted;
  if ( inserted < 0 )
  {
    v18 = 146;
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, v18);
    return v2;
  }
  if ( *v6 )
  {
    inserted = CAnimatedTransitionVisual::SetVisual((struct CResource **)*v6, RootVisualForDesktop, 1, &v27);
    v2 = inserted;
    if ( inserted < 0 )
    {
      v18 = 148;
      goto LABEL_17;
    }
    CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v6, &v27);
    v11 = *v6;
    *(struct tagRECT *)((char *)v11 + 872) = v27;
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v11 + 8), 4096);
    v12 = (__int64)*v6 + 8;
    v21 = v19;
    (*(void (__fastcall **)(__int64, struct tagSIZE *))(*(_QWORD *)v12 + 80LL))(v12, &v21);
    *((struct tagSIZE *)*v6 + 119) = v19;
    CVisual::SetInterpolationMode((CAnimatedTransitionVisual *)((char *)*v6 + 8), 1);
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v4, v20);
    inserted = VisualCollection::InsertRelative(
                 (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                 this,
                 0LL,
                 0,
                 1);
    v2 = inserted;
    if ( inserted < 0 )
    {
      v18 = 162;
      goto LABEL_17;
    }
    inserted = CVisual::MoveToFront(this, 1);
    v2 = inserted;
    if ( inserted < 0 )
    {
      v18 = 163;
      goto LABEL_17;
    }
    goto LABEL_32;
  }
  v2 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x93u);
  return v2;
}
