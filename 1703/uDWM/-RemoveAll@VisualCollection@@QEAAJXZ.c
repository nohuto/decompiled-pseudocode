/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009C80 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180009FD4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000AE30 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000DEB0 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800132A4 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x18001CB3C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18001E344 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180020760 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180023950 (--1CVisual@@MEAA@XZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180035950 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180039390 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006ED38 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x1800757A0 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180075914 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180082350 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180094EB0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009DF38 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180019F40 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x18001A200 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x18001F9C0 (--_GCButton@@MEAAPEAXI@Z.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180020760 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180020C30 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x180024400 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v2; // edi
  __int64 v4; // r14
  CVisual *v5; // rcx
  int (*v6)(CVisual *__hidden, struct CVisual *); // rax
  int v7; // eax
  unsigned int v8; // esi
  volatile signed __int32 *v9; // rcx
  void *(__fastcall *v10)(CButton *__hidden, unsigned int); // rax
  int v11; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    do
    {
      v4 = 8LL * v2;
      v5 = *(CVisual **)(v4 + *((_QWORD *)this + 2));
      v6 = *(int (**)(CVisual *__hidden, struct CVisual *))(*(_QWORD *)v5 + 64LL);
      if ( v6 == CVisual::SetParent )
        v7 = CVisual::SetParent(v5, 0LL);
      else
        v7 = ((__int64 (__fastcall *)(CVisual *, _QWORD))v6)(v5, 0LL);
      v8 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x150u);
        return v8;
      }
      v9 = *(volatile signed __int32 **)(v4 + *((_QWORD *)this + 2));
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          v10 = **(void *(__fastcall ***)(CButton *__hidden, unsigned int))v9;
          if ( v10 == CCanvasVisual::`scalar deleting destructor' )
          {
            CCanvasVisual::`scalar deleting destructor'((CCanvasVisual *)v9, 1u);
          }
          else if ( v10 == CAtlasedRectsVisual::`vector deleting destructor' )
          {
            CAtlasedRectsVisual::`vector deleting destructor'((CAtlasedRectsVisual *)v9, 1u);
          }
          else if ( v10 == CClientArea::`scalar deleting destructor' )
          {
            CClientArea::`scalar deleting destructor'((CClientArea *)v9, 1u);
          }
          else if ( v10 == CButton::`scalar deleting destructor' )
          {
            CButton::`scalar deleting destructor'((CButton *)v9, 1u);
          }
          else if ( v10 == CTopLevelAtlasedRectsVisual::`scalar deleting destructor' )
          {
            CTopLevelAtlasedRectsVisual::`scalar deleting destructor'((CTopLevelAtlasedRectsVisual *)v9, 1u);
          }
          else
          {
            v10((CButton *)v9, 1u);
          }
        }
        *(_QWORD *)(v4 + *((_QWORD *)this + 2)) = 0LL;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 10) );
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)
                                                    + 416LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 24LL));
    v2 = v11;
    if ( v11 >= 0 )
      goto LABEL_2;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x156u);
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 8LL);
  }
  return v2;
}
