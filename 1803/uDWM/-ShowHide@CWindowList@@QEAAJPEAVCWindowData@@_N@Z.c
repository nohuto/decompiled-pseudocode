/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800076B0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800277B0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027A50 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002A750 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D5C0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800165E4 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180016738 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18001F1DC (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001FCFC (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180023074 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800234E0 (-Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x1800235B8 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180026D8C (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800270D8 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002B8F0 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002B980 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18002BAB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002BC74 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002C188 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x18002C26C (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002C974 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002C9A0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18002DD94 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002F81C (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002FC4C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FC80 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18003EA38 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x180082AA0 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  __int64 v4; // rcx
  char v5; // al
  char v6; // r14
  char v8; // dl
  char v9; // cl
  int IsMagnifier; // eax
  int v11; // ebx
  const struct CWindowData **v12; // rcx
  char v13; // r12
  int v14; // eax
  CVisual *v15; // r12
  HWND v16; // rdx
  CDesktopManager *v17; // rax
  struct IDwmChannel *v18; // rbx
  void *(__fastcall *v19)(WPF::ProcessHeapImpl *, size_t); // rax
  CTopLevelWindow3D *v20; // rax
  CTopLevelWindow3D *v21; // r14
  int v22; // eax
  bool v23; // dl
  CTopLevelWindow3D *v24; // r13
  bool v25; // zf
  struct _LIST_ENTRY *PrecedingVisibleWindowVisual; // rbx
  __int64 Element; // rax
  __int64 v28; // rcx
  __int64 v29; // r14
  CVisual *v30; // rbx
  CVisual *v31; // rbx
  CRenderDataVisual *v32; // rcx
  __int64 v33; // rcx
  unsigned __int8 v34; // al
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  CVisual *v37; // rcx
  CWindowList *v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  int v43; // r9d
  struct CVisual *v44; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned int v46; // [rsp+20h] [rbp-60h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v48; // [rsp+40h] [rbp-40h]
  __int128 v49; // [rsp+50h] [rbp-30h]
  __int64 v50; // [rsp+60h] [rbp-20h]
  char v51; // [rsp+68h] [rbp-18h]
  CTopLevelWindow3D *v52; // [rsp+C8h] [rbp+48h] BYREF
  char v53; // [rsp+D0h] [rbp+50h]
  CVisual *v54; // [rsp+D8h] [rbp+58h] BYREF

  v53 = a3;
  v4 = *((_QWORD *)a2 + 5);
  v5 = *((_BYTE *)a2 + 592) & 1;
  LOBYTE(v52) = 0;
  v6 = a3;
  if ( !v4 || (v8 = 1, v4 != *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 79)) )
    v8 = 0;
  v9 = 0;
  if ( !v8 )
    v9 = v5;
  if ( !v9 )
  {
    IsMagnifier = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 59),
                    a2,
                    (bool *)&v52,
                    0);
    v11 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v46 = 2402;
      goto LABEL_83;
    }
    if ( !(_BYTE)v52 )
    {
      v12 = (const struct CWindowData **)*((_QWORD *)a2 + 50);
      if ( v12 )
      {
        IsMagnifier = CTopLevelWindow3D::ShowWindow(v12, 0, 0);
        v11 = IsMagnifier;
        if ( IsMagnifier < 0 )
        {
          v46 = 2408;
          goto LABEL_83;
        }
      }
    }
    goto LABEL_49;
  }
  v13 = 0;
  if ( !*((_QWORD *)a2 + 49) )
  {
    v14 = CTopLevelWindow::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v54);
    v15 = v54;
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x34u);
    }
    else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
    {
      v16 = (HWND)*((_QWORD *)a2 + 5);
      if ( v16 )
      {
        if ( (*((_BYTE *)a2 + 596) & 0x10) == 0 )
          CTopLevelWindow::SendTopLevelWindowCommand(v15, v16, a2);
      }
    }
    if ( v11 < 0 )
    {
      v46 = 2323;
    }
    else
    {
      v17 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)v15 + 90) = a2;
      v18 = (struct IDwmChannel *)*((_QWORD *)v17 + 4);
      v19 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v19 == WPF::ProcessHeapImpl::AllocClear )
        v20 = (CTopLevelWindow3D *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1E8uLL);
      else
        v20 = (CTopLevelWindow3D *)v19(WPF::g_pProcessHeap, 488LL);
      if ( v20 )
        v21 = CTopLevelWindow3D::CTopLevelWindow3D(v20);
      else
        v21 = 0LL;
      if ( v21 )
      {
        v22 = CTopLevelWindow3D::Initialize(v21, v18);
        v11 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x40u);
          v24 = v52;
        }
        else
        {
          v24 = v21;
          v21 = 0LL;
        }
        if ( v21 )
          CBaseObject::Release(v21);
        if ( v11 >= 0 )
        {
          *((_QWORD *)v24 + 41) = a2;
          *(_OWORD *)((char *)v24 + 308) = *((_OWORD *)a2 + 3);
          v25 = (*((_BYTE *)a2 + 595) & 1) == 0;
          *((_QWORD *)a2 + 49) = v15;
          *((_QWORD *)a2 + 50) = v24;
          if ( !v25 )
          {
            IsMagnifier = CVisual::SetIsMagnifier(v15, v23);
            v11 = IsMagnifier;
            if ( IsMagnifier < 0 )
            {
              v46 = 2335;
              goto LABEL_83;
            }
            *((_BYTE *)a2 + 595) &= ~1u;
          }
          if ( (*((_BYTE *)a2 + 596) & 1) != 0 )
          {
            IsMagnifier = CVisual::SetIsCursor(v15, 1);
            v11 = IsMagnifier;
            if ( IsMagnifier < 0 )
            {
              v46 = 2341;
              goto LABEL_83;
            }
          }
          v13 = 1;
          goto LABEL_32;
        }
      }
      else
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x40u);
      }
      v46 = 2327;
    }
    v43 = v11;
