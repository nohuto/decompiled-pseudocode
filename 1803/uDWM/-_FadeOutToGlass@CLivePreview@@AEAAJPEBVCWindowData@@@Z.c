/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180071A70
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18002DE1C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18001FB40 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001FCFC (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002BA20 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18002BAB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037048 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180038148 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800706A8 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180070C04 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18007222C (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x180072F3C (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x180073080 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x180073204 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x180073DA8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800824D0 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
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
  struct CVisual *v23; // r15
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  CWindowList *v27; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  struct _LIST_ENTRY *i; // r14
  CTopLevelWindow *Blink; // rcx
  char v33; // r13
  unsigned int Flink; // r12d
  int v35; // eax
  struct CVisual **v36; // r15
  CTopLevelWindow *v37; // rcx
  int v38; // eax
  char v39; // bl
  _QWORD *v40; // rcx
  __int64 v41; // rdx
  unsigned int v42; // eax
  int v43; // eax
  __int64 v44; // rbx
  unsigned int v45; // edx
  unsigned int v46; // eax
  struct _LIST_ENTRY v47; // xmm0
  int v48; // eax
  int updated; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  CTopLevelWindow *v56; // [rsp+30h] [rbp-40h] BYREF
  struct _LIST_ENTRY *v57; // [rsp+38h] [rbp-38h]
  __int128 v58; // [rsp+40h] [rbp-30h] BYREF
  __int128 v59; // [rsp+50h] [rbp-20h] BYREF
  __int64 v60; // [rsp+60h] [rbp-10h]
  unsigned int v61; // [rsp+68h] [rbp-8h]
  struct CVisual *v62; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v63; // [rsp+C8h] [rbp+58h]

  v4 = CLivePreview::_HideExistingVisuals(this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x5BDu);
    return v5;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 64) + 72LL) )
    goto LABEL_79;
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                           *((_QWORD *)this + 36));
  v7 = *((_QWORD *)this + 68);
  if ( v7 )
    v8 = *(struct CVisual **)(v7 + 392);
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
      v11 = *(struct CVisual **)(v12 + 392);
    v13 = VisualCollection::InsertRelative(v9, *((struct CVisual ***)this + 63), v11, 1u, 1);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x5C8u);
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
          v20 = *(CTopLevelWindow **)(v19 + 392);
          v62 = 0LL;
          v21 = CTopLevelWindow::CloneVisualTreeForLivePreview(v20, 0, v14, v15, &v62);
          v5 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x5D3u);
            return v5;
          }
          v22 = *(_DWORD *)(v19 + 112) == 1;
          v23 = v62;
          if ( v22 )
          {
            v24 = VisualCollection::InsertRelative(
                    (VisualCollection *)(*((_QWORD *)this + 64) + 32LL),
                    (struct CVisual **)v62,
                    0LL,
                    0,
                    1);
            v5 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x5D7u);
              return v5;
            }
          }
          else
          {
            v25 = VisualCollection::InsertRelative(
                    (VisualCollection *)(*((_QWORD *)this + 65) + 32LL),
                    (struct CVisual **)v62,
                    0LL,
                    0,
                    1);
            v5 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x5DBu);
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
    v59 = 0LL;
    v60 = 0LL;
    v27 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 56);
    v61 = 0;
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(v27, v26);
    v57 = WindowListForDesktop;
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      Blink = (CTopLevelWindow *)i[24].Blink;
      if ( Blink && LODWORD(i[7].Flink) == 12 )
      {
        v33 = 0;
        Flink = CAccent::s_clrCurrentAccentBackground;
        if ( LODWORD(i[10].Flink) != CAccent::s_clrCurrentAccentBackground )
        {
          Flink = (unsigned int)i[10].Flink;
          LODWORD(i[10].Flink) = CAccent::s_clrCurrentAccentBackground;
          CTopLevelWindow::OnAccentPolicyUpdated(Blink);
          Blink = (CTopLevelWindow *)i[24].Blink;
          v33 = 1;
        }
        v56 = 0LL;
        v35 = CTopLevelWindow::CloneVisualTreeForLivePreview(Blink, 0, v29, v30, &v56);
        v5 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x5F8u);
          goto LABEL_67;
        }
        v36 = (struct CVisual **)v56;
        if ( v56 && !*((_QWORD *)v56 + 90) )
          *((_QWORD *)v56 + 90) = i;
        if ( v33 )
        {
          v37 = (CTopLevelWindow *)i[24].Blink;
          LODWORD(i[10].Flink) = Flink;
          CTopLevelWindow::OnAccentPolicyUpdated(v37);
        }
        v38 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v36, 0LL, 0, 1);
        v5 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x605u);
          goto LABEL_67;
        }
        v39 = (unsigned __int8)~BYTE3(i[37].Flink) >> 7;
        if ( SBYTE3(i[37].Flink) < 0 )
          CTopLevelWindow::SetLivePreviewAlpha((CTopLevelWindow *)v36, 0.0);
        v29 = (unsigned int)v62;
        v40 = (_QWORD *)((char *)this + 400);
        v41 = *((unsigned int *)this + 106);
        *(_QWORD *)&v58 = v36;
        BYTE8(v58) = v39;
        v42 = v41 + 1;
        if ( (int)v41 + 1 >= (unsigned int)v41 )
          v29 = v42;
        LODWORD(v62) = v29;
        if ( v42 >= (unsigned int)v41 )
        {
          if ( (unsigned int)v29 > *((_DWORD *)this + 105) )
          {
            v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v40, 16, 1, &v58);
            if ( v43 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0xC0u);
          }
          else
          {
            *(_OWORD *)(*v40 + 16 * v41) = v58;
            *((_DWORD *)this + 106) = v29;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42 < (unsigned int)v41 ? 0x80070216 : 0, 0xB5u);
        }
        v44 = v61;
        v45 = v63;
        v46 = v61 + 1;
        if ( v61 + 1 >= v61 )
          v45 = v61 + 1;
        v30 = v46 < v61 ? 0x80070216 : 0;
        v63 = v45;
        if ( v46 >= v61 )
        {
          if ( v45 > HIDWORD(v60) )
          {
            v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v59, 16, 1, &i[3]);
            if ( v48 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0xC0u);
          }
          else
          {
            v47 = i[3];
            v61 = v45;
            *(struct _LIST_ENTRY *)(v59 + 16 * v44) = v47;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xB5u);
        }
        if ( v36 )
          CBaseObject::Release((CBaseObject *)v36);
        WindowListForDesktop = v57;
      }
    }
    CLivePreview::_AddImmersiveBackground((__int64)this, (__int64)&v59);
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
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x617u);
LABEL_67:
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v59);
      return v5;
    }
    v50 = CLivePreview::_UpdateResources((LPARAM)this);
    v5 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v50, 0x618u);
      goto LABEL_67;
    }
    v51 = CLivePreview::_UpdateInstructions(this);
    v5 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x619u);
      goto LABEL_67;
    }
    v52 = CVisual::RenderRecursive(*((CVisual **)this + 66));
    v5 = v52;
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x61Bu);
      goto LABEL_67;
    }
    v53 = CVisual::RenderRecursive(*((CVisual **)this + 65));
    v5 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v53, 0x61Cu);
      goto LABEL_67;
    }
    v54 = CVisual::RenderRecursive(*((CVisual **)this + 64));
    v5 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v54, 0x61Du);
      goto LABEL_67;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v59);
LABEL_79:
    *((_DWORD *)this + 146) = 3;
    CLivePreview::GetAnimationDuration(0);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 58));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x5C2u);
  return v5;
}
