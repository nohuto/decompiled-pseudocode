/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002792C
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006EE0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C00 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C50 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180074420 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D70C (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180027F4C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002C1BC (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

struct CVisual *__fastcall CWindowList::GetOverlayRootVisualForDesktop(CWindowList *this, unsigned __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 Element; // rax
  __int64 v7; // rsi
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
              (char *)this + 8,
              a2);
  v7 = Element;
  if ( a3 )
  {
    if ( !Element )
      return (struct CVisual *)v3;
    if ( !*(_QWORD *)(Element + 40) )
    {
      v9 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v15);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x4B5u);
      }
      else
      {
        v11 = (volatile signed __int32 *)v15;
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(*(_QWORD *)(v7 + 8) + 32LL),
                     (struct CVisual **)v15,
                     0LL,
                     0,
                     1);
        v10 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x4B6u);
          goto LABEL_12;
        }
        *(_QWORD *)(v7 + 40) = v11;
        if ( !v11 )
        {
LABEL_12:
          if ( v10 < 0 )
          {
            if ( v11 )
            {
              VisualCollection::RemoveAll((VisualCollection *)(v11 + 8));
              RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                                                   a2);
              VisualCollection::Remove(
                (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                (struct CVisual *)v11);
            }
            v14 = *(CBaseObject **)(v7 + 40);
            if ( v14 )
            {
              CBaseObject::Release(v14);
              *(_QWORD *)(v7 + 40) = 0LL;
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
    return *(struct CVisual **)(v7 + 40);
  return (struct CVisual *)v3;
}
