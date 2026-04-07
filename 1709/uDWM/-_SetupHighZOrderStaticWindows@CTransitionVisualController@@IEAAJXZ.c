/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180005ABC
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180006070 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180011798 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180004EB0 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x180004F10 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x1800059C4 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180005E88 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800071EC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800074CC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800074E8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180007608 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000ACFC (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BAA4 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800256C4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180065B18 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     McTemplateU0pp @ 0x18008FD60 (McTemplateU0pp.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  _BYTE *v1; // r13
  unsigned int v2; // r15d
  __int64 i; // rdx
  __int64 v5; // rcx
  size_t v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // r12
  int v9; // r14d
  struct _LIST_ENTRY *v10; // rsi
  int v11; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v13; // rbp
  HWND v14; // rcx
  CTransitionVisualController *v15; // rcx
  char v16; // bp
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rcx
  unsigned int Flink; // eax
  int v21; // ecx
  unsigned int Clone; // eax
  CTransitionVisualController *v23; // rcx
  unsigned int v24; // r9d
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  struct CVisual *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v36; // eax
  __int64 v37; // r9
  size_t v38; // [rsp+50h] [rbp-58h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+58h] [rbp-50h]
  unsigned int v40; // [rsp+B0h] [rbp+8h]
  __int64 v41; // [rsp+B8h] [rbp+10h]
  CImmersiveState *v42; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v43; // [rsp+C8h] [rbp+20h]

  v1 = 0LL;
  v2 = 0;
  v42 = 0LL;
  if ( *((_QWORD *)this + 12) == -1LL )
    goto LABEL_53;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 8 * v5 + 17) = 0 )
  {
    v5 = 3 * i;
    i = (unsigned int)(i + 1);
  }
  v6 = *((int *)this + 34);
  v38 = v6;
  v7 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  v6);
  v1 = v7;
  if ( !v7 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x7DFu);
    goto LABEL_53;
  }
  memset_0(v7, 0, v6);
  v8 = (unsigned int)(v6 - 1);
  v9 = v6 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                           *((_QWORD *)this + 12));
  v10 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_47;
  v11 = CImmersiveState::Create(&v42, *((_QWORD *)this + 12));
  v40 = v11;
  v2 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      0x7E8u);
    goto LABEL_51;
  }
  Blink = WindowListForDesktop->Blink;
  if ( (int)v8 < 0 )
    goto LABEL_47;
  v13 = (int)v8;
  v43 = (int)v8;
  while ( 2 )
  {
    if ( Blink == v10 || v9 < 0 )
    {
LABEL_47:
      v31 = (unsigned int)(*((_DWORD *)this + 12) - 1);
      if ( (int)v31 >= 0 )
      {
        v32 = 24LL * (int)v31;
        do
        {
          v33 = *((_QWORD *)this + 3);
          if ( *(_BYTE *)(v33 + v32 + 16) && !*(_BYTE *)(v33 + v32 + 17) )
          {
            CTransitionVisualController::_CleanupHighZOrderClone(
              this,
              (struct CTransitionVisualController::TlwPair *)(v33 + 24 * v31));
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, (unsigned int)v31);
          }
          v32 -= 24LL;
          v31 = (unsigned int)(v31 - 1);
        }
        while ( (int)v31 >= 0 );
      }
      goto LABEL_51;
    }
    while ( 1 )
    {
      v14 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9) + 16LL);
      if ( v14 != HWND_MESSAGE|0x2LL )
        break;
LABEL_63:
      v1[v13--] = 1;
      if ( --v9 < 0 )
        goto LABEL_13;
    }
    if ( !CTransitionVisualController::HasVisibleStyle(v14)
      && !CTransitionVisualController::_IsAnimationComponentVisible(
            v15,
            *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9)) )
    {
      CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9)
                                                           + 16LL));
      goto LABEL_63;
    }
