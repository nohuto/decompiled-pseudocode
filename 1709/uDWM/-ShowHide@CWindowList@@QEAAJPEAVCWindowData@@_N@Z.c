/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180004FEC (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180027100 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800282D0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028580 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002AA70 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180011798 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180011818 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019690 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001ECD4 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x18001EF10 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180022D78 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800231F0 (-Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x1800232C8 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800256E8 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180025858 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180025D48 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x180025E2C (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800263A0 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800263D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027A40 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002BCB0 (-SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002BD50 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002C1BC (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x1800348B0 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800348E4 (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180034AFC (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180035858 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x180038960 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800798D0 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18007CB7C (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z @ 0x18007D754 (-IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007D97C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
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
  CDwmWinSqm *v26; // rcx
  struct _LIST_ENTRY *PrecedingVisibleWindowVisual; // rbx
  __int64 Element; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  CVisual *v31; // rbx
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rcx
  char v35; // al
  CVisual *v36; // rcx
  CWindowList *v37; // rcx
  bool v38; // r8
  int v39; // eax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  int v44; // r9d
  CDwmWinSqm *v45; // rcx
  struct CVisual *v46; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned int v48; // [rsp+20h] [rbp-60h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v50; // [rsp+40h] [rbp-40h]
  __int128 v51; // [rsp+50h] [rbp-30h]
  __int64 v52; // [rsp+60h] [rbp-20h]
  char v53; // [rsp+68h] [rbp-18h]
  CTopLevelWindow3D *v54; // [rsp+C8h] [rbp+48h] BYREF
  char v55; // [rsp+D0h] [rbp+50h]
  CVisual *v56; // [rsp+D8h] [rbp+58h] BYREF

  v55 = a3;
  v4 = *((_QWORD *)a2 + 5);
  v5 = *((_BYTE *)a2 + 592) & 1;
  LOBYTE(v54) = 0;
  v6 = a3;
  if ( !v4 || (v8 = 1, v4 != *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 80)) )
    v8 = 0;
  v9 = 0;
  if ( !v8 )
    v9 = v5;
  if ( !v9 )
  {
    IsMagnifier = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 60),
                    a2,
                    (bool *)&v54,
                    0);
    v11 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v48 = 2150;
      goto LABEL_93;
    }
    if ( !(_BYTE)v54 )
    {
      v12 = (const struct CWindowData **)*((_QWORD *)a2 + 51);
      if ( v12 )
      {
        IsMagnifier = CTopLevelWindow3D::ShowWindow(v12, 0, 0);
        v11 = IsMagnifier;
        if ( IsMagnifier < 0 )
        {
          v48 = 2156;
          goto LABEL_93;
        }
      }
    }
    goto LABEL_51;
  }
  v13 = 0;
  if ( !*((_QWORD *)a2 + 50) )
  {
    v14 = CTopLevelWindow::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v56);
    v15 = v56;
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x33u);
    }
    else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
    {
      v16 = (HWND)*((_QWORD *)a2 + 5);
      if ( v16 )
      {
        if ( (*((_BYTE *)a2 + 596) & 0x20) == 0 )
          CTopLevelWindow::SendTopLevelWindowCommand(v15, v16, a2);
      }
    }
    if ( v11 < 0 )
    {
      v48 = 2035;
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
          v24 = v54;
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
          *((_QWORD *)a2 + 50) = v15;
          *((_QWORD *)a2 + 51) = v24;
          if ( !v25 )
          {
            IsMagnifier = CVisual::SetIsMagnifier(v15, v23);
            v11 = IsMagnifier;
            if ( IsMagnifier < 0 )
            {
              v48 = 2047;
              goto LABEL_93;
            }
            *((_BYTE *)a2 + 595) &= ~1u;
          }
          if ( (*((_BYTE *)a2 + 596) & 2) != 0 )
          {
            IsMagnifier = CVisual::SetIsCursor(v15, 1);
            v11 = IsMagnifier;
            if ( IsMagnifier < 0 )
            {
              v48 = 2053;
              goto LABEL_93;
            }
          }
          if ( WinSqmIsOptedIn_CachedInDwm()
            && (*((_BYTE *)a2 + 595) & 2) != 0
            && CDwmWinSqm::IsTopLevelAppWindow(v26, a2) )
          {
            CDwmWinSqm::WindowCreated(v45, a2);
            *((_BYTE *)a2 + 594) |= 0x10u;
          }
          v13 = 1;
          goto LABEL_33;
        }
      }
      else
      {
        v11 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x40u);
      }
      v48 = 2039;
    }
    v44 = v11;
