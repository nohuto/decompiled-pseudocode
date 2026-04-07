/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180007CFC
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x1800081F0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800165E4 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x180001C9C (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x180002114 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x18000220C (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x180006AAC (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x1800071D8 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x1800075E4 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000944C (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800094AC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000A314 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000B220 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002BA20 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18006C5C8 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     McTemplateU0pp @ 0x18007FE90 (McTemplateU0pp.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  unsigned int v1; // ebp
  _BYTE *v2; // r15
  __int64 i; // rdx
  __int64 v5; // rcx
  size_t v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // r12
  int v9; // r13d
  struct _LIST_ENTRY *v10; // rsi
  int v11; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v13; // rdx
  __int64 v14; // r14
  HWND v15; // rcx
  CTransitionVisualController *v16; // rcx
  char v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rbp
  __int64 v20; // rcx
  unsigned int Flink; // eax
  int v22; // ecx
  unsigned int Clone; // eax
  CTransitionVisualController *v24; // rcx
  unsigned int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  struct CVisual *v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  void (__fastcall *v34)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v37; // eax
  __int64 v38; // r9
  size_t v39; // [rsp+50h] [rbp-58h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+58h] [rbp-50h]
  unsigned int v41; // [rsp+B0h] [rbp+8h]
  __int64 v42; // [rsp+B8h] [rbp+10h]
  CImmersiveState *v43; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+20h]

  v1 = 0;
  v2 = 0LL;
  v43 = 0LL;
  if ( *((_QWORD *)this + 12) == -1LL )
    goto LABEL_53;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 8 * v5 + 17) = 0 )
  {
    v5 = 3 * i;
    i = (unsigned int)(i + 1);
  }
  v6 = *((int *)this + 34);
  v39 = v6;
  v7 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  v6);
  v2 = v7;
  if ( !v7 )
  {
    v1 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x7DDu);
    goto LABEL_53;
  }
  memset_0(v7, 0, v6);
  v8 = (unsigned int)(v6 - 1);
  v9 = v6 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                           *((_QWORD *)this + 12));
  v10 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_47;
  v11 = CImmersiveState::Create(&v43, *((_QWORD *)this + 12));
  v41 = v11;
  v1 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      0x7E6u);
    goto LABEL_51;
  }
  Blink = WindowListForDesktop->Blink;
  if ( (int)v8 < 0 )
    goto LABEL_47;
  v13 = (int)v8;
  v42 = (int)v8;
  v44 = (int)v8;
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
            CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v33 + 24 * v31));
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, v31);
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
      v14 = v13;
      v15 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9) + 16LL);
      if ( v15 != HWND_MESSAGE|0x2LL )
        break;
LABEL_65:
      --v13;
      v2[v14] = 1;
      --v9;
      v42 = v13;
      if ( v9 < 0 )
        goto LABEL_13;
    }
    if ( (GetWindowLongPtrW(v15, -16) & 0x10000000) == 0
      && !CTransitionVisualController::_IsAnimationComponentVisible(
            v16,
            *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9)) )
    {
      CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v9)
                                                           + 16LL));
      v13 = v42;
      goto LABEL_65;
    }
LABEL_13:
    if ( v9 < 0 )
      goto LABEL_47;
    v17 = 0;
    v18 = v39 - 1;
    if ( (__int64)(v39 - 1) >= 0 )
    {
      v19 = v42;
      do
      {
        v20 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v18);
        if ( !*(_BYTE *)(v20 + 65)
          && *(_DWORD *)(*(_QWORD *)(v20 + 128) + 24LL) != 4
          && (*(_BYTE *)(v20 + 67) || (GetWindowLongPtrW(*(HWND *)(v20 + 16), -16) & 0x10000000) != 0)
          && *(struct _LIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v18) + 16LL) == Blink[2].Blink )
        {
          v17 = 1;
          --v9;
          v2[v18] = 1;
          --v19;
        }
        --v18;
      }
      while ( v18 >= 0 );
      v42 = v19;
      v1 = v41;
      if ( v17 )
        goto LABEL_26;
    }
    if ( !Blink[1].Blink )
      goto LABEL_26;
    if ( !Blink[24].Blink )
      goto LABEL_26;
    if ( ((__int64)Blink[37].Flink & 1) == 0 )
      goto LABEL_26;
    if ( (HIDWORD(Blink[6].Flink) & 0x20000000) != 0 )
      goto LABEL_26;
    if ( SBYTE3(Blink[37].Flink) < 0 )
      goto LABEL_26;
    Flink = (unsigned int)Blink[7].Flink;
    if ( Flink <= 0xC )
    {
      v22 = 4162;
      if ( _bittest(&v22, Flink) )
        goto LABEL_26;
    }
    if ( !CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
      || CImmersiveState::IsLauncherShownAboveWindow(v43, (const struct tagRECT *)Blink)
      || CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
    {
      goto LABEL_26;
    }
    Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
    v25 = *((_DWORD *)this + 12);
    v26 = Clone;
    if ( Clone < v25 )
    {
      v24 = (CTransitionVisualController *)*((_QWORD *)this + 3);
      *((_BYTE *)v24 + 24 * Clone + 17) = 1;
    }
    v27 = v44;
    if ( v44 >= 0 )
    {
      do
      {
        if ( !v2[v27] )
          break;
        v8 = (unsigned int)(v8 - 1);
        --v27;
      }
      while ( v27 >= 0 );
      v44 = v27;
    }
    if ( (int)v8 < 0 )
    {
      v28 = 0LL;
    }
    else
    {
      _mm_lfence();
      v24 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8 * v8);
      v28 = *((_QWORD *)v24 + 5);
    }
    v29 = (struct CVisual *)((v28 + 8) & -(__int64)(v28 != 0));
    if ( (unsigned int)v26 < v25 )
    {
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
        *(struct CVisual **)(*((_QWORD *)this + 3) + 24 * v26 + 8),
        v29,
        1,
        1);
LABEL_45:
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        if ( (int)v8 < 0 )
        {
          v38 = 0LL;
        }
        else
        {
          _mm_lfence();
          v30 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8);
          v38 = *(_QWORD *)(v30 + 16);
        }
        McTemplateU0pp(v30, &UdwmSystemAnimation_ZOrderClone, Blink[2].Blink, v38);
      }
LABEL_26:
      Blink = Blink->Blink;
      if ( v9 >= 0 )
      {
        v13 = v42;
        v10 = WindowListForDesktop;
        continue;
      }
      goto LABEL_47;
    }
    break;
  }
  ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                v24,
                                                (struct CWindowData *)Blink);
  v37 = CTransitionVisualController::_StageCloneRelative(
          this,
          (struct CTopLevelWindow *)Blink[24].Blink,
          *((struct CVisual **)this + 2),
          1,
          v29,
          1,
          0,
          ShouldMoveOriginalWindowOffscreenForClone,
          0LL);
  v41 = v37;
  v1 = v37;
  if ( v37 >= 0 )
    goto LABEL_45;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v37,
    0x867u);
LABEL_51:
  if ( v43 )
    CBaseObject::Release(v43);
LABEL_53:
  v34 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v34 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    v34(WPF::g_pProcessHeap, v2);
  return v1;
}
