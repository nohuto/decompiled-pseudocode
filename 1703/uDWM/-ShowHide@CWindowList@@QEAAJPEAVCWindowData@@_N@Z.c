/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800079B4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F490 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F750 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180031C10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180034A28 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180015A00 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180015A38 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180015AD8 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016360 (-Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800163FC (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800248B0 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18002AAE0 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002E828 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180032D50 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180032DE0 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180032F40 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180033048 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180033600 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x1800336D4 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180033CA8 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035260 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180036690 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180036710 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180038224 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18003E970 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x180081E00 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180085730 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z @ 0x180086354 (-IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18008657C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  char v3; // al
  __int64 v5; // rdx
  char v6; // al
  int IsMagnifier; // eax
  int v10; // ebx
  const struct CWindowData **v11; // rcx
  char v12; // r12
  int v13; // eax
  CVisual *v14; // r15
  HWND v15; // rdx
  CDesktopManager *v16; // rax
  bool v17; // dl
  CVisual *v18; // rax
  bool v19; // zf
  CDwmWinSqm *v20; // rcx
  struct _LIST_ENTRY *PrecedingVisibleWindowVisual; // rbx
  _QWORD *Element; // rax
  __int64 v23; // rcx
  struct CVisual *v24; // r15
  CVisual *v25; // rbx
  CVisual *v26; // rbx
  CRenderDataVisual *v27; // rcx
  __int64 v28; // rcx
  unsigned __int8 v29; // al
  __int64 v30; // rcx
  unsigned __int8 v31; // al
  CVisual *v32; // rcx
  CWindowList *v33; // rcx
  bool v34; // r8
  int v35; // eax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  CDwmWinSqm *v40; // rcx
  struct CVisual *v41; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned int v43; // [rsp+20h] [rbp-60h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v45; // [rsp+40h] [rbp-40h]
  __int128 v46; // [rsp+50h] [rbp-30h]
  __int64 v47; // [rsp+60h] [rbp-20h]
  char v48; // [rsp+68h] [rbp-18h]
  bool v49; // [rsp+C8h] [rbp+48h] BYREF
  CVisual *v50; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *((_BYTE *)a2 + 592);
  v49 = 0;
  v5 = *((_QWORD *)a2 + 5);
  v6 = v3 & 1;
  if ( v5 && v5 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 74) )
    v6 = 0;
  if ( !v6 )
  {
    IsMagnifier = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 54),
                    a2,
                    &v49,
                    0);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v43 = 2093;
      goto LABEL_78;
    }
    if ( !v49 )
    {
      v11 = (const struct CWindowData **)*((_QWORD *)a2 + 51);
      if ( v11 )
      {
        IsMagnifier = CTopLevelWindow3D::ShowWindow(v11, 0, 0);
        v10 = IsMagnifier;
        if ( IsMagnifier < 0 )
        {
          v43 = 2099;
          goto LABEL_78;
        }
      }
    }
    goto LABEL_41;
  }
  v12 = 0;
  if ( !*((_QWORD *)a2 + 50) )
  {
    v13 = CTopLevelWindow::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v50);
    v14 = v50;
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3Cu);
    }
    else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
    {
      v15 = (HWND)*((_QWORD *)a2 + 5);
      if ( v15 )
      {
        if ( (*((_BYTE *)a2 + 596) & 0x20) == 0 )
          CTopLevelWindow::SendTopLevelWindowCommand(v14, v15, a2);
      }
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7BAu);
      return (unsigned int)v10;
    }
    v16 = CDesktopManager::s_pDesktopManagerInstance;
    *((_QWORD *)v14 + 90) = a2;
    IsMagnifier = CTopLevelWindow3D::Create(*((struct IDwmChannel **)v16 + 4), &v50);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v43 = 1982;
      goto LABEL_78;
    }
    v18 = v50;
    *((_QWORD *)v50 + 41) = a2;
    *(_OWORD *)((char *)v18 + 308) = *((_OWORD *)a2 + 3);
    v19 = (*((_BYTE *)a2 + 595) & 1) == 0;
    *((_QWORD *)a2 + 50) = v14;
    *((_QWORD *)a2 + 51) = v18;
    if ( !v19 )
    {
      IsMagnifier = CVisual::SetIsMagnifier(v14, v17);
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v43 = 1990;
        goto LABEL_78;
      }
      *((_BYTE *)a2 + 595) &= ~1u;
    }
    if ( (*((_BYTE *)a2 + 596) & 2) != 0 )
    {
      IsMagnifier = CVisual::SetIsCursor(v14, 1);
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v43 = 1996;
        goto LABEL_78;
      }
    }
    if ( WinSqmIsOptedIn_CachedInDwm() && (*((_BYTE *)a2 + 595) & 2) != 0 && CDwmWinSqm::IsTopLevelAppWindow(v20, a2) )
    {
      CDwmWinSqm::WindowCreated(v40, a2);
      *((_BYTE *)a2 + 594) |= 0x10u;
    }
    v12 = 1;
  }
  PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, (struct _LIST_ENTRY *)a2);
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              *((_QWORD *)a2 + 15));
  if ( Element )
    v23 = Element[3];
  else
    v23 = 0LL;
  IsMagnifier = VisualCollection::InsertRelative(
                  (VisualCollection *)(v23 + 32),
                  *((struct CVisual **)a2 + 50),
                  (struct CVisual *)PrecedingVisibleWindowVisual,
                  1u,
                  1);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v43 = 2012;
    goto LABEL_78;
  }
  v24 = (struct CVisual *)*((_QWORD *)a2 + 52);
  if ( v24 )
  {
    if ( *((_QWORD *)v24 + 3) )
    {
      v41 = (struct CVisual *)*((_QWORD *)a2 + 50);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
      IsMagnifier = VisualCollection::InsertRelative(
                      (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                      v24,
                      v41,
                      1u,
                      1);
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v43 = 2015;
        goto LABEL_78;
      }
    }
  }
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x400000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x8000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x10000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x20000);
  CVisual::SetOpacity(
    *((CVisual **)a2 + 50),
    (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a2 + 50) + 720LL) + 352LL) / 255.0);
  v25 = (CVisual *)*((_QWORD *)a2 + 50);
  CVisual::SetDirtyFlags(v25, 0x40000);
  CVisual::SetDirtyFlags(v25, 0x4000000);
  CWindowData::OnColorizationUpdated(a2);
  v26 = (CVisual *)*((_QWORD *)a2 + 50);
  v27 = (CRenderDataVisual *)*((_QWORD *)v26 + 36);
  if ( v27 )
    CRenderDataVisual::ClearInstructions(v27);
  CVisual::SetDirtyFlags(v26, 0x80000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x4000);
  CTopLevelWindow::OnAccentPolicyUpdated(*((CTopLevelWindow **)a2 + 50));
  v28 = *((_QWORD *)a2 + 3);
  if ( v28 )
  {
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 296LL))(v28);
    CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v29);
  }
  v30 = *((_QWORD *)a2 + 3);
  if ( v30 )
  {
    v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 304LL))(v30);
    CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v31);
  }
  CWindowList::OnPositionChange(this, a2, 0);
  IsMagnifier = CWindowList::UpdateWindowScale(this, a2, 0);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v43 = 2042;
    goto LABEL_78;
  }
  v32 = (CVisual *)*((_QWORD *)a2 + 50);
  if ( v32 )
    CVisual::SetDirtyFlags(v32, 0x4000000);
  CWindowList::OnGDISurfaceChange(v32, a2);
  IsMagnifier = CWindowList::UpdateThumbnailsForNewWindow(v33, a2);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v43 = 2046;
    goto LABEL_78;
  }
  IsMagnifier = CLivePreview::OnWindowShowHide(
                  *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 54),
                  a2,
                  &v49,
                  0);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v43 = 2050;
    goto LABEL_78;
  }
  v35 = dword_1800C0E90;
  if ( !dword_1800C0E90 )
  {
    LODWORD(v50) = 0;
    if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CVisual **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 7)
                                                                    + 8LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
           L"ProjectionBordersUniversal",
           &v50) >= 0
      && (_DWORD)v50 == 1 )
    {
      dword_1800C0E90 = 2;
      goto LABEL_72;
    }
    v35 = 1;
    dword_1800C0E90 = 1;
  }
  if ( v35 == 2 )
LABEL_72:
    CWindowList::ShowProjectionBorder(this, a2, v34);
  if ( !v49 )
  {
    IsMagnifier = CTopLevelWindow3D::ShowWindow(*((const struct CWindowData ***)a2 + 51), 1, v12);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v43 = 2086;
      goto LABEL_78;
    }
  }
LABEL_41:
  IsMagnifier = CWindowData::OnVisibilityUpdated(a2);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v43 = 2104;
    goto LABEL_78;
  }
  if ( a3 )
  {
    v36 = *((_QWORD *)a2 + 15);
    v47 = -1LL;
    Buffer[0] = v36;
    v45 = 0LL;
    v46 = 0LL;
    Buffer[1] = 0LL;
    v48 = 0;
    v37 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    v38 = v37 ? v37[6] : 0LL;
    if ( *((_QWORD *)a2 + 5) == v38 )
    {
      IsMagnifier = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v43 = 2114;
LABEL_78:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, IsMagnifier, v43);
      }
    }
  }
  return (unsigned int)v10;
}