LABEL_94:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, v48);
    return (unsigned int)v11;
  }
LABEL_33:
  PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, (struct _LIST_ENTRY *)a2);
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (char *)this + 8,
              *((_QWORD *)a2 + 15));
  if ( Element )
    v29 = *(_QWORD *)(Element + 24);
  else
    v29 = 0LL;
  IsMagnifier = VisualCollection::InsertRelative(
                  (VisualCollection *)(v29 + 32),
                  *((struct CVisual ***)a2 + 50),
                  (struct CVisual *)PrecedingVisibleWindowVisual,
                  1u,
                  1);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v48 = 2069;
    goto LABEL_93;
  }
  v30 = *((_QWORD *)a2 + 52);
  if ( v30 )
  {
    if ( *(_QWORD *)(v30 + 24) )
    {
      v46 = (struct CVisual *)*((_QWORD *)a2 + 50);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
      IsMagnifier = VisualCollection::InsertRelative(
                      (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                      (struct CVisual **)v30,
                      v46,
                      1u,
                      1);
      v11 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v48 = 2072;
        goto LABEL_93;
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
  v31 = (CVisual *)*((_QWORD *)a2 + 50);
  CVisual::SetDirtyFlags(v31, 0x40000);
  CVisual::SetDirtyFlags(v31, 0x4000000);
  CWindowData::OnColorizationUpdated(a2);
  CTopLevelWindow::OnBlurBehindUpdated(*((CTopLevelWindow **)a2 + 50));
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 50), 0x4000);
  CTopLevelWindow::OnAccentPolicyUpdated(*((CTopLevelWindow **)a2 + 50));
  v32 = *((_QWORD *)a2 + 3);
  if ( v32 )
  {
    v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 296LL))(v32);
    CWindowList::SetExcludeFromDDA(this, *((struct IDwmWindow **)a2 + 3), v33);
  }
  v34 = *((_QWORD *)a2 + 3);
  if ( v34 )
  {
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 304LL))(v34);
    CWindowList::SetPassiveUpdateMode(this, *((struct IDwmWindow **)a2 + 3), v35);
  }
  CWindowList::OnPositionChange(this, a2, 0);
  IsMagnifier = CWindowList::UpdateWindowScale(this, a2, 0);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v48 = 2099;
    goto LABEL_93;
  }
  v36 = (CVisual *)*((_QWORD *)a2 + 50);
  if ( v36 )
    CVisual::SetDirtyFlags(v36, 0x4000000);
  CWindowList::OnGDISurfaceChange(v36, a2);
  IsMagnifier = CWindowList::UpdateThumbnailsForNewWindow(v37, a2);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v48 = 2103;
    goto LABEL_93;
  }
  IsMagnifier = CLivePreview::OnWindowShowHide(
                  *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 60),
                  a2,
                  (bool *)&v54,
                  0);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v48 = 2107;
    goto LABEL_93;
  }
  v39 = dword_1800BEED0;
  if ( dword_1800BEED0 )
  {
LABEL_47:
    if ( v39 != 2 )
      goto LABEL_48;
    goto LABEL_87;
  }
  LODWORD(v56) = 0;
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CVisual **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 7)
                                                                  + 8LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
         L"ProjectionBordersUniversal",
         &v56) < 0
    || (_DWORD)v56 != 1 )
  {
    v39 = 1;
    dword_1800BEED0 = 1;
    goto LABEL_47;
  }
  dword_1800BEED0 = 2;
LABEL_87:
  CWindowList::ShowProjectionBorder(this, a2, v38);
LABEL_48:
  if ( !(_BYTE)v54 )
  {
    IsMagnifier = CTopLevelWindow3D::ShowWindow(*((const struct CWindowData ***)a2 + 51), 1, v13);
    v11 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v48 = 2143;
      goto LABEL_93;
    }
  }
  v6 = v55;
LABEL_51:
  IsMagnifier = CWindowData::OnVisibilityUpdated((CWindowData **)a2);
  v11 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v48 = 2161;
    goto LABEL_93;
  }
  if ( v6 )
  {
    v40 = *((_QWORD *)a2 + 15);
    v52 = -1LL;
    Buffer[0] = v40;
    v50 = 0LL;
    v51 = 0LL;
    Buffer[1] = 0LL;
    v53 = 0;
    v41 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    v42 = v41 ? v41[6] : 0LL;
    if ( *((_QWORD *)a2 + 5) == v42 )
    {
      IsMagnifier = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
      v11 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v48 = 2171;
LABEL_93:
        v44 = IsMagnifier;
        goto LABEL_94;
      }
    }
  }
  return (unsigned int)v11;
}