LABEL_84:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v46);
    return (unsigned int)v11;
  }
LABEL_32:
  PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, (struct _LIST_ENTRY *)a2);
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (char *)this + 8,
              *((_QWORD *)a2 + 15));
  if ( Element )
    v28 = *(_QWORD *)(Element + 24);
  else
    v28 = 0LL;
  IsMagnifier = VisualCollection::InsertRelative(
                  (VisualCollection *)(v28 + 32),
                  *((struct CVisual ***)a2 + 49),
                  (struct CVisual *)PrecedingVisibleWindowVisual,
                  1u,
                  1);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v46 = 2348;
    goto LABEL_83;
  }
  v29 = *((_QWORD *)a2 + 51);
  if ( v29 )
  {
    if ( *(_QWORD *)(v29 + 24) )
    {
      v44 = (struct CVisual *)*((_QWORD *)a2 + 49);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
      IsMagnifier = VisualCollection::InsertRelative(
                      (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                      (struct CVisual **)v29,
                      v44,
                      1u,
                      1);
      v11 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v46 = 2351;
        goto LABEL_83;
      }
    }
  }
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 49), 0x400000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 49), 0x8000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 49), 0x10000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 49), 0x20000);
  CVisual::SetOpacity(
    *((CVisual **)a2 + 49),
    (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a2 + 49) + 720LL) + 344LL) / 255.0);
  v30 = (CVisual *)*((_QWORD *)a2 + 49);
  CVisual::SetDirtyFlags(v30, 0x40000);
  CVisual::SetDirtyFlags(v30, 0x4000000);
  CWindowData::OnColorizationUpdated(a2);
  v31 = (CVisual *)*((_QWORD *)a2 + 49);
  v32 = (CRenderDataVisual *)*((_QWORD *)v31 + 36);
  if ( v32 )
    CRenderDataVisual::ClearInstructions(v32);
  CVisual::SetDirtyFlags(v31, 0x80000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 49), 0x4000);
  CTopLevelWindow::OnAccentPolicyUpdated(*((CTopLevelWindow **)a2 + 49));
  v33 = *((_QWORD *)a2 + 3);
  if ( v33 )
  {
    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 296LL))(v33);
    CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v34);
    v35 = *((_QWORD *)a2 + 3);
    if ( v35 )
    {
      v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 304LL))(v35);
      CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v36);
    }
  }
  CWindowList::OnPositionChange(this, a2, 0);
  IsMagnifier = CWindowList::UpdateWindowScale(this, (struct tagPOINT *)a2, 0);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v46 = 2378;
    goto LABEL_83;
  }
  v37 = (CVisual *)*((_QWORD *)a2 + 49);
  if ( v37 )
    CVisual::SetDirtyFlags(v37, 0x4000000);
  CWindowList::OnGDISurfaceChange(v37, a2);
  IsMagnifier = CWindowList::UpdateThumbnailsForNewWindow(v38, a2);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v46 = 2382;
    goto LABEL_83;
  }
  IsMagnifier = CLivePreview::OnWindowShowHide(
                  *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 59),
                  a2,
                  (bool *)&v52,
                  0);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v46 = 2386;
    goto LABEL_83;
  }
  CWindowList::ShowProjectionBorder(this, a2, *((_QWORD *)a2 + 51) != 0LL);
  if ( !(_BYTE)v52 )
  {
    IsMagnifier = CTopLevelWindow3D::ShowWindow(*((const struct CWindowData ***)a2 + 50), 1, v13);
    v11 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v46 = 2395;
      goto LABEL_83;
    }
  }
  v6 = v53;
LABEL_49:
  IsMagnifier = CWindowData::OnVisibilityUpdated((CWindowData **)a2);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v46 = 2413;
    goto LABEL_83;
  }
  if ( v6 )
  {
    v39 = *((_QWORD *)a2 + 15);
    v50 = -1LL;
    Buffer[0] = v39;
    v48 = 0LL;
    v49 = 0LL;
    Buffer[1] = 0LL;
    v51 = 0;
    v40 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    v41 = v40 ? v40[6] : 0LL;
    if ( *((_QWORD *)a2 + 5) == v41 )
    {
      IsMagnifier = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
      v11 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v46 = 2423;
LABEL_83:
        v43 = IsMagnifier;
        goto LABEL_84;
      }
    }
  }
  return (unsigned int)v11;
}
