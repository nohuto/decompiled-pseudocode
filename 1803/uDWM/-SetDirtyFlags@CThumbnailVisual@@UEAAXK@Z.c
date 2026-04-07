/*
 * XREFs of ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440
 * Callers:
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800126A4 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18001270C (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012CFC (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800130F0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180013550 (-OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800135A0 (-OnSizeChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800135E0 (-OnSWRInvalidated@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013600 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180016664 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180016D90 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180017060 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180018280 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180018770 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029320 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002C188 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18006C6A0 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?EndTransition@CThumbnailVisual@@UEAAXXZ @ 0x180081220 (-EndTransition@CThumbnailVisual@@UEAAXXZ.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x180081464 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180025994 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180026750 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThumbnailVisual::SetDirtyFlags(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  CThumbnailVisual *v4; // rbx
  __int64 v5; // rcx
  CVisual *v6; // rcx
  int v7; // eax
  void (__fastcall *v8)(CVisual *__hidden); // rax

  v2 = *((_QWORD *)this + 46);
  v4 = this;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 34) )
    {
      v5 = *(_QWORD *)(v2 + 16);
      if ( v5 )
      {
        v6 = *(CVisual **)(v5 + 392);
        if ( v6 )
        {
          v7 = *((_DWORD *)v6 + 20);
          if ( (v7 & 0x8000000) == 0 )
          {
            *((_DWORD *)v6 + 20) = v7 | 0x8000000;
            CVisual::PropagateDirtyChildren(v6);
          }
        }
      }
    }
  }
  if ( (a2 & *((_DWORD *)v4 + 20)) != a2 )
  {
    *((_DWORD *)v4 + 20) |= a2;
    while ( 1 )
    {
      v4 = (CThumbnailVisual *)*((_QWORD *)v4 + 3);
      if ( !v4 || (*((_BYTE *)v4 + 80) & 1) != 0 )
        break;
      v8 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v4 + 32LL);
      if ( v8 == CVisual::SetDirtyChildren )
        CVisual::SetDirtyChildren(v4);
      else
        v8(v4);
    }
  }
}
