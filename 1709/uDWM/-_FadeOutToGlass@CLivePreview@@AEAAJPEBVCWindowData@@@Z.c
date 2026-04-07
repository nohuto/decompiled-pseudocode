/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18006ACC8
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180034B78 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800096A0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019690 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800256C4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800256E8 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180035C7C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180035F78 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180069AB8 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180069EE4 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18006B4B4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006C130 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18006C274 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006C444 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18006CFF8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18007933C (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

__int64 __fastcall CLivePreview::_FadeOutToGlass(CLivePreview *this, const struct CWindowData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  __int64 v7; // r8
  struct CVisual *v8; // r8
  VisualCollection *v9; // rdi
  int inserted; // eax
  struct CVisual *v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r15
  CTopLevelWindow *v20; // rcx
  int v21; // eax
  bool v22; // zf
  struct CTopLevelWindow *v23; // r15
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // r13d
  CWindowList *v28; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  struct _LIST_ENTRY *Blink; // r14
  unsigned int v33; // ebx
  CTopLevelWindow *Flink; // rcx
  unsigned int v35; // edx
  unsigned int v36; // r12d
  CTopLevelWindow *v37; // rcx
  int v38; // eax
  struct CVisual **v39; // r15
  CTopLevelWindow *v40; // rcx
  int v41; // eax
  bool v42; // bl
  _QWORD *v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // eax
  int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // eax
  struct _LIST_ENTRY v49; // xmm0
  __int64 v50; // rax
  int v51; // eax
  int updated; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  unsigned int v59; // [rsp+30h] [rbp-50h]
  CTopLevelWindow *v60; // [rsp+38h] [rbp-48h] BYREF
  struct _LIST_ENTRY *v61; // [rsp+40h] [rbp-40h]
  __int128 v62; // [rsp+48h] [rbp-38h] BYREF
  __int128 v63; // [rsp+58h] [rbp-28h] BYREF
  __int64 v64; // [rsp+68h] [rbp-18h]
  unsigned int v65; // [rsp+70h] [rbp-10h]
  struct CTopLevelWindow *v66; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v67; // [rsp+D8h] [rbp+58h]

  v4 = CLivePreview::_HideExistingVisuals(this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5C1u);
    return v5;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 64) + 72LL) )
    goto LABEL_80;
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                           *((_QWORD *)this + 36));
  v7 = *((_QWORD *)this + 68);
  if ( v7 )
    v8 = *(struct CVisual **)(v7 + 400);
  else
    v8 = 0LL;
  v9 = (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32);
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               (struct CVisual **)this,
               v8,
               0,
               1);
  v5 = inserted;
  if ( inserted >= 0 )
  {
    v11 = this;
    v12 = *(_QWORD *)(*((_QWORD *)this + 69) + 48LL);
    if ( v12 )
      v11 = *(struct CVisual **)(v12 + 400);
    v13 = VisualCollection::InsertRelative(v9, *((struct CVisual ***)this + 63), v11, 1u, 1);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5CCu);
      return v5;
    }
    v16 = *((_DWORD *)this + 82) - 1;
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = 40LL * v16;
      do
      {
        v19 = *(_QWORD *)(v18 + *((_QWORD *)this + 38));
        if ( *(char *)(v19 + 594) >= 0 && (!a2 || *(_QWORD *)(v19 + 40) != *((_QWORD *)a2 + 5)) )
        {
          v20 = *(CTopLevelWindow **)(v19 + 400);
          v66 = 0LL;
          v21 = CTopLevelWindow::CloneVisualTreeForLivePreview(v20, 0, v14, v15, &v66);
          v5 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x5D7u);
            return v5;
          }
          v22 = *(_DWORD *)(v19 + 112) == 1;
          v23 = v66;
          if ( v22 )
          {
            v24 = VisualCollection::InsertRelative(
                    (VisualCollection *)(*((_QWORD *)this + 64) + 32LL),
                    (struct CVisual **)v66,
                    0LL,
                    0,
                    1);
            v5 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x5DBu);
              return v5;
            }
          }
          else
          {
            v25 = VisualCollection::InsertRelative(
                    (VisualCollection *)(*((_QWORD *)this + 65) + 32LL),
                    (struct CVisual **)v66,
                    0LL,
                    0,
                    1);
            v5 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x5DFu);
              return v5;
            }
          }
          *(_QWORD *)(*((_QWORD *)this + 38) + v18 + 8) = v23;
        }
        v18 -= 40LL;
        --v17;
      }
      while ( v17 >= 0 );
    }
    v26 = *((_QWORD *)this + 36);
    v27 = 0;
    v63 = 0LL;
    v64 = 0LL;
    v28 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57);
    v65 = 0;
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(v28, v26);
    v61 = WindowListForDesktop;
    Blink = WindowListForDesktop->Blink;
    if ( Blink != WindowListForDesktop )
    {
      v33 = (unsigned int)v66;
      do
      {
        Flink = (CTopLevelWindow *)Blink[25].Flink;
        v67 = v33;
        if ( Flink && LODWORD(Blink[7].Flink) == 12 )
        {
          v35 = (unsigned int)Blink[10].Flink;
          LOBYTE(v66) = 0;
          v36 = CAccent::s_clrCurrentAccentBackground;
          if ( v35 != CAccent::s_clrCurrentAccentBackground )
          {
            v36 = v35;
            LODWORD(Blink[10].Flink) = CAccent::s_clrCurrentAccentBackground;
            CTopLevelWindow::OnAccentPolicyUpdated(Flink);
            LOBYTE(v66) = 1;
          }
          v37 = (CTopLevelWindow *)Blink[25].Flink;
          v60 = 0LL;
          v38 = CTopLevelWindow::CloneVisualTreeForLivePreview(v37, 0, v30, v31, &v60);
          v5 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x5FCu);
            goto LABEL_68;
          }
          v39 = (struct CVisual **)v60;
          if ( v60 && !*((_QWORD *)v60 + 90) )
            *((_QWORD *)v60 + 90) = Blink;
          if ( (_BYTE)v66 )
          {
            v40 = (CTopLevelWindow *)Blink[25].Flink;
            LODWORD(Blink[10].Flink) = v36;
            CTopLevelWindow::OnAccentPolicyUpdated(v40);
          }
          v41 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v39, 0LL, 0, 1);
          v5 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x609u);
            goto LABEL_68;
          }
          v42 = (BYTE4(Blink[37].Flink) & 1) == 0;
          if ( (BYTE4(Blink[37].Flink) & 1) != 0 )
            CTopLevelWindow::SetLivePreviewAlpha((CTopLevelWindow *)v39, 0.0);
          BYTE8(v62) = v42;
          v43 = (_QWORD *)((char *)this + 400);
          v44 = *((unsigned int *)this + 106);
          *(_QWORD *)&v62 = v39;
          v45 = v44 + 1;
          v33 = v44 + 1;
          if ( (int)v44 + 1 < (unsigned int)v44 )
            v33 = v67;
          if ( v45 >= (unsigned int)v44 )
          {
            if ( v33 > *((_DWORD *)this + 105) )
            {
              v46 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v43, 0x10u, 1, &v62);
              if ( v46 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xC0u);
            }
            else
            {
              *(_OWORD *)(*v43 + 16 * v44) = v62;
              *((_DWORD *)this + 106) = v33;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45 < (unsigned int)v44 ? 0x80070216 : 0, 0xB5u);
          }
          v47 = v59;
          v48 = v27 + 1;
          if ( v27 + 1 >= v27 )
            v47 = v27 + 1;
          v31 = v48 < v27 ? 0x80070216 : 0;
          v59 = v47;
          if ( v48 >= v27 )
          {
            if ( v47 > HIDWORD(v64) )
            {
              v51 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v63, 0x10u, 1, &Blink[3]);
              if ( v51 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0xC0u);
              v27 = v65;
            }
            else
            {
              v49 = Blink[3];
              v50 = v27;
              v27 = v47;
              v65 = v47;
              *(struct _LIST_ENTRY *)(v63 + 16 * v50) = v49;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xB5u);
          }
          if ( v39 )
            CBaseObject::Release((CBaseObject *)v39);
          WindowListForDesktop = v61;
        }
        Blink = Blink->Blink;
      }
      while ( Blink != WindowListForDesktop );
    }
    CLivePreview::_AddImmersiveBackground((__int64)this, (__int64)&v63);
    VisualCollection::InsertRelative(
      (VisualCollection *)(*((_QWORD *)this + 63) + 32LL),
      *((struct CVisual ***)this + 65),
      0LL,
      0,
      1);
    updated = CLivePreview::_UpdateGlassVisual(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x61Bu);
      goto LABEL_68;
    }
    v53 = CLivePreview::_UpdateResources((LPARAM)this);
    v5 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x61Cu);
LABEL_68:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v63);
      return v5;
    }
    v54 = CLivePreview::_UpdateInstructions(this);
    v5 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x61Du);
      goto LABEL_68;
    }
    v55 = CVisual::RenderRecursive(*((CVisual **)this + 66));
    v5 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x61Fu);
      goto LABEL_68;
    }
    v56 = CVisual::RenderRecursive(*((CVisual **)this + 65));
    v5 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x620u);
      goto LABEL_68;
    }
    v57 = CVisual::RenderRecursive(*((CVisual **)this + 64));
    v5 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x621u);
      goto LABEL_68;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v63);
LABEL_80:
    *((_DWORD *)this + 146) = 3;
    CLivePreview::GetAnimationDuration(0);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 58));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x5C6u);
  return v5;
}