LABEL_13:
    v41 = v13;
    if ( v9 < 0 )
      goto LABEL_47;
    v16 = 0;
    v17 = v38 - 1;
    if ( (__int64)(v38 - 1) >= 0 )
    {
      v18 = v41;
      do
      {
        v19 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v17);
        if ( !*(_BYTE *)(v19 + 65)
          && *(_DWORD *)(*(_QWORD *)(v19 + 128) + 24LL) != 4
          && (*(_BYTE *)(v19 + 67) || CTransitionVisualController::HasVisibleStyle(*(HWND *)(v19 + 16)))
          && *(struct _LIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v17) + 16LL) == Blink[2].Blink )
        {
          v16 = 1;
          --v9;
          v1[v17] = 1;
          --v18;
        }
        --v17;
      }
      while ( v17 >= 0 );
      v41 = v18;
      v2 = v40;
      if ( v16 )
        goto LABEL_26;
    }
    if ( !Blink[1].Blink )
      goto LABEL_26;
    if ( !Blink[25].Flink )
      goto LABEL_26;
    if ( ((__int64)Blink[37].Flink & 1) == 0 )
      goto LABEL_26;
    if ( (HIDWORD(Blink[6].Flink) & 0x20000000) != 0 )
      goto LABEL_26;
    if ( (BYTE4(Blink[37].Flink) & 1) != 0 )
      goto LABEL_26;
    Flink = (unsigned int)Blink[7].Flink;
    if ( Flink <= 0xC )
    {
      v21 = 4162;
      if ( _bittest(&v21, Flink) )
        goto LABEL_26;
    }
    if ( !CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
      || CImmersiveState::IsLauncherShownAboveWindow(v42, (const struct CWindowData *)Blink)
      || CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
    {
      goto LABEL_26;
    }
    Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
    v24 = *((_DWORD *)this + 12);
    v25 = Clone;
    if ( Clone < v24 )
    {
      v23 = (CTransitionVisualController *)*((_QWORD *)this + 3);
      *((_BYTE *)v23 + 24 * Clone + 17) = 1;
    }
    v26 = v43;
    if ( v43 >= 0 )
    {
      do
      {
        if ( !v1[v26] )
          break;
        v8 = (unsigned int)(v8 - 1);
        --v26;
      }
      while ( v26 >= 0 );
      v43 = v26;
    }
    if ( (int)v8 < 0 )
    {
      v27 = 0LL;
    }
    else
    {
      _mm_lfence();
      v23 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8 * v8);
      v27 = *((_QWORD *)v23 + 5);
    }
    v28 = (struct CVisual *)((v27 + 8) & -(__int64)(v27 != 0));
    if ( (unsigned int)v25 < v24 )
    {
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
        *(struct CVisual **)(*((_QWORD *)this + 3) + 24 * v25 + 8),
        v28,
        1,
        1);
LABEL_45:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        if ( (int)v8 < 0 )
        {
          v37 = 0LL;
        }
        else
        {
          _mm_lfence();
          v30 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8);
          v37 = *(_QWORD *)(v30 + 16);
        }
        McTemplateU0pp(v30, v29, Blink[2].Blink, v37);
      }
LABEL_26:
      Blink = Blink->Blink;
      if ( v9 >= 0 )
      {
        v13 = v41;
        v10 = WindowListForDesktop;
        continue;
      }
      goto LABEL_47;
    }
    break;
  }
  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                v23,
                                                (struct CWindowData *)Blink);
  v36 = CTransitionVisualController::_StageCloneRelative(
          this,
          (struct CTopLevelWindow *)Blink[25].Flink,
          *((struct CVisual **)this + 2),
          1,
          v28,
          1,
          0,
          ShouldMoveOriginalWindowOffscreenForClone,
          0LL);
  v40 = v36;
  v2 = v36;
  if ( v36 >= 0 )
    goto LABEL_45;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v36,
    0x869u);
LABEL_51:
  if ( v42 )
    CBaseObject::Release(v42);
LABEL_53:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v1);
  return v2;
}
