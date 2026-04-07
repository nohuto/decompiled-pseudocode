/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004C608
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x1800382A0 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000B6E8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18001692C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x1800196E0 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800248B0 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180032EF4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180032F40 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18006E218 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006E8CC (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006EA10 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18006EAD4 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18006ECA4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006ED38 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18006FC40 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180075108 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
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
  __int64 v18; // rdx
  unsigned int v19; // r13d
  CWindowList *v20; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  struct _LIST_ENTRY *i; // r14
  CTopLevelWindow *Flink; // rcx
  unsigned int v26; // edx
  unsigned int v27; // r12d
  CTopLevelWindow *v28; // rcx
  int v29; // eax
  CTopLevelWindow *v30; // r15
  CTopLevelWindow *v31; // rcx
  int v32; // eax
  bool v33; // bl
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // eax
  int updated; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // r14
  __int64 v43; // r15
  CTopLevelWindow *v44; // rcx
  int v45; // eax
  bool v46; // zf
  struct CTopLevelWindow *v47; // r15
  int v48; // eax
  int v50; // eax
  unsigned int v51; // edx
  unsigned int v52; // eax
  int v53; // eax
  struct _LIST_ENTRY v54; // xmm0
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  unsigned int v58; // [rsp+30h] [rbp-50h]
  CTopLevelWindow *v59; // [rsp+38h] [rbp-48h] BYREF
  struct _LIST_ENTRY *v60; // [rsp+40h] [rbp-40h]
  __int128 v61; // [rsp+48h] [rbp-38h] BYREF
  __int128 v62; // [rsp+58h] [rbp-28h] BYREF
  __int64 v63; // [rsp+68h] [rbp-18h]
  unsigned int v64; // [rsp+70h] [rbp-10h]
  struct CTopLevelWindow *v65; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v66; // [rsp+D8h] [rbp+58h]

  v4 = CLivePreview::_HideExistingVisuals(this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x5C1u);
  }
  else
  {
    if ( !*(_DWORD *)(*((_QWORD *)this + 64) + 72LL) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                               *((_QWORD *)this + 36));
      v7 = *((_QWORD *)this + 68);
      if ( v7 )
        v8 = *(struct CVisual **)(v7 + 400);
      else
        v8 = 0LL;
      v9 = (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32);
      inserted = VisualCollection::InsertRelative(
                   (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                   this,
                   v8,
                   0,
                   1);
      v5 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x5C6u);
        return v5;
      }
      v11 = this;
      v12 = *(_QWORD *)(*((_QWORD *)this + 69) + 48LL);
      if ( v12 )
        v11 = *(struct CVisual **)(v12 + 400);
      v13 = VisualCollection::InsertRelative(v9, *((struct CVisual **)this + 63), v11, 1u, 1);
      v5 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x5CCu);
        return v5;
      }
      v16 = *((_DWORD *)this + 82) - 1;
      v17 = v16;
      if ( v16 >= 0 )
      {
        v42 = 40LL * v16;
        do
        {
          v43 = *(_QWORD *)(v42 + *((_QWORD *)this + 38));
          if ( *(_BYTE *)(v43 + 594) < 0x80u && (!a2 || *(_QWORD *)(v43 + 40) != *((_QWORD *)a2 + 5)) )
          {
            v44 = *(CTopLevelWindow **)(v43 + 400);
            v65 = 0LL;
            v45 = CTopLevelWindow::CloneVisualTreeForLivePreview(v44, 0, v14, v15, &v65);
            v5 = v45;
            if ( v45 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x5D7u);
              return v5;
            }
            v46 = *(_DWORD *)(v43 + 112) == 1;
            v47 = v65;
            if ( v46 )
            {
              v48 = VisualCollection::InsertRelative(
                      (VisualCollection *)(*((_QWORD *)this + 64) + 32LL),
                      v65,
                      0LL,
                      0,
                      1);
              v5 = v48;
              if ( v48 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x5DBu);
                return v5;
              }
            }
            else
            {
              v50 = VisualCollection::InsertRelative(
                      (VisualCollection *)(*((_QWORD *)this + 65) + 32LL),
                      v65,
                      0LL,
                      0,
                      1);
              v5 = v50;
              if ( v50 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x5DFu);
                return v5;
              }
            }
            *(_QWORD *)(*((_QWORD *)this + 38) + v42 + 8) = v47;
          }
          v42 -= 40LL;
          --v17;
        }
        while ( v17 >= 0 );
      }
      v18 = *((_QWORD *)this + 36);
      v19 = 0;
      v62 = 0LL;
      v63 = 0LL;
      v20 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51);
      v64 = 0;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(v20, v18);
      v60 = WindowListForDesktop;
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        Flink = (CTopLevelWindow *)i[25].Flink;
        if ( Flink && LODWORD(i[7].Flink) == 12 )
        {
          v26 = (unsigned int)i[10].Flink;
          LOBYTE(v65) = 0;
          v27 = CAccent::s_clrCurrentAccentBackground;
          if ( v26 != CAccent::s_clrCurrentAccentBackground )
          {
            v27 = v26;
            LODWORD(i[10].Flink) = CAccent::s_clrCurrentAccentBackground;
            CTopLevelWindow::OnAccentPolicyUpdated(Flink);
            LOBYTE(v65) = 1;
          }
          v28 = (CTopLevelWindow *)i[25].Flink;
          v59 = 0LL;
          v29 = CTopLevelWindow::CloneVisualTreeForLivePreview(v28, 0, v22, v23, &v59);
          v5 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x5FCu);
            goto LABEL_78;
          }
          v30 = v59;
          if ( v59 && !*((_QWORD *)v59 + 90) )
            *((_QWORD *)v59 + 90) = i;
          if ( (_BYTE)v65 )
          {
            v31 = (CTopLevelWindow *)i[25].Flink;
            LODWORD(i[10].Flink) = v27;
            CTopLevelWindow::OnAccentPolicyUpdated(v31);
          }
          v32 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v30, 0LL, 0, 1);
          v5 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x609u);
