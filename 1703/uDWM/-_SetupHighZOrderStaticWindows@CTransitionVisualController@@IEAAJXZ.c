/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180008AD4 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180036690 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180005FDC (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180007820 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800078D8 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x1800083F0 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800088D0 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000A0E4 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000A424 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18000A55C (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000CDBC (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000D9E8 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180032EF4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18006FF84 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     Template_pp @ 0x180093880 (Template_pp.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  _BYTE *v1; // rbp
  unsigned int v2; // r15d
  __int64 i; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdi
  void *(__fastcall *v7)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _BYTE *v8; // rax
  int v9; // r12d
  int v10; // r14d
  struct _LIST_ENTRY *v11; // rsi
  int v12; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v14; // r13
  HWND v15; // rcx
  CTransitionVisualController *v16; // rcx
  char v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int Flink; // eax
  int v21; // ecx
  unsigned int Clone; // eax
  unsigned int v23; // r9d
  __int64 v24; // r8
  CTransitionVisualController *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  struct CVisual *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  void (__fastcall *v34)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v37; // eax
  __int64 v38; // r9
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+50h] [rbp-58h]
  int v40; // [rsp+B0h] [rbp+8h]
  CImmersiveState *v41; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v42; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v43; // [rsp+C8h] [rbp+20h]

  v1 = 0LL;
  v2 = 0;
  v41 = 0LL;
  if ( *((_QWORD *)this + 12) == -1LL )
    goto LABEL_54;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 8 * v5 + 17) = 0 )
  {
    v5 = 3 * i;
    i = (unsigned int)(i + 1);
  }
  v6 = *((int *)this + 34);
  v43 = v6;
  v7 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v7 == WPF::ProcessHeapImpl::Alloc )
    v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v6);
  else
    v8 = (_BYTE *)v7(WPF::g_pProcessHeap, v6);
  v1 = v8;
  if ( !v8 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x7E9u);
    goto LABEL_54;
  }
  memset_0(v8, 0, v6);
  v9 = v6 - 1;
  v10 = v6 - 1;
  v40 = v6 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                           *((_QWORD *)this + 12));
  v11 = WindowListForDesktop;
  if ( !WindowListForDesktop )
    goto LABEL_48;
  v12 = CImmersiveState::Create(&v41, *((_QWORD *)this + 12));
  v2 = v12;
  if ( v12 >= 0 )
  {
    Blink = WindowListForDesktop->Blink;
    if ( v9 >= 0 )
    {
      v14 = v9;
      v42 = v9;
LABEL_11:
      if ( Blink != v11 )
      {
        while ( v10 >= 0 )
        {
          v15 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v10) + 16LL);
          if ( v15 != HWND_MESSAGE|0x2LL )
          {
            if ( (GetWindowLongPtrW(v15, -16) & 0x10000000) != 0
              || CTransitionVisualController::_IsAnimationComponentVisible(
                   v16,
                   *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v10)) )
            {
              v17 = 0;
              v18 = v43 - 1;
              if ( (__int64)(v43 - 1) < 0 )
                goto LABEL_77;
              do
              {
                v19 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v18);
                if ( !*(_BYTE *)(v19 + 65)
                  && *(_DWORD *)(*(_QWORD *)(v19 + 128) + 24LL) != 4
                  && (*(_BYTE *)(v19 + 67) || (GetWindowLongPtrW(*(HWND *)(v19 + 16), -16) & 0x10000000) != 0)
                  && *(struct _LIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v18) + 16LL) == Blink[2].Blink )
                {
                  v17 = 1;
                  --v10;
                  v1[v18] = 1;
                  --v14;
                }
                --v18;
              }
              while ( v18 >= 0 );
              if ( !v17 )
              {
LABEL_77:
                if ( Blink[1].Blink )
                {
                  if ( Blink[25].Flink )
                  {
                    if ( ((__int64)Blink[37].Flink & 1) != 0
                      && (HIDWORD(Blink[6].Flink) & 0x20000000) == 0
                      && (BYTE4(Blink[37].Flink) & 1) == 0 )
                    {
                      Flink = (unsigned int)Blink[7].Flink;
                      if ( Flink > 0xC || (v21 = 4162, !_bittest(&v21, Flink)) )
                      {
                        if ( CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
                          && !CImmersiveState::IsLauncherShownAboveWindow(v41, (const struct CWindowData *)Blink)
                          && !CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
                        {
                          Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
                          v23 = *((_DWORD *)this + 12);
                          v24 = Clone;
                          if ( Clone < v23 )
                            *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 17) = 1;
                          v25 = (CTransitionVisualController *)v42;
                          if ( v42 >= 0 )
                          {
                            v26 = v40;
                            do
                            {
                              if ( !v1[(_QWORD)v25] )
                                break;
                              --v26;
                              v25 = (CTransitionVisualController *)((char *)v25 - 1);
                            }
                            while ( (__int64)v25 >= 0 );
                            v42 = (__int64)v25;
                            v40 = v26;
                          }
                          if ( v40 < 0 )
                          {
                            v27 = 0LL;
                          }
                          else
                          {
                            _mm_lfence();
                            v25 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v40);
                            v27 = *((_QWORD *)v25 + 5);
                          }
                          v28 = (struct CVisual *)((v27 + 8) & -(__int64)(v27 != 0));
                          if ( (unsigned int)v24 >= v23 )
                          {
                            ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                                          v25,
                                                                          (struct CWindowData *)Blink);
                            v37 = CTransitionVisualController::_StageCloneRelative(
                                    this,
                                    (struct CTopLevelWindow *)Blink[25].Flink,
                                    *((struct CVisual **)this + 2),
                                    1,
                                    v28,
                                    1,
                                    0,
                                    ShouldMoveOriginalWindowOffscreenForClone,
                                    0LL);
                            v2 = v37;
                            if ( v37 < 0 )
                            {
                              MilInstrumentationCheckHR(
                                0x14u,
                                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                                2u,
                                v37,
                                0x873u);
                              goto LABEL_52;
                            }
                          }
                          else
                          {
                            VisualCollection::InsertRelative(
                              (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
                              *(struct CVisual **)(*((_QWORD *)this + 3) + 24 * v24 + 8),
                              v28,
                              1,
                              1);
                          }
                          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                          {
                            if ( v40 < 0 )
                            {
                              v38 = 0LL;
                            }
                            else
                            {
                              _mm_lfence();
                              v30 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v40);
                              v38 = *(_QWORD *)(v30 + 16);
                            }
                            Template_pp(v30, v29, Blink[2].Blink, v38);
                          }
                        }
                      }
                    }
                  }
                }
              }
              Blink = Blink->Blink;
              if ( v10 < 0 )
                break;
              v11 = WindowListForDesktop;
              goto LABEL_11;
            }
            CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14)
                                                                             + 8LL * (unsigned int)v10)
                                                                 + 16LL));
          }
          --v10;
          v1[v14--] = 1;
        }
      }
    }
LABEL_48:
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
    goto LABEL_52;
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v12, 0x7F2u);
LABEL_52:
  if ( v41 )
    CBaseObject::Release(v41);
LABEL_54:
  v34 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v34 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v1);
  else
    v34(WPF::g_pProcessHeap, v1);
  return v2;
}
