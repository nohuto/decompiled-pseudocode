/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180006EE0 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000BE40 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000C994 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x1800106B0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180012850 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800183B0 (--1CVisual@@MEAA@XZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002792C (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180069EE4 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x18006A478 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18006A5EC (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18007728C (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180079E20 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18008F8F0 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800913C0 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009C028 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x180015BB0 (--_GCButton@@MEAAPEAXI@Z.c)
 *     ??_GCCanvasVisual@@MEAAPEAXI@Z @ 0x180016790 (--_GCCanvasVisual@@MEAAPEAXI@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x180018DD0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180023340 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x18002C460 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180030940 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
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
  void *(__fastcall *v10)(CAtlasedRectsVisual *__hidden, unsigned int); // rax
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
          v10 = **(void *(__fastcall ***)(CAtlasedRectsVisual *__hidden, unsigned int))v9;
          if ( v10 == CCanvasVisual::`scalar deleting destructor' )
          {
            CCanvasVisual::`scalar deleting destructor'((CCanvasVisual *)v9, 1u);
          }
          else if ( v10 == CAtlasedRectsVisual::`vector deleting destructor' )
          {
            CAtlasedRectsVisual::`vector deleting destructor'((CAtlasedRectsVisual *)v9, 1u);
          }
          else if ( v10 == CButton::`scalar deleting destructor' )
          {
            CButton::`scalar deleting destructor'((CButton *)v9, 1u);
          }
          else if ( v10 == CClientArea::`scalar deleting destructor' )
          {
            CClientArea::`scalar deleting destructor'((CClientArea *)v9, 1u);
          }
          else if ( v10 == CTopLevelAtlasedRectsVisual::`scalar deleting destructor' )
          {
            CTopLevelAtlasedRectsVisual::`scalar deleting destructor'((CTopLevelAtlasedRectsVisual *)v9, 1u);
          }
          else
          {
            v10((CAtlasedRectsVisual *)v9, 1u);
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
