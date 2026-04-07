/*
 * XREFs of ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D5C0
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180025110 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800277B0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027930 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180082D8C (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x1800165E4 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18002BAB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002BB6C (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002BC74 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002C974 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D200 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002F81C (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002F918 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  struct CWindowData *v4; // rcx
  struct CWindowData **v5; // rax
  char v6; // si
  __int64 v7; // rax
  char v8; // bp
  char v9; // bp
  struct CVisual *v10; // rsi
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisual *v12; // rsi
  struct CRenderDataVisual *v13; // rax
  CBaseObject *v14; // rcx
  __int64 Element; // rax
  struct CWindowData *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  DynArray<CWindowData *,0>::Remove((char *)this + 248, &Buffer);
  v4 = *(struct CWindowData **)a2;
  if ( *(struct CWindowData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct CWindowData **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v6 = *((_BYTE *)a2 + 592) & 4;
  if ( v6 )
  {
    Buffer = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 280), &Buffer);
    *((_BYTE *)a2 + 592) &= ~4u;
  }
  v7 = *((_QWORD *)a2 + 49);
  if ( v7 )
    *(_BYTE *)(v7 + 241) &= ~1u;
  *((_QWORD *)a2 + 4) = 0LL;
  v8 = *((_BYTE *)a2 + 592);
  *((_BYTE *)a2 + 592) = v8 & 0xFE;
  v9 = v8 & 1;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) )
  {
    CWindowList::CheckForMaximizedChange(this, a2);
    if ( v9 )
    {
      if ( *((_DWORD *)a2 + 28) == 1 || !v6 )
        CWindowList::ShowHide(this, a2, 1);
    }
    else
    {
      CWindowData::OnVisibilityUpdated((CWindowData **)a2);
    }
  }
  v10 = (struct CVisual *)*((_QWORD *)a2 + 50);
  if ( v10 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32), v10);
  }
  v12 = (struct CVisual *)*((_QWORD *)a2 + 49);
  if ( v12 )
  {
    v13 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CRenderDataVisual *)((char *)v13 + 32), v12);
  }
  v14 = (CBaseObject *)*((_QWORD *)a2 + 47);
  if ( v14 )
  {
    CBaseObject::Release(v14);
    *((_QWORD *)a2 + 47) = 0LL;
  }
  CWindowList::OnGDISurfaceChange(v14, a2);
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (char *)this + 8,
              *((_QWORD *)a2 + 15));
  if ( Element )
    Element = *(_QWORD *)(Element + 48);
  if ( *((_QWORD *)a2 + 5) == Element )
    CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
  if ( !*((_QWORD *)a2 + 3) )
    CWindowList::ImmediateDestroyWindow(this, a2);
}
