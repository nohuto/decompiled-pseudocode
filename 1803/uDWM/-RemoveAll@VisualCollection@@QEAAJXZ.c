/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180005C90 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180008F90 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800092C8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180010178 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800108AC (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013600 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180018560 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180025E30 (--1CVisual@@MEAA@XZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180026F60 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004203C (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180070C04 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180071194 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180071308 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800808FC (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180083030 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180099B58 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800A44B4 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x18000F860 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180010B50 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x180016850 (--_GCButton@@MEAAPEAXI@Z.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180018560 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020F90 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180023630 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x1800268E0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
  CTopLevelAtlasedRectsVisual *(__fastcall *v10)(CTopLevelAtlasedRectsVisual *, char); // rax
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x150u);
        return v8;
      }
      v9 = *(volatile signed __int32 **)(v4 + *((_QWORD *)this + 2));
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          v10 = **(CTopLevelAtlasedRectsVisual *(__fastcall ***)(CTopLevelAtlasedRectsVisual *, char))v9;
          if ( (char *)v10 == (char *)CCanvasVisual::`scalar deleting destructor' )
          {
            CCanvasVisual::`scalar deleting destructor'((CCanvasVisual *)v9, 1u);
          }
          else if ( (char *)v10 == (char *)CAtlasedRectsVisual::`vector deleting destructor' )
          {
            CAtlasedRectsVisual::`vector deleting destructor'((CAtlasedRectsVisual *)v9, 1u);
          }
          else if ( (char *)v10 == (char *)CClientArea::`scalar deleting destructor' )
          {
            CClientArea::`scalar deleting destructor'((CClientArea *)v9, 1u);
          }
          else if ( (char *)v10 == (char *)CButton::`scalar deleting destructor' )
          {
            CButton::`scalar deleting destructor'((CButton *)v9, 1u);
          }
          else if ( v10 == CTopLevelAtlasedRectsVisual::`scalar deleting destructor' )
          {
            CTopLevelAtlasedRectsVisual::`scalar deleting destructor'((CTopLevelAtlasedRectsVisual *)v9, 1);
          }
          else
          {
            v10((CTopLevelAtlasedRectsVisual *)v9, 1);
          }
        }
        *(_QWORD *)(v4 + *((_QWORD *)this + 2)) = 0LL;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 10) );
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)
                                                    + 432LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 24LL));
    v2 = v11;
    if ( v11 >= 0 )
      goto LABEL_2;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x156u);
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 8LL);
  }
  return v2;
}