LABEL_78:
            DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v62);
            return v5;
          }
          v33 = (BYTE4(i[37].Flink) & 1) == 0;
          if ( (BYTE4(i[37].Flink) & 1) != 0 )
            CTopLevelWindow::SetLivePreviewAlpha(v30, 0.0);
          v22 = v66;
          v34 = (_QWORD *)((char *)this + 400);
          v35 = *((unsigned int *)this + 106);
          *(_QWORD *)&v61 = v30;
          BYTE8(v61) = v33;
          v36 = v35 + 1;
          if ( (int)v35 + 1 >= (unsigned int)v35 )
            v22 = v36;
          v66 = v22;
          if ( v36 >= (unsigned int)v35 )
          {
            if ( (unsigned int)v22 > *((_DWORD *)this + 105) )
            {
              v53 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v34, 0x10u, 1, &v61);
              if ( v53 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0xC0u);
            }
            else
            {
              *(_OWORD *)(*v34 + 16 * v35) = v61;
              *((_DWORD *)this + 106) = v22;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v36 < (unsigned int)v35 ? 0x80070216 : 0, 0xB5u);
          }
          v51 = v58;
          v52 = v19 + 1;
          if ( v19 + 1 >= v19 )
            v51 = v19 + 1;
          v23 = v52 < v19 ? 0x80070216 : 0;
          v58 = v51;
          if ( v52 >= v19 )
          {
            if ( v51 > HIDWORD(v63) )
            {
              v56 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v62, 0x10u, 1, &i[3]);
              if ( v56 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0xC0u);
              v19 = v64;
            }
            else
            {
              v54 = i[3];
              v55 = v19;
              v19 = v51;
              v64 = v51;
              *(struct _LIST_ENTRY *)(v62 + 16 * v55) = v54;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xB5u);
          }
          if ( v30 )
            CBaseObject::Release(v30);
          WindowListForDesktop = v60;
        }
      }
      CLivePreview::_AddImmersiveBackground(this, &v62);
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)this + 63) + 32LL),
        *((struct CVisual **)this + 65),
        0LL,
        0,
        1);
      updated = CLivePreview::_UpdateGlassVisual(this);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x61Bu);
        goto LABEL_78;
      }
      v38 = CLivePreview::_UpdateResources((LPARAM)this);
      v5 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x61Cu);
        goto LABEL_78;
      }
      v39 = CLivePreview::_UpdateInstructions(this);
      v5 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x61Du);
        goto LABEL_78;
      }
      v40 = CVisual::RenderRecursive(*((CVisual **)this + 66));
      v5 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0x61Fu);
        goto LABEL_78;
      }
      v41 = CVisual::RenderRecursive(*((CVisual **)this + 65));
      v5 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x620u);
        goto LABEL_78;
      }
      v57 = CVisual::RenderRecursive(*((CVisual **)this + 64));
      v5 = v57;
      if ( v57 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x621u);
        goto LABEL_78;
      }
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v62);
    }
    *((_DWORD *)this + 146) = 3;
    CLivePreview::GetAnimationDuration(0LL);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 58));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  }
  return v5;
}
