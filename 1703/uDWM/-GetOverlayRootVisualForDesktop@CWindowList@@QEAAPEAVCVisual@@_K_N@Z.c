/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180035950
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009C80 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x1800350D8 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004141C (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004146C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007E770 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180015AD8 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002EF7C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B404 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

struct CVisual *__fastcall CWindowList::GetOverlayRootVisualForDesktop(CWindowList *this, __int64 a2, char a3)
{
  __int64 v3; // rdi
  _QWORD *Element; // rax
  _QWORD *v7; // rsi
  int v9; // eax
  int v10; // ebp
  volatile signed __int32 *v11; // rbx
  int inserted; // eax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v14; // rcx
  struct CVisual *v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v15 = 0LL;
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  v7 = Element;
  if ( a3 )
  {
    if ( !Element )
      return (struct CVisual *)v3;
    if ( !Element[5] )
    {
      v9 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v15);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x477u);
      }
      else
      {
        v11 = (volatile signed __int32 *)v15;
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v7[1] + 32LL), v15, 0LL, 0, 1);
        v10 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x478u);
          goto LABEL_12;
        }
        v7[5] = v11;
        if ( !v11 )
        {
LABEL_12:
          if ( v10 < 0 )
          {
            if ( v11 )
            {
              VisualCollection::RemoveAll((VisualCollection *)(v11 + 8));
              RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                                                   a2);
              VisualCollection::Remove(
                (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                (struct CVisual *)v11);
            }
            v14 = (CBaseObject *)v7[5];
            if ( v14 )
            {
              CBaseObject::Release(v14);
              v7[5] = 0LL;
            }
          }
          if ( v11 )
            CBaseObject::Release((CBaseObject *)v11);
          goto LABEL_2;
        }
        _InterlockedIncrement(v11 + 2);
      }
      v11 = (volatile signed __int32 *)v15;
      goto LABEL_12;
    }
  }
LABEL_2:
  if ( v7 )
    return (struct CVisual *)v7[5];
  return (struct CVisual *)v3;
}
